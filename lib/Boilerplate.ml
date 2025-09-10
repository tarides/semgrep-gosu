(**
   Boilerplate to be used as a template when mapping the gosu CST
   to another type of tree.
*)

module R = Tree_sitter_run.Raw_tree

(* Disable warnings against unused variables *)
[@@@warning "-26-27"]

(* Disable warning against unused 'rec' *)
[@@@warning "-39"]

type env = unit

let token (env : env) (tok : Tree_sitter_run.Token.t) =
  R.Token tok

let blank (env : env) () =
  R.Tuple []

let map_digit (env : env) (tok : CST.digit) =
  (* pattern [0-9] *) token env tok

let map_pat_0_3 (env : env) (tok : CST.pat_0_3) =
  (* pattern 0-3 *) token env tok

let map_letter (env : env) (tok : CST.letter) =
  (* pattern [A-Za-z_$] *) token env tok

let map_pat_dcaf70f (env : env) (tok : CST.pat_dcaf70f) =
  (* pattern [A-F] *) token env tok

let map_zerotoseven (env : env) (tok : CST.zerotoseven) =
  (* pattern [0-7] *) token env tok

let map_pat_dd18f70 (env : env) (tok : CST.pat_dd18f70) =
  (* pattern [a-f] *) token env tok

let map_any_character (env : env) (tok : CST.any_character) =
  (* pattern . *) token env tok

let map_ident (env : env) ((v1, v2) : CST.ident) =
  let v1 = (* pattern [A-Za-z_$] *) token env v1 in
  let v2 =
    R.List (List.map (fun x ->
      (match x with
      | `Digit tok -> R.Case ("Digit",
          (* pattern [0-9] *) token env tok
        )
      | `Letter tok -> R.Case ("Letter",
          (* pattern [A-Za-z_$] *) token env tok
        )
      )
    ) v2)
  in
  R.Tuple [v1; v2]

let map_octalescape (env : env) (x : CST.octalescape) =
  (match x with
  | `BSLASH_pat_0_3_zero_zero (v1, v2, v3, v4) -> R.Case ("BSLASH_pat_0_3_zero_zero",
      let v1 = (* "\\" *) token env v1 in
      let v2 = map_pat_0_3 env v2 in
      let v3 = (* pattern [0-7] *) token env v3 in
      let v4 = (* pattern [0-7] *) token env v4 in
      R.Tuple [v1; v2; v3; v4]
    )
  | `BSLASH_zero_zero (v1, v2, v3) -> R.Case ("BSLASH_zero_zero",
      let v1 = (* "\\" *) token env v1 in
      let v2 = (* pattern [0-7] *) token env v2 in
      let v3 = (* pattern [0-7] *) token env v3 in
      R.Tuple [v1; v2; v3]
    )
  | `BSLASH_zero (v1, v2) -> R.Case ("BSLASH_zero",
      let v1 = (* "\\" *) token env v1 in
      let v2 = (* pattern [0-7] *) token env v2 in
      R.Tuple [v1; v2]
    )
  )

let map_hexdigit (env : env) (x : CST.hexdigit) =
  (match x with
  | `Digit tok -> R.Case ("Digit",
      (* pattern [0-9] *) token env tok
    )
  | `Pat_dcaf70f x -> R.Case ("Pat_dcaf70f",
      map_pat_dcaf70f env x
    )
  | `Pat_dd18f70 x -> R.Case ("Pat_dd18f70",
      map_pat_dd18f70 env x
    )
  )

let map_id (env : env) (x : CST.id) =
  map_ident env x

let map_idclassorinterfacetype (env : env) (x : CST.idclassorinterfacetype) =
  map_ident env x

let map_classorinterfacetype (env : env) (x : CST.classorinterfacetype) =
  map_idclassorinterfacetype env x

let map_escapesequence (env : env) (x : CST.escapesequence) =
  (match x with
  | `BSLASH_choice_v (v1, v2) -> R.Case ("BSLASH_choice_v",
      let v1 = (* "\\" *) token env v1 in
      let v2 =
        (match v2 with
        | `V tok -> R.Case ("V",
            (* "v" *) token env tok
          )
        | `A tok -> R.Case ("A",
            (* "a" *) token env tok
          )
        | `B tok -> R.Case ("B",
            (* "b" *) token env tok
          )
        | `T tok -> R.Case ("T",
            (* "t" *) token env tok
          )
        | `N tok -> R.Case ("N",
            (* "n" *) token env tok
          )
        | `F tok -> R.Case ("F",
            (* "f" *) token env tok
          )
        | `R tok -> R.Case ("R",
            (* "r" *) token env tok
          )
        | `DQUOT tok -> R.Case ("DQUOT",
            (* "\"" *) token env tok
          )
        | `SQUOT tok -> R.Case ("SQUOT",
            (* "'" *) token env tok
          )
        | `BSLASH tok -> R.Case ("BSLASH",
            (* "\\" *) token env tok
          )
        | `DOLLAR tok -> R.Case ("DOLLAR",
            (* "$" *) token env tok
          )
        | `LT tok -> R.Case ("LT",
            (* "<" *) token env tok
          )
        )
      in
      R.Tuple [v1; v2]
    )
  | `Unic (v1, v2, v3, v4, v5) -> R.Case ("Unic",
      let v1 = (* "\\u" *) token env v1 in
      let v2 = map_hexdigit env v2 in
      let v3 = map_hexdigit env v3 in
      let v4 = map_hexdigit env v4 in
      let v5 = map_hexdigit env v5 in
      R.Tuple [v1; v2; v3; v4; v5]
    )
  | `Octa x -> R.Case ("Octa",
      map_octalescape env x
    )
  )

let map_type_ (env : env) (x : CST.type_) =
  map_classorinterfacetype env x

let map_anon_choice_esca_b61eefe (env : env) (x : CST.anon_choice_esca_b61eefe) =
  (match x with
  | `Esca x -> R.Case ("Esca",
      map_escapesequence env x
    )
  | `Any_char tok -> R.Case ("Any_char",
      (* pattern . *) token env tok
    )
  )

let map_typeliteral (env : env) ((v1, v2) : CST.typeliteral) =
  let v1 = map_type_ env v1 in
  let v2 =
    (match v2 with
    | Some (v1, v2) -> R.Option (Some (
        let v1 = (* "&" *) token env v1 in
        let v2 = map_type_ env v2 in
        R.Tuple [v1; v2]
      ))
    | None -> R.Option None)
  in
  R.Tuple [v1; v2]

let map_stringliteral (env : env) (x : CST.stringliteral) =
  (match x with
  | `SQUOT_rep_choice_esca_SQUOT (v1, v2, v3) -> R.Case ("SQUOT_rep_choice_esca_SQUOT",
      let v1 = (* "'" *) token env v1 in
      let v2 =
        R.List (List.map (map_anon_choice_esca_b61eefe env) v2)
      in
      let v3 = (* "'" *) token env v3 in
      R.Tuple [v1; v2; v3]
    )
  | `DQUOT_rep_choice_esca_DQUOT (v1, v2, v3) -> R.Case ("DQUOT_rep_choice_esca_DQUOT",
      let v1 = (* "\"" *) token env v1 in
      let v2 =
        R.List (List.map (map_anon_choice_esca_b61eefe env) v2)
      in
      let v3 = (* "\"" *) token env v3 in
      R.Tuple [v1; v2; v3]
    )
  )

let map_typeliteralexpr (env : env) (x : CST.typeliteralexpr) =
  map_typeliteral env x

let map_literal (env : env) (x : CST.literal) =
  map_stringliteral env x

let map_typeannotation (env : env) ((v1, v2) : CST.typeannotation) =
  let v1 = (* ":" *) token env v1 in
  let v2 = map_typeliteralexpr env v2 in
  R.Tuple [v1; v2]

let map_primaryexpr (env : env) (x : CST.primaryexpr) =
  (match x with
  | `Lit x -> R.Case ("Lit",
      map_literal env x
    )
  | `Type x -> R.Case ("Type",
      map_typeliteralexpr env x
    )
  )

let map_unaryexprnotplusminus (env : env) (x : CST.unaryexprnotplusminus) =
  map_primaryexpr env x

let map_unaryexpr (env : env) (x : CST.unaryexpr) =
  map_unaryexprnotplusminus env x

let map_typeasexpr (env : env) (x : CST.typeasexpr) =
  map_unaryexpr env x

let map_multiplicativeexpr (env : env) (x : CST.multiplicativeexpr) =
  map_typeasexpr env x

let map_additiveexpr (env : env) (x : CST.additiveexpr) =
  map_multiplicativeexpr env x

let map_bitshiftexpr (env : env) (x : CST.bitshiftexpr) =
  map_additiveexpr env x

let map_intervalexpr (env : env) (x : CST.intervalexpr) =
  map_bitshiftexpr env x

let map_relationalexpr (env : env) (x : CST.relationalexpr) =
  map_intervalexpr env x

let map_equalityexpr (env : env) (x : CST.equalityexpr) =
  map_relationalexpr env x

let map_bitwiseandexpr (env : env) (x : CST.bitwiseandexpr) =
  map_equalityexpr env x

let map_bitwisexorexpr (env : env) (x : CST.bitwisexorexpr) =
  map_bitwiseandexpr env x

let map_bitwiseorexpr (env : env) (x : CST.bitwiseorexpr) =
  map_bitwisexorexpr env x

let map_conditionalandexpr (env : env) (x : CST.conditionalandexpr) =
  map_bitwiseorexpr env x

let map_conditionalorexpr (env : env) (x : CST.conditionalorexpr) =
  map_conditionalandexpr env x

let map_conditionalexpr (env : env) (x : CST.conditionalexpr) =
  map_conditionalorexpr env x

let map_expression (env : env) (x : CST.expression) =
  map_conditionalexpr env x

let map_parenthexpr (env : env) ((v1, v2, v3) : CST.parenthexpr) =
  let v1 = (* "(" *) token env v1 in
  let v2 = map_expression env v2 in
  let v3 = (* ")" *) token env v3 in
  R.Tuple [v1; v2; v3]

let map_localvarstatement (env : env) ((v1, v2, v3, v4) : CST.localvarstatement) =
  let v1 = (* "var" *) token env v1 in
  let v2 = map_id env v2 in
  let v3 =
    (match v3 with
    | Some x -> R.Option (Some (
        map_typeannotation env x
      ))
    | None -> R.Option None)
  in
  let v4 =
    (match v4 with
    | Some (v1, v2) -> R.Option (Some (
        let v1 = (* "=" *) token env v1 in
        let v2 = map_expression env v2 in
        R.Tuple [v1; v2]
      ))
    | None -> R.Option None)
  in
  R.Tuple [v1; v2; v3; v4]

let map_argexpression (env : env) (x : CST.argexpression) =
  (match x with
  | `Name (v1, v2, v3, v4) -> R.Case ("Name",
      let v1 = (* ":" *) token env v1 in
      let v2 = map_id env v2 in
      let v3 = (* "=" *) token env v3 in
      let v4 = map_expression env v4 in
      R.Tuple [v1; v2; v3; v4]
    )
  | `Exp x -> R.Case ("Exp",
      map_expression env x
    )
  )

let map_indirectmemberaccessone (env : env) (x : CST.indirectmemberaccessone) =
  (match x with
  | `Args (v1, v2, v3) -> R.Case ("Args",
      let v1 = (* "(" *) token env v1 in
      let v2 =
        (match v2 with
        | Some (v1, v2) -> R.Option (Some (
            let v1 = map_argexpression env v1 in
            let v2 =
              R.List (List.map (fun (v1, v2) ->
                let v1 = (* ", " *) token env v1 in
                let v2 = map_argexpression env v2 in
                R.Tuple [v1; v2]
              ) v2)
            in
            R.Tuple [v1; v2]
          ))
        | None -> R.Option None)
      in
      let v3 = (* ")" *) token env v3 in
      R.Tuple [v1; v2; v3]
    )
  )

let map_assignmentormethodcall (env : env) ((v1, v2) : CST.assignmentormethodcall) =
  let v1 =
    (match v1 with
    | `Type x -> R.Case ("Type",
        map_typeliteralexpr env x
      )
    | `Pare x -> R.Case ("Pare",
        map_parenthexpr env x
      )
    | `Stri x -> R.Case ("Stri",
        map_literal env x
      )
    )
  in
  let v2 =
    R.List (List.map (map_indirectmemberaccessone env) v2)
  in
  R.Tuple [v1; v2]

let map_statement (env : env) (x : CST.statement) =
  (match x with
  | `Choice_loca_opt_SEMI (v1, v2) -> R.Case ("Choice_loca_opt_SEMI",
      let v1 =
        (match v1 with
        | `Loca x -> R.Case ("Loca",
            map_localvarstatement env x
          )
        | `Assi x -> R.Case ("Assi",
            map_assignmentormethodcall env x
          )
        )
      in
      let v2 =
        (match v2 with
        | Some tok -> R.Option (Some (
            (* ";" *) token env tok
          ))
        | None -> R.Option None)
      in
      R.Tuple [v1; v2]
    )
  | `SEMI tok -> R.Case ("SEMI",
      (* ";" *) token env tok
    )
  )

let map_source_file (env : env) (xs : CST.source_file) =
  R.List (List.map (map_statement env) xs)

let dump_tree root =
  map_source_file () root
  |> Tree_sitter_run.Raw_tree.to_channel stdout
let dump_extras (extras : CST.extras) = ()
