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

let map_additiveop (env : env) (x : CST.additiveop) =
  (match x with
  | `PLUS tok -> R.Case ("PLUS",
      (* "+" *) token env tok
    )
  | `DASH tok -> R.Case ("DASH",
      (* "-" *) token env tok
    )
  | `QMARKPLUS tok -> R.Case ("QMARKPLUS",
      (* "?+" *) token env tok
    )
  | `QMARKDASH tok -> R.Case ("QMARKDASH",
      (* "?-" *) token env tok
    )
  )

let map_id (env : env) (tok : CST.id) =
  (* id *) token env tok

let map_pat_dc28280 (env : env) (tok : CST.pat_dc28280) =
  (* pattern "[^'\\\\]+" *) token env tok

let map_stringliteral (env : env) (x : CST.stringliteral) =
  (match x with
  | `SQUOT_pat_dc28280_SQUOT (v1, v2, v3) -> R.Case ("SQUOT_pat_dc28280_SQUOT",
      let v1 = (* "'" *) token env v1 in
      let v2 = map_pat_dc28280 env v2 in
      let v3 = (* "'" *) token env v3 in
      R.Tuple [v1; v2; v3]
    )
  | `DQUOT_pat_3a2a380_DQUOT (v1, v2, v3) -> R.Case ("DQUOT_pat_3a2a380_DQUOT",
      let v1 = (* "\"" *) token env v1 in
      let v2 = map_pat_3a2a380 env v2 in
      let v3 = (* "\"" *) token env v3 in
      R.Tuple [v1; v2; v3]
    )
  )

let map_type_ (env : env) (x : CST.type_) =
  (match x with
  | `Type_id tok -> R.Case ("Type_id",
      (* id *) token env tok
    )
  )

let map_namespacestatement (env : env) ((v1, v2, v3) : CST.namespacestatement) =
  let v1 = (* id *) token env v1 in
  let v2 =
    R.List (List.map (fun (v1, v2) ->
      let v1 = (* "." *) token env v1 in
      let v2 = (* id *) token env v2 in
      R.Tuple [v1; v2]
    ) v2)
  in
  let v3 = R.List (List.map (token env (* ";" *)) v3) in
  R.Tuple [v1; v2; v3]

let map_usesstatement (env : env) (x : CST.usesstatement) =
  (match x with
  | `Uses_id_rep_DOT_id_opt_DOT_STAR_rep_SEMI (v1, v2, v3, v4, v5) -> R.Case ("Uses_id_rep_DOT_id_opt_DOT_STAR_rep_SEMI",
      let v1 = (* "uses" *) token env v1 in
      let v2 = (* id *) token env v2 in
      let v3 =
        R.List (List.map (fun (v1, v2) ->
          let v1 = (* "." *) token env v1 in
          let v2 = (* id *) token env v2 in
          R.Tuple [v1; v2]
        ) v3)
      in
      let v4 =
        (match v4 with
        | Some (v1, v2) -> R.Option (Some (
            let v1 = (* "." *) token env v1 in
            let v2 = (* "*" *) token env v2 in
            R.Tuple [v1; v2]
          ))
        | None -> R.Option None)
      in
      let v5 = R.List (List.map (token env (* ";" *)) v5) in
      R.Tuple [v1; v2; v3; v4; v5]
    )
  | `Semg_ellips tok -> R.Case ("Semg_ellips",
      (* "..." *) token env tok
    )
  )

let rec map_additiveexpr (env : env) ((v1, v2, v3) : CST.additiveexpr) =
  let v1 = map_expression env v1 in
  let v2 = map_additiveop env v2 in
  let v3 = map_expression env v3 in
  R.Tuple [v1; v2; v3]

and map_arguments (env : env) ((v1, v2, v3) : CST.arguments) =
  let v1 = (* "(" *) token env v1 in
  let v2 =
    (match v2 with
    | Some (v1, v2) -> R.Option (Some (
        let v1 = map_expression env v1 in
        let v2 =
          R.List (List.map (fun (v1, v2) ->
            let v1 = (* "," *) token env v1 in
            let v2 = map_expression env v2 in
            R.Tuple [v1; v2]
          ) v2)
        in
        R.Tuple [v1; v2]
      ))
    | None -> R.Option None)
  in
  let v3 = (* ")" *) token env v3 in
  R.Tuple [v1; v2; v3]

and map_expression (env : env) (x : CST.expression) =
  (match x with
  | `Choice_stri_rep_indi1 (v1, v2) -> R.Case ("Choice_stri_rep_indi1",
      let v1 =
        (match v1 with
        | `Stri x -> R.Case ("Stri",
            map_stringliteral env x
          )
        | `Id tok -> R.Case ("Id",
            (* id *) token env tok
          )
        | `Addi x -> R.Case ("Addi",
            map_additiveexpr env x
          )
        | `Newe x -> R.Case ("Newe",
            map_newexpr env x
          )
        )
      in
      let v2 =
        R.List (List.map (map_indirectmemberaccess1 env) v2)
      in
      R.Tuple [v1; v2]
    )
  | `Semg_ellips tok -> R.Case ("Semg_ellips",
      (* "..." *) token env tok
    )
  )

and map_indirectmemberaccess1 (env : env) (x : CST.indirectmemberaccess1) =
  (match x with
  | `DOT_id (v1, v2) -> R.Case ("DOT_id",
      let v1 = (* "." *) token env v1 in
      let v2 = (* id *) token env v2 in
      R.Tuple [v1; v2]
    )
  | `Args x -> R.Case ("Args",
      map_arguments env x
    )
  )

and map_newexpr (env : env) ((v1, v2, v3) : CST.newexpr) =
  let v1 = (* "new" *) token env v1 in
  let v2 = (* id *) token env v2 in
  let v3 = map_arguments env v3 in
  R.Tuple [v1; v2; v3]

let map_parameterdeclaration (env : env) (x : CST.parameterdeclaration) =
  (match x with
  | `Id_opt_choice_COLON_type_opt_EQ_exp (v1, v2) -> R.Case ("Id_opt_choice_COLON_type_opt_EQ_exp",
      let v1 = (* id *) token env v1 in
      let v2 =
        (match v2 with
        | Some x -> R.Option (Some (
            (match x with
            | `COLON_type_opt_EQ_exp (v1, v2, v3) -> R.Case ("COLON_type_opt_EQ_exp",
                let v1 = (* ":" *) token env v1 in
                let v2 = map_type_ env v2 in
                let v3 =
                  (match v3 with
                  | Some (v1, v2) -> R.Option (Some (
                      let v1 = (* "=" *) token env v1 in
                      let v2 = map_expression env v2 in
                      R.Tuple [v1; v2]
                    ))
                  | None -> R.Option None)
                in
                R.Tuple [v1; v2; v3]
              )
            | `EQ_exp (v1, v2) -> R.Case ("EQ_exp",
                let v1 = (* "=" *) token env v1 in
                let v2 = map_expression env v2 in
                R.Tuple [v1; v2]
              )
            )
          ))
        | None -> R.Option None)
      in
      R.Tuple [v1; v2]
    )
  | `Semg_ellips tok -> R.Case ("Semg_ellips",
      (* "..." *) token env tok
    )
  )

let map_parameterdeclarationlist (env : env) ((v1, v2) : CST.parameterdeclarationlist) =
  let v1 = map_parameterdeclaration env v1 in
  let v2 =
    R.List (List.map (fun (v1, v2) ->
      let v1 = (* "," *) token env v1 in
      let v2 = map_parameterdeclaration env v2 in
      R.Tuple [v1; v2]
    ) v2)
  in
  R.Tuple [v1; v2]

let map_statement_ (env : env) (x : CST.statement_) =
  (match x with
  | `Loca (v1, v2, v3, v4) -> R.Case ("Loca",
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
        | Some (v1, v2) -> R.Option (Some (
            let v1 = (* "=" *) token env v1 in
            let v2 = map_expression env v2 in
            R.Tuple [v1; v2]
          ))
        | None -> R.Option None)
      in
      R.Tuple [v1; v2; v3; v4]
    )
  | `Assi (v1, v2) -> R.Case ("Assi",
      let v1 =
        (match v1 with
        | `Id tok -> R.Case ("Id",
            (* id *) token env tok
          )
        | `Newe x -> R.Case ("Newe",
            map_newexpr env x
          )
        )
      in
      let v2 =
        R.List (List.map (map_indirectmemberaccess1 env) v2)
      in
      R.Tuple [v1; v2]
    )
  | `Semg_ellips tok -> R.Case ("Semg_ellips",
      (* "..." *) token env tok
    )
  )

let map_statement (env : env) ((v1, v2) : CST.statement) =
  let v1 = map_statement_ env v1 in
  let v2 =
    (match v2 with
    | Some tok -> R.Option (Some (
        (* ";" *) token env tok
      ))
    | None -> R.Option None)
  in
  R.Tuple [v1; v2]

let map_functiondefn (env : env) ((v1, v2, v3, v4, v5, v6) : CST.functiondefn) =
  let v1 = (* "function" *) token env v1 in
  let v2 = (* id *) token env v2 in
  let v3 = (* "(" *) token env v3 in
  let v4 =
    (match v4 with
    | Some x -> R.Option (Some (
        map_parameterdeclarationlist env x
      ))
    | None -> R.Option None)
  in
  let v5 = (* ")" *) token env v5 in
  let v6 =
    (match v6 with
    | Some (v1, v2, v3) -> R.Option (Some (
        let v1 = (* "{" *) token env v1 in
        let v2 = R.List (List.map (map_statement env) v2) in
        let v3 = (* "}" *) token env v3 in
        R.Tuple [v1; v2; v3]
      ))
    | None -> R.Option None)
  in
  R.Tuple [v1; v2; v3; v4; v5; v6]

let map_declaration (env : env) (x : CST.declaration) =
  (match x with
  | `Fiel (v1, v2, v3, v4, v5, v6, v7) -> R.Case ("Fiel",
      let v1 =
        (match v1 with
        | Some x -> R.Option (Some (
            map_modifiers env x
          ))
        | None -> R.Option None)
      in
      let v2 = (* "var" *) token env v2 in
      let v3 = (* id *) token env v3 in
      let v4 =
        (match v4 with
        | Some (v1, v2) -> R.Option (Some (
            let v1 = (* ":" *) token env v1 in
            let v2 = map_type_ env v2 in
            R.Tuple [v1; v2]
          ))
        | None -> R.Option None)
      in
      let v5 =
        (match v5 with
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
      let v6 =
        (match v6 with
        | Some (v1, v2) -> R.Option (Some (
            let v1 = (* "=" *) token env v1 in
            let v2 = map_expression env v2 in
            R.Tuple [v1; v2]
          ))
        | None -> R.Option None)
      in
      let v7 =
        (match v7 with
        | Some tok -> R.Option (Some (
            (* ";" *) token env tok
          ))
        | None -> R.Option None)
      in
      R.Tuple [v1; v2; v3; v4; v5; v6; v7]
    )
  | `Func x -> R.Case ("Func",
      map_functiondefn env x
    )
  | `Semg_ellips tok -> R.Case ("Semg_ellips",
      (* "..." *) token env tok
    )
  )

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

let map_start (env : env) ((v1, v2, v3, v4) : CST.start) =
  let v1 =
    (match v1 with
    | Some (v1, v2) -> R.Option (Some (
        let v1 = (* "package" *) token env v1 in
        let v2 = map_namespacestatement env v2 in
        R.Tuple [v1; v2]
      ))
    | None -> R.Option None)
  in
  let v2 = R.List (List.map (map_usesstatement env) v2) in
  let v3 =
    (match v3 with
    | Some x -> R.Option (Some (
        map_modifiers env x
      ))
    | None -> R.Option None)
  in
  let v4 =
    (match v4 with
    | `Gclass x -> R.Case ("Gclass",
        map_gclass env x
      )
    | `Func x -> R.Case ("Func",
        map_functiondefn env x
      )
    | `Stmt x -> R.Case ("Stmt",
        map_statement env x
      )
    )
  in
  R.Tuple [v1; v2; v3; v4]

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
