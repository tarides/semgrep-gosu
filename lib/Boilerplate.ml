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

let map_pat_dd18f70 (env : env) (tok : CST.pat_dd18f70) =
  (* pattern [a-f] *) token env tok

let map_digit (env : env) (tok : CST.digit) =
  (* pattern [0-9] *) token env tok

let map_pat_0_3 (env : env) (tok : CST.pat_0_3) =
  (* pattern 0-3 *) token env tok

let map_pat_3a2a380 (env : env) (tok : CST.pat_3a2a380) =
  (* pattern "[^\"\\\\]+" *) token env tok

let map_modifiers (env : env) (xs : CST.modifiers) =
  R.List (List.map (fun x ->
    (match x with
    | `Priv tok -> R.Case ("Priv",
        (* "private" *) token env tok
      )
    | `Inte tok -> R.Case ("Inte",
        (* "internal" *) token env tok
      )
    | `Prot tok -> R.Case ("Prot",
        (* "protected" *) token env tok
      )
    | `Public tok -> R.Case ("Public",
        (* "public" *) token env tok
      )
    | `Static tok -> R.Case ("Static",
        (* "static" *) token env tok
      )
    | `Abst tok -> R.Case ("Abst",
        (* "abstract" *) token env tok
      )
    | `Over tok -> R.Case ("Over",
        (* "override" *) token env tok
      )
    | `Final tok -> R.Case ("Final",
        (* "final" *) token env tok
      )
    | `Tran tok -> R.Case ("Tran",
        (* "transient" *) token env tok
      )
    )
  ) xs)

let map_pat_dc28280 (env : env) (tok : CST.pat_dc28280) =
  (* pattern "[^'\\\\]+" *) token env tok

let map_zerotoseven (env : env) (tok : CST.zerotoseven) =
  (* pattern [0-7] *) token env tok

let map_pat_dcaf70f (env : env) (tok : CST.pat_dcaf70f) =
  (* pattern [A-F] *) token env tok

let map_id (env : env) (tok : CST.id) =
  (* id *) token env tok

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

let map_type_ (env : env) (x : CST.type_) =
  (match x with
  | `Type_id tok -> R.Case ("Type_id",
      (* id *) token env tok
    )
  )

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

let map_stringliteral (env : env) (x : CST.stringliteral) =
  (match x with
  | `SQUOT_rep_choice_esca_SQUOT (v1, v2, v3) -> R.Case ("SQUOT_rep_choice_esca_SQUOT",
      let v1 = (* "'" *) token env v1 in
      let v2 =
        R.List (List.map (fun x ->
          (match x with
          | `Esca x -> R.Case ("Esca",
              map_escapesequence env x
            )
          | `Pat_dc28280 x -> R.Case ("Pat_dc28280",
              map_pat_dc28280 env x
            )
          )
        ) v2)
      in
      let v3 = (* "'" *) token env v3 in
      R.Tuple [v1; v2; v3]
    )
  | `DQUOT_rep_choice_esca_DQUOT (v1, v2, v3) -> R.Case ("DQUOT_rep_choice_esca_DQUOT",
      let v1 = (* "\"" *) token env v1 in
      let v2 =
        R.List (List.map (fun x ->
          (match x with
          | `Esca x -> R.Case ("Esca",
              map_escapesequence env x
            )
          | `Pat_3a2a380 x -> R.Case ("Pat_3a2a380",
              map_pat_3a2a380 env x
            )
          )
        ) v2)
      in
      let v3 = (* "\"" *) token env v3 in
      R.Tuple [v1; v2; v3]
    )
  )

let map_expression (env : env) (x : CST.expression) =
  (match x with
  | `Stri x -> R.Case ("Stri",
      map_stringliteral env x
    )
  )

let map_fielddefn (env : env) ((v1, v2, v3, v4, v5) : CST.fielddefn) =
  let v1 = (* "var" *) token env v1 in
  let v2 = (* id *) token env v2 in
  let v3 =
    (match v3 with
    | Some (v1, v2) -> R.Option (Some (
        let v1 = (* ":" *) token env v1 in
        let v2 = map_type_ env v2 in
        R.Tuple [v1; v2]
      ))
    | None -> R.Option None)
  in
  let v4 =
    (match v4 with
    | Some (v1, v2, v3) -> R.Option (Some (
        let v1 = (* "as" *) token env v1 in
        let v2 =
          (match v2 with
          | Some tok -> R.Option (Some (
              (* "readonly" *) token env tok
            ))
          | None -> R.Option None)
        in
        let v3 = (* id *) token env v3 in
        R.Tuple [v1; v2; v3]
      ))
    | None -> R.Option None)
  in
  let v5 =
    (match v5 with
    | Some (v1, v2) -> R.Option (Some (
        let v1 = (* "=" *) token env v1 in
        let v2 = map_expression env v2 in
        R.Tuple [v1; v2]
      ))
    | None -> R.Option None)
  in
  R.Tuple [v1; v2; v3; v4; v5]

let map_declaration (env : env) ((v1, v2, v3) : CST.declaration) =
  let v1 =
    (match v1 with
    | Some x -> R.Option (Some (
        map_modifiers env x
      ))
    | None -> R.Option None)
  in
  let v2 =
    (match v2 with
    | `Fiel x -> R.Case ("Fiel",
        map_fielddefn env x
      )
    )
  in
  let v3 =
    (match v3 with
    | Some tok -> R.Option (Some (
        (* ";" *) token env tok
      ))
    | None -> R.Option None)
  in
  R.Tuple [v1; v2; v3]

let map_classmembers (env : env) (xs : CST.classmembers) =
  R.List (List.map (map_declaration env) xs)

let map_classbody (env : env) ((v1, v2, v3) : CST.classbody) =
  let v1 = (* "{" *) token env v1 in
  let v2 =
    (match v2 with
    | Some x -> R.Option (Some (
        map_classmembers env x
      ))
    | None -> R.Option None)
  in
  let v3 = (* "}" *) token env v3 in
  R.Tuple [v1; v2; v3]

let map_gclass (env : env) ((v1, v2, v3) : CST.gclass) =
  let v1 = (* "class" *) token env v1 in
  let v2 = (* id *) token env v2 in
  let v3 = map_classbody env v3 in
  R.Tuple [v1; v2; v3]

let map_start (env : env) ((v1, v2) : CST.start) =
  let v1 =
    (match v1 with
    | Some x -> R.Option (Some (
        map_modifiers env x
      ))
    | None -> R.Option None)
  in
  let v2 =
    (match v2 with
    | `Gclass x -> R.Case ("Gclass",
        map_gclass env x
      )
    )
  in
  R.Tuple [v1; v2]

let map_line_comment (env : env) (tok : CST.line_comment) =
  (* pattern \/\/[^\n\r]* *) token env tok

let map_comment (env : env) (tok : CST.comment) =
  (* pattern \/\*([^\*]|(\*[^\/]))*\*\/ *) token env tok

let dump_tree root =
  map_start () root
  |> Tree_sitter_run.Raw_tree.to_channel stdout

let map_extra (env : env) (x : CST.extra) =
  match x with
  | `Comment (_loc, x) -> ("comment", "comment", map_comment env x)
  | `Line_comment (_loc, x) -> ("line_comment", "line_comment", map_line_comment env x)

let dump_extras (extras : CST.extras) =
  List.iter (fun extra ->
    let ts_rule_name, ocaml_type_name, raw_tree = map_extra () extra in
    let details =
      if ocaml_type_name <> ts_rule_name then
        Printf.sprintf " (OCaml type '%s')" ocaml_type_name
      else
        ""
    in
    Printf.printf "%s%s:\n" ts_rule_name details;
    Tree_sitter_run.Raw_tree.to_channel stdout raw_tree
  ) extras
