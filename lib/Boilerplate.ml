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

let map_equalityop (env : env) (x : CST.equalityop) =
  (match x with
  | `EQEQEQ tok -> R.Case ("EQEQEQ",
      (* "===" *) token env tok
    )
  | `BANGEQEQ tok -> R.Case ("BANGEQEQ",
      (* "!==" *) token env tok
    )
  | `EQEQ tok -> R.Case ("EQEQ",
      (* "==" *) token env tok
    )
  | `BANGEQ tok -> R.Case ("BANGEQ",
      (* "!=" *) token env tok
    )
  )

let map_typeasop (env : env) (x : CST.typeasop) =
  (match x with
  | `Typeas tok -> R.Case ("Typeas",
      (* "typeas" *) token env tok
    )
  | `As tok -> R.Case ("As",
      (* "as" *) token env tok
    )
  )

let map_anon_choice_0_eadfa15 (env : env) (x : CST.anon_choice_0_eadfa15) =
  (match x with
  | `X_0 tok -> R.Case ("X_0",
      (* "0" *) token env tok
    )
  | `X_1 tok -> R.Case ("X_1",
      (* "1" *) token env tok
    )
  )

let map_ident (env : env) (tok : CST.ident) =
  (* ident *) token env tok

let map_incrementop (env : env) (x : CST.incrementop) =
  (match x with
  | `PLUSPLUS tok -> R.Case ("PLUSPLUS",
      (* "++" *) token env tok
    )
  | `DASHDASH tok -> R.Case ("DASHDASH",
      (* "--" *) token env tok
    )
  )

let map_assignmentop (env : env) (x : CST.assignmentop) =
  (match x with
  | `EQ tok -> R.Case ("EQ",
      (* "=" *) token env tok
    )
  | `PLUSEQ tok -> R.Case ("PLUSEQ",
      (* "+=" *) token env tok
    )
  | `DASHEQ tok -> R.Case ("DASHEQ",
      (* "-=" *) token env tok
    )
  | `STAREQ tok -> R.Case ("STAREQ",
      (* "*=" *) token env tok
    )
  | `SLASHEQ tok -> R.Case ("SLASHEQ",
      (* "/=" *) token env tok
    )
  | `AMPEQ tok -> R.Case ("AMPEQ",
      (* "&=" *) token env tok
    )
  | `AMPAMPEQ tok -> R.Case ("AMPAMPEQ",
      (* "&&=" *) token env tok
    )
  | `BAREQ tok -> R.Case ("BAREQ",
      (* "|=" *) token env tok
    )
  | `BARBAREQ tok -> R.Case ("BARBAREQ",
      (* "||=" *) token env tok
    )
  | `HATEQ tok -> R.Case ("HATEQ",
      (* "^=" *) token env tok
    )
  | `PERCEQ tok -> R.Case ("PERCEQ",
      (* "%=" *) token env tok
    )
  | `LT_LT_EQ (v1, v2, v3) -> R.Case ("LT_LT_EQ",
      let v1 = (* "<" *) token env v1 in
      let v2 = (* "<" *) token env v2 in
      let v3 = (* "=" *) token env v3 in
      R.Tuple [v1; v2; v3]
    )
  | `GT_GT_GT_EQ (v1, v2, v3, v4) -> R.Case ("GT_GT_GT_EQ",
      let v1 = (* ">" *) token env v1 in
      let v2 = (* ">" *) token env v2 in
      let v3 = (* ">" *) token env v3 in
      let v4 = (* "=" *) token env v4 in
      R.Tuple [v1; v2; v3; v4]
    )
  | `GT_GT_EQ (v1, v2, v3) -> R.Case ("GT_GT_EQ",
      let v1 = (* ">" *) token env v1 in
      let v2 = (* ">" *) token env v2 in
      let v3 = (* "=" *) token env v3 in
      R.Tuple [v1; v2; v3]
    )
  )

let map_pat_0_3 (env : env) (tok : CST.pat_0_3) =
  (* pattern 0-3 *) token env tok

let map_unaryop (env : env) (x : CST.unaryop) =
  (match x with
  | `TILDE tok -> R.Case ("TILDE",
      (* "~" *) token env tok
    )
  | `BANG tok -> R.Case ("BANG",
      (* "!" *) token env tok
    )
  | `Not tok -> R.Case ("Not",
      (* "not" *) token env tok
    )
  | `Typeof tok -> R.Case ("Typeof",
      (* "typeof" *) token env tok
    )
  | `Stat tok -> R.Case ("Stat",
      (* "statictypeof" *) token env tok
    )
  )

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
  | `BANGPLUS tok -> R.Case ("BANGPLUS",
      (* "!+" *) token env tok
    )
  | `BANGDASH tok -> R.Case ("BANGDASH",
      (* "!-" *) token env tok
    )
  )

let map_digit (env : env) (tok : CST.digit) =
  (* pattern [0-9] *) token env tok

let map_zerotoseven (env : env) (tok : CST.zerotoseven) =
  (* pattern [0-7] *) token env tok

let map_integertypesuffix (env : env) (x : CST.integertypesuffix) =
  (match x with
  | `L_2db95e8 tok -> R.Case ("L_2db95e8",
      (* "l" *) token env tok
    )
  | `L_d20caec tok -> R.Case ("L_d20caec",
      (* "L" *) token env tok
    )
  | `S_03c7c0a tok -> R.Case ("S_03c7c0a",
      (* "s" *) token env tok
    )
  | `S_5dbc98d tok -> R.Case ("S_5dbc98d",
      (* "S" *) token env tok
    )
  | `Bi tok -> R.Case ("Bi",
      (* "bi" *) token env tok
    )
  | `BI tok -> R.Case ("BI",
      (* "BI" *) token env tok
    )
  | `B_92eb5ff tok -> R.Case ("B_92eb5ff",
      (* "b" *) token env tok
    )
  | `B_9d5ed67 tok -> R.Case ("B_9d5ed67",
      (* "B" *) token env tok
    )
  )

let map_relop (env : env) (x : CST.relop) =
  (match x with
  | `LT_EQ (v1, v2) -> R.Case ("LT_EQ",
      let v1 = (* "<" *) token env v1 in
      let v2 = (* "=" *) token env v2 in
      R.Tuple [v1; v2]
    )
  | `GT_EQ (v1, v2) -> R.Case ("GT_EQ",
      let v1 = (* ">" *) token env v1 in
      let v2 = (* "=" *) token env v2 in
      R.Tuple [v1; v2]
    )
  | `LT tok -> R.Case ("LT",
      (* "<" *) token env tok
    )
  | `GT tok -> R.Case ("GT",
      (* ">" *) token env tok
    )
  )

let map_floattypesuffix (env : env) (x : CST.floattypesuffix) =
  (match x with
  | `F_8fa14cd tok -> R.Case ("F_8fa14cd",
      (* "f" *) token env tok
    )
  | `F_8006189 tok -> R.Case ("F_8006189",
      (* "F" *) token env tok
    )
  | `D_8277e09 tok -> R.Case ("D_8277e09",
      (* "d" *) token env tok
    )
  | `D_f623e75 tok -> R.Case ("D_f623e75",
      (* "D" *) token env tok
    )
  | `Bd tok -> R.Case ("Bd",
      (* "bd" *) token env tok
    )
  | `BD tok -> R.Case ("BD",
      (* "BD" *) token env tok
    )
  )

let map_pat_dd18f70 (env : env) (tok : CST.pat_dd18f70) =
  (* pattern [a-f] *) token env tok

let map_bitshiftop (env : env) (x : CST.bitshiftop) =
  (match x with
  | `LT_LT (v1, v2) -> R.Case ("LT_LT",
      let v1 = (* "<" *) token env v1 in
      let v2 = (* "<" *) token env v2 in
      R.Tuple [v1; v2]
    )
  | `GT_GT_GT (v1, v2, v3) -> R.Case ("GT_GT_GT",
      let v1 = (* ">" *) token env v1 in
      let v2 = (* ">" *) token env v2 in
      let v3 = (* ">" *) token env v3 in
      R.Tuple [v1; v2; v3]
    )
  | `GT_GT (v1, v2) -> R.Case ("GT_GT",
      let v1 = (* ">" *) token env v1 in
      let v2 = (* ">" *) token env v2 in
      R.Tuple [v1; v2]
    )
  )

let map_pat_dcaf70f (env : env) (tok : CST.pat_dcaf70f) =
  (* pattern [A-F] *) token env tok

let map_multiplicativeop (env : env) (x : CST.multiplicativeop) =
  (match x with
  | `STAR tok -> R.Case ("STAR",
      (* "*" *) token env tok
    )
  | `SLASH tok -> R.Case ("SLASH",
      (* "/" *) token env tok
    )
  | `PERC tok -> R.Case ("PERC",
      (* "%" *) token env tok
    )
  | `QMARKSTAR tok -> R.Case ("QMARKSTAR",
      (* "?*" *) token env tok
    )
  | `BANGSTAR tok -> R.Case ("BANGSTAR",
      (* "!*" *) token env tok
    )
  | `QMARKSLASH tok -> R.Case ("QMARKSLASH",
      (* "?/" *) token env tok
    )
  | `QMARKPERC tok -> R.Case ("QMARKPERC",
      (* "?%" *) token env tok
    )
  )

let map_any_character (env : env) (tok : CST.any_character) =
  (* pattern . *) token env tok

let map_intervalop (env : env) (x : CST.intervalop) =
  (match x with
  | `DOTDOT tok -> R.Case ("DOTDOT",
      (* ".." *) token env tok
    )
  | `BARDOTDOT tok -> R.Case ("BARDOTDOT",
      (* "|.." *) token env tok
    )
  | `DOTDOTBAR tok -> R.Case ("DOTDOTBAR",
      (* "..|" *) token env tok
    )
  | `BARDOTDOTBAR tok -> R.Case ("BARDOTDOTBAR",
      (* "|..|" *) token env tok
    )
  )

let map_orop (env : env) (x : CST.orop) =
  (match x with
  | `BARBAR tok -> R.Case ("BARBAR",
      (* "||" *) token env tok
    )
  | `Or tok -> R.Case ("Or",
      (* "or" *) token env tok
    )
  )

let map_andop (env : env) (x : CST.andop) =
  (match x with
  | `AMPAMP tok -> R.Case ("AMPAMP",
      (* "&&" *) token env tok
    )
  | `And tok -> R.Case ("And",
      (* "and" *) token env tok
    )
  )

let map_exponent (env : env) ((v1, v2, v3, v4) : CST.exponent) =
  let v1 =
    (match v1 with
    | `E_e167179 tok -> R.Case ("E_e167179",
        (* "e" *) token env tok
      )
    | `E_3a3ea00 tok -> R.Case ("E_3a3ea00",
        (* "E" *) token env tok
      )
    )
  in
  let v2 =
    (match v2 with
    | Some x -> R.Option (Some (
        (match x with
        | `PLUS tok -> R.Case ("PLUS",
            (* "+" *) token env tok
          )
        | `DASH tok -> R.Case ("DASH",
            (* "-" *) token env tok
          )
        )
      ))
    | None -> R.Option None)
  in
  let v3 = (* pattern [0-9] *) token env v3 in
  let v4 =
    R.List (List.map (token env (* pattern [0-9] *)) v4)
  in
  R.Tuple [v1; v2; v3; v4]

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

let map_indexvar (env : env) ((v1, v2) : CST.indexvar) =
  let v1 = (* "index" *) token env v1 in
  let v2 = (* ident *) token env v2 in
  R.Tuple [v1; v2]

let map_iteratorvar (env : env) ((v1, v2) : CST.iteratorvar) =
  let v1 = (* "iterator" *) token env v1 in
  let v2 = (* ident *) token env v2 in
  R.Tuple [v1; v2]

let map_dotpathword (env : env) ((v1, v2) : CST.dotpathword) =
  let v1 = (* ident *) token env v1 in
  let v2 =
    R.List (List.map (fun (v1, v2) ->
      let v1 = (* "." *) token env v1 in
      let v2 = (* ident *) token env v2 in
      R.Tuple [v1; v2]
    ) v2)
  in
  R.Tuple [v1; v2]

let map_intorfloatpointliteral (env : env) (x : CST.intorfloatpointliteral) =
  (match x with
  | `DOT_digit_rep_digit_opt_floa (v1, v2, v3, v4) -> R.Case ("DOT_digit_rep_digit_opt_floa",
      let v1 = (* "." *) token env v1 in
      let v2 = (* pattern [0-9] *) token env v2 in
      let v3 =
        R.List (List.map (token env (* pattern [0-9] *)) v3)
      in
      let v4 =
        (match v4 with
        | Some x -> R.Option (Some (
            map_floattypesuffix env x
          ))
        | None -> R.Option None)
      in
      R.Tuple [v1; v2; v3; v4]
    )
  | `Digit_rep_digit_opt_choice_DOT_digit_rep_digit_opt_expo_opt_floa (v1, v2, v3) -> R.Case ("Digit_rep_digit_opt_choice_DOT_digit_rep_digit_opt_expo_opt_floa",
      let v1 = (* pattern [0-9] *) token env v1 in
      let v2 =
        R.List (List.map (token env (* pattern [0-9] *)) v2)
      in
      let v3 =
        (match v3 with
        | Some x -> R.Option (Some (
            (match x with
            | `DOT_digit_rep_digit_opt_expo_opt_floa (v1, v2, v3, v4, v5) -> R.Case ("DOT_digit_rep_digit_opt_expo_opt_floa",
                let v1 = (* "." *) token env v1 in
                let v2 = (* pattern [0-9] *) token env v2 in
                let v3 =
                  R.List (List.map (token env (* pattern [0-9] *)) v3)
                in
                let v4 =
                  (match v4 with
                  | Some x -> R.Option (Some (
                      map_exponent env x
                    ))
                  | None -> R.Option None)
                in
                let v5 =
                  (match v5 with
                  | Some x -> R.Option (Some (
                      map_floattypesuffix env x
                    ))
                  | None -> R.Option None)
                in
                R.Tuple [v1; v2; v3; v4; v5]
              )
            | `Expo_opt_floa (v1, v2) -> R.Case ("Expo_opt_floa",
                let v1 = map_exponent env v1 in
                let v2 =
                  (match v2 with
                  | Some x -> R.Option (Some (
                      map_floattypesuffix env x
                    ))
                  | None -> R.Option None)
                in
                R.Tuple [v1; v2]
              )
            | `Floa x -> R.Case ("Floa",
                map_floattypesuffix env x
              )
            | `Inte x -> R.Case ("Inte",
                map_integertypesuffix env x
              )
            )
          ))
        | None -> R.Option None)
      in
      R.Tuple [v1; v2; v3]
    )
  )

let map_indexrest (env : env) (x : CST.indexrest) =
  (match x with
  | `Inde_iter (v1, v2) -> R.Case ("Inde_iter",
      let v1 = map_indexvar env v1 in
      let v2 = map_iteratorvar env v2 in
      R.Tuple [v1; v2]
    )
  | `Iter_inde (v1, v2) -> R.Case ("Iter_inde",
      let v1 = map_iteratorvar env v1 in
      let v2 = map_indexvar env v2 in
      R.Tuple [v1; v2]
    )
  | `Inde x -> R.Case ("Inde",
      map_indexvar env x
    )
  | `Iter x -> R.Case ("Iter",
      map_iteratorvar env x
    )
  )

let map_usesstatement (env : env) ((v1, v2, v3) : CST.usesstatement) =
  let v1 = map_dotpathword env v1 in
  let v2 =
    (match v2 with
    | Some (v1, v2) -> R.Option (Some (
        let v1 = (* "." *) token env v1 in
        let v2 = (* "*" *) token env v2 in
        R.Tuple [v1; v2]
      ))
    | None -> R.Option None)
  in
  let v3 = R.List (List.map (token env (* ";" *)) v3) in
  R.Tuple [v1; v2; v3]

let map_namespacestatement (env : env) ((v1, v2) : CST.namespacestatement) =
  let v1 = map_dotpathword env v1 in
  let v2 = R.List (List.map (token env (* ";" *)) v2) in
  R.Tuple [v1; v2]

let map_numberliteral (env : env) (x : CST.numberliteral) =
  (match x with
  | `NaN tok -> R.Case ("NaN",
      (* "NaN" *) token env tok
    )
  | `Infi tok -> R.Case ("Infi",
      (* "Infinity" *) token env tok
    )
  | `Hexl (v1, v2, v3, v4) -> R.Case ("Hexl",
      let v1 =
        (match v1 with
        | `X_0x tok -> R.Case ("X_0x",
            (* "0x" *) token env tok
          )
        | `X_0X tok -> R.Case ("X_0X",
            (* "0X" *) token env tok
          )
        )
      in
      let v2 = map_hexdigit env v2 in
      let v3 = R.List (List.map (map_hexdigit env) v3) in
      let v4 =
        (match v4 with
        | Some x -> R.Option (Some (
            (match x with
            | `S_03c7c0a tok -> R.Case ("S_03c7c0a",
                (* "s" *) token env tok
              )
            | `S_5dbc98d tok -> R.Case ("S_5dbc98d",
                (* "S" *) token env tok
              )
            | `L_2db95e8 tok -> R.Case ("L_2db95e8",
                (* "l" *) token env tok
              )
            | `L_d20caec tok -> R.Case ("L_d20caec",
                (* "L" *) token env tok
              )
            )
          ))
        | None -> R.Option None)
      in
      R.Tuple [v1; v2; v3; v4]
    )
  | `Binl (v1, v2, v3, v4) -> R.Case ("Binl",
      let v1 =
        (match v1 with
        | `X_0b tok -> R.Case ("X_0b",
            (* "0b" *) token env tok
          )
        | `X_0B tok -> R.Case ("X_0B",
            (* "0B" *) token env tok
          )
        )
      in
      let v2 = map_anon_choice_0_eadfa15 env v2 in
      let v3 =
        R.List (List.map (map_anon_choice_0_eadfa15 env) v3)
      in
      let v4 =
        (match v4 with
        | Some x -> R.Option (Some (
            map_integertypesuffix env x
          ))
        | None -> R.Option None)
      in
      R.Tuple [v1; v2; v3; v4]
    )
  | `Into x -> R.Case ("Into",
      map_intorfloatpointliteral env x
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

let map_usesstatementlist (env : env) ((v1, v2, v3) : CST.usesstatementlist) =
  let v1 = (* "uses" *) token env v1 in
  let v2 = map_usesstatement env v2 in
  let v3 =
    R.List (List.map (fun (v1, v2) ->
      let v1 = (* "uses" *) token env v1 in
      let v2 = map_usesstatement env v2 in
      R.Tuple [v1; v2]
    ) v3)
  in
  R.Tuple [v1; v2; v3]

let map_anon_choice_esca_b61eefe (env : env) (x : CST.anon_choice_esca_b61eefe) =
  (match x with
  | `Esca x -> R.Case ("Esca",
      map_escapesequence env x
    )
  | `Any_char tok -> R.Case ("Any_char",
      (* pattern . *) token env tok
    )
  )

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

let rec map_additiveexpr (env : env) ((v1, v2) : CST.additiveexpr) =
  let v1 = map_multiplicativeexpr env v1 in
  let v2 =
    R.List (List.map (fun (v1, v2) ->
      let v1 = map_additiveop env v1 in
      let v2 = map_multiplicativeexpr env v2 in
      R.Tuple [v1; v2]
    ) v2)
  in
  R.Tuple [v1; v2]

and map_annotation (env : env) ((v1, v2, v3, v4) : CST.annotation) =
  let v1 = (* "@" *) token env v1 in
  let v2 = (* ident *) token env v2 in
  let v3 =
    R.List (List.map (fun (v1, v2) ->
      let v1 = (* "." *) token env v1 in
      let v2 = (* ident *) token env v2 in
      R.Tuple [v1; v2]
    ) v3)
  in
  let v4 =
    (match v4 with
    | Some x -> R.Option (Some (
        map_annotationarguments env x
      ))
    | None -> R.Option None)
  in
  R.Tuple [v1; v2; v3; v4]

and map_annotationarguments (env : env) (x : CST.annotationarguments) =
  map_arguments env x

and map_anon_LT_type_rep_COMMA_type_GT_b734705 (env : env) ((v1, v2, v3, v4) : CST.anon_LT_type_rep_COMMA_type_GT_b734705) =
  let v1 = (* "<" *) token env v1 in
  let v2 = map_typeargument env v2 in
  let v3 =
    R.List (List.map (fun (v1, v2) ->
      let v1 = (* "," *) token env v1 in
      let v2 = map_typeargument env v2 in
      R.Tuple [v1; v2]
    ) v3)
  in
  let v4 = (* ">" *) token env v4 in
  R.Tuple [v1; v2; v3; v4]

and map_anon_choice_COLON_type_7487407 (env : env) (x : CST.anon_choice_COLON_type_7487407) =
  (match x with
  | `COLON_type (v1, v2) -> R.Case ("COLON_type",
      let v1 = (* ":" *) token env v1 in
      let v2 = map_typeliterallist env v2 in
      R.Tuple [v1; v2]
    )
  | `Bloc x -> R.Case ("Bloc",
      map_blocktypeliteral env x
    )
  )

and map_anon_rep_choice_annots_36889ef (env : env) (xs : CST.anon_rep_choice_annots_36889ef) =
  R.List (List.map (fun x ->
    (match x with
    | `Args x -> R.Case ("Args",
        map_annotationarguments env x
      )
    )
  ) xs)

and map_argexpression (env : env) (x : CST.argexpression) =
  (match x with
  | `Name (v1, v2, v3, v4) -> R.Case ("Name",
      let v1 = (* ":" *) token env v1 in
      let v2 = (* ident *) token env v2 in
      let v3 = (* "=" *) token env v3 in
      let v4 = map_expression env v4 in
      R.Tuple [v1; v2; v3; v4]
    )
  | `Exp x -> R.Case ("Exp",
      map_expression env x
    )
  )

and map_arguments (env : env) ((v1, v2, v3) : CST.arguments) =
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

and map_assertstatement (env : env) ((v1, v2, v3) : CST.assertstatement) =
  let v1 = (* "assert" *) token env v1 in
  let v2 = map_expression env v2 in
  let v3 =
    (match v3 with
    | Some (v1, v2) -> R.Option (Some (
        let v1 = (* ":" *) token env v1 in
        let v2 = map_expression env v2 in
        R.Tuple [v1; v2]
      ))
    | None -> R.Option None)
  in
  R.Tuple [v1; v2; v3]

and map_assignmentormethodcall (env : env) ((v1, v2, v3) : CST.assignmentormethodcall) =
  let v1 =
    (match v1 with
    | `Type x -> R.Case ("Type",
        map_typeliteralexpr env x
      )
    | `Pare x -> R.Case ("Pare",
        map_parenthexpr env x
      )
    | `Stri x -> R.Case ("Stri",
        map_stringliteral env x
      )
    )
  in
  let v2 = map_anon_rep_choice_annots_36889ef env v2 in
  let v3 =
    (match v3 with
    | Some x -> R.Option (Some (
        (match x with
        | `Incr x -> R.Case ("Incr",
            map_incrementop env x
          )
        | `Assi_exp (v1, v2) -> R.Case ("Assi_exp",
            let v1 = map_assignmentop env v1 in
            let v2 = map_expression env v2 in
            R.Tuple [v1; v2]
          )
        )
      ))
    | None -> R.Option None)
  in
  R.Tuple [v1; v2; v3]

and map_bitshiftexpr (env : env) ((v1, v2) : CST.bitshiftexpr) =
  let v1 = map_additiveexpr env v1 in
  let v2 =
    R.List (List.map (fun (v1, v2) ->
      let v1 = map_bitshiftop env v1 in
      let v2 = map_additiveexpr env v2 in
      R.Tuple [v1; v2]
    ) v2)
  in
  R.Tuple [v1; v2]

and map_bitwiseandexpr (env : env) ((v1, v2) : CST.bitwiseandexpr) =
  let v1 = map_equalityexpr env v1 in
  let v2 =
    R.List (List.map (fun (v1, v2) ->
      let v1 = (* "&" *) token env v1 in
      let v2 = map_equalityexpr env v2 in
      R.Tuple [v1; v2]
    ) v2)
  in
  R.Tuple [v1; v2]

and map_bitwiseorexpr (env : env) ((v1, v2) : CST.bitwiseorexpr) =
  let v1 = map_bitwisexorexpr env v1 in
  let v2 =
    R.List (List.map (fun (v1, v2) ->
      let v1 = (* "|" *) token env v1 in
      let v2 = map_bitwisexorexpr env v2 in
      R.Tuple [v1; v2]
    ) v2)
  in
  R.Tuple [v1; v2]

and map_bitwisexorexpr (env : env) ((v1, v2) : CST.bitwisexorexpr) =
  let v1 = map_bitwiseandexpr env v1 in
  let v2 =
    R.List (List.map (fun (v1, v2) ->
      let v1 = (* "^" *) token env v1 in
      let v2 = map_bitwiseandexpr env v2 in
      R.Tuple [v1; v2]
    ) v2)
  in
  R.Tuple [v1; v2]

and map_blockexpr (env : env) ((v1, v2, v3) : CST.blockexpr) =
  let v1 =
    (match v1 with
    | Some x -> R.Option (Some (
        map_parameterdeclarationlist env x
      ))
    | None -> R.Option None)
  in
  let v2 = (* "->" *) token env v2 in
  let v3 =
    (match v3 with
    | `Exp x -> R.Case ("Exp",
        map_expression env x
      )
    | `Stat x -> R.Case ("Stat",
        map_functionbody env x
      )
    )
  in
  R.Tuple [v1; v2; v3]

and map_blockliteral (env : env) ((v1, v2, v3, v4) : CST.blockliteral) =
  let v1 = (* "(" *) token env v1 in
  let v2 =
    (match v2 with
    | Some (v1, v2) -> R.Option (Some (
        let v1 = map_blockliteralarg env v1 in
        let v2 =
          R.List (List.map (fun (v1, v2) ->
            let v1 = (* "," *) token env v1 in
            let v2 = map_blockliteralarg env v2 in
            R.Tuple [v1; v2]
          ) v2)
        in
        R.Tuple [v1; v2]
      ))
    | None -> R.Option None)
  in
  let v3 = (* ")" *) token env v3 in
  let v4 =
    (match v4 with
    | Some (v1, v2) -> R.Option (Some (
        let v1 = (* ":" *) token env v1 in
        let v2 = map_typeliterallist env v2 in
        R.Tuple [v1; v2]
      ))
    | None -> R.Option None)
  in
  R.Tuple [v1; v2; v3; v4]

and map_blockliteralarg (env : env) (x : CST.blockliteralarg) =
  (match x with
  | `Id_opt_choice_EQ_exp (v1, v2) -> R.Case ("Id_opt_choice_EQ_exp",
      let v1 = (* ident *) token env v1 in
      let v2 =
        (match v2 with
        | Some x -> R.Option (Some (
            (match x with
            | `EQ_exp (v1, v2) -> R.Case ("EQ_exp",
                let v1 = (* "=" *) token env v1 in
                let v2 = map_expression env v2 in
                R.Tuple [v1; v2]
              )
            | `Bloc x -> R.Case ("Bloc",
                map_blocktypeliteral env x
              )
            )
          ))
        | None -> R.Option None)
      in
      R.Tuple [v1; v2]
    )
  | `Opt_id_COLON_type_opt_EQ_exp (v1, v2, v3) -> R.Case ("Opt_id_COLON_type_opt_EQ_exp",
      let v1 =
        (match v1 with
        | Some (v1, v2) -> R.Option (Some (
            let v1 = (* ident *) token env v1 in
            let v2 = (* ":" *) token env v2 in
            R.Tuple [v1; v2]
          ))
        | None -> R.Option None)
      in
      let v2 = map_typeliterallist env v2 in
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
  )

and map_blocktypeliteral (env : env) (x : CST.blocktypeliteral) =
  map_blockliteral env x

and map_catchclause (env : env) ((v1, v2, v3, v4, v5, v6, v7) : CST.catchclause) =
  let v1 = (* "catch" *) token env v1 in
  let v2 = (* "(" *) token env v2 in
  let v3 =
    (match v3 with
    | Some tok -> R.Option (Some (
        (* "var" *) token env tok
      ))
    | None -> R.Option None)
  in
  let v4 = (* ident *) token env v4 in
  let v5 =
    (match v5 with
    | Some (v1, v2) -> R.Option (Some (
        let v1 = (* ":" *) token env v1 in
        let v2 = map_typeliterallist env v2 in
        R.Tuple [v1; v2]
      ))
    | None -> R.Option None)
  in
  let v6 = (* ")" *) token env v6 in
  let v7 = map_functionbody env v7 in
  R.Tuple [v1; v2; v3; v4; v5; v6; v7]

and map_classorinterfacetype (env : env) ((v1, v2, v3) : CST.classorinterfacetype) =
  let v1 = (* ident *) token env v1 in
  let v2 =
    (match v2 with
    | Some x -> R.Option (Some (
        map_anon_LT_type_rep_COMMA_type_GT_b734705 env x
      ))
    | None -> R.Option None)
  in
  let v3 =
    R.List (List.map (fun (v1, v2, v3) ->
      let v1 = (* "." *) token env v1 in
      let v2 = (* ident *) token env v2 in
      let v3 =
        (match v3 with
        | Some x -> R.Option (Some (
            map_anon_LT_type_rep_COMMA_type_GT_b734705 env x
          ))
        | None -> R.Option None)
      in
      R.Tuple [v1; v2; v3]
    ) v3)
  in
  R.Tuple [v1; v2; v3]

and map_conditionalandexpr (env : env) ((v1, v2) : CST.conditionalandexpr) =
  let v1 = map_bitwiseorexpr env v1 in
  let v2 =
    R.List (List.map (fun (v1, v2) ->
      let v1 = map_andop env v1 in
      let v2 = map_bitwiseorexpr env v2 in
      R.Tuple [v1; v2]
    ) v2)
  in
  R.Tuple [v1; v2]

and map_conditionalexpr (env : env) ((v1, v2) : CST.conditionalexpr) =
  let v1 = map_conditionalorexpr env v1 in
  let v2 =
    (match v2 with
    | Some x -> R.Option (Some (
        (match x with
        | `QMARK_cond_COLON_cond (v1, v2, v3, v4) -> R.Case ("QMARK_cond_COLON_cond",
            let v1 = (* "?" *) token env v1 in
            let v2 = map_expression env v2 in
            let v3 = (* ":" *) token env v3 in
            let v4 = map_expression env v4 in
            R.Tuple [v1; v2; v3; v4]
          )
        | `QMARKCOLON_cond (v1, v2) -> R.Case ("QMARKCOLON_cond",
            let v1 = (* "?:" *) token env v1 in
            let v2 = map_expression env v2 in
            R.Tuple [v1; v2]
          )
        )
      ))
    | None -> R.Option None)
  in
  R.Tuple [v1; v2]

and map_conditionalorexpr (env : env) ((v1, v2) : CST.conditionalorexpr) =
  let v1 = map_conditionalandexpr env v1 in
  let v2 =
    R.List (List.map (fun (v1, v2) ->
      let v1 = map_orop env v1 in
      let v2 = map_conditionalandexpr env v2 in
      R.Tuple [v1; v2]
    ) v2)
  in
  R.Tuple [v1; v2]

and map_dowhilestatement (env : env) ((v1, v2, v3, v4, v5, v6) : CST.dowhilestatement) =
  let v1 = (* "do" *) token env v1 in
  let v2 = map_statement env v2 in
  let v3 = (* "while" *) token env v3 in
  let v4 = (* "(" *) token env v4 in
  let v5 = map_expression env v5 in
  let v6 = (* ")" *) token env v6 in
  R.Tuple [v1; v2; v3; v4; v5; v6]

and map_equalityexpr (env : env) ((v1, v2) : CST.equalityexpr) =
  let v1 = map_relationalexpr env v1 in
  let v2 =
    R.List (List.map (fun (v1, v2) ->
      let v1 = map_equalityop env v1 in
      let v2 = map_relationalexpr env v2 in
      R.Tuple [v1; v2]
    ) v2)
  in
  R.Tuple [v1; v2]

and map_evalexpr (env : env) ((v1, v2, v3, v4) : CST.evalexpr) =
  let v1 = (* "eval" *) token env v1 in
  let v2 = (* "(" *) token env v2 in
  let v3 = map_expression env v3 in
  let v4 = (* ")" *) token env v4 in
  R.Tuple [v1; v2; v3; v4]

and map_expression (env : env) (x : CST.expression) =
  map_conditionalexpr env x

and map_foreachstatement (env : env) ((v1, v2, v3, v4, v5) : CST.foreachstatement) =
  let v1 =
    (match v1 with
    | `Fore tok -> R.Case ("Fore",
        (* "foreach" *) token env tok
      )
    | `For tok -> R.Case ("For",
        (* "for" *) token env tok
      )
    )
  in
  let v2 = (* "(" *) token env v2 in
  let v3 =
    (match v3 with
    | `Exp_opt_inde (v1, v2) -> R.Case ("Exp_opt_inde",
        let v1 = map_expression env v1 in
        let v2 =
          (match v2 with
          | Some x -> R.Option (Some (
              map_indexvar env x
            ))
          | None -> R.Option None)
        in
        R.Tuple [v1; v2]
      )
    | `Opt_var_id_in_exp_opt_inde (v1, v2, v3, v4, v5) -> R.Case ("Opt_var_id_in_exp_opt_inde",
        let v1 =
          (match v1 with
          | Some tok -> R.Option (Some (
              (* "var" *) token env tok
            ))
          | None -> R.Option None)
        in
        let v2 = (* ident *) token env v2 in
        let v3 = (* "in" *) token env v3 in
        let v4 = map_expression env v4 in
        let v5 =
          (match v5 with
          | Some x -> R.Option (Some (
              map_indexrest env x
            ))
          | None -> R.Option None)
        in
        R.Tuple [v1; v2; v3; v4; v5]
      )
    )
  in
  let v4 = (* ")" *) token env v4 in
  let v5 = map_statement env v5 in
  R.Tuple [v1; v2; v3; v4; v5]

and map_functionbody (env : env) (x : CST.functionbody) =
  map_statementblock env x

and map_ifstatement (env : env) ((v1, v2, v3, v4, v5, v6, v7) : CST.ifstatement) =
  let v1 = (* "if" *) token env v1 in
  let v2 = (* "(" *) token env v2 in
  let v3 = map_expression env v3 in
  let v4 = (* ")" *) token env v4 in
  let v5 = map_statement env v5 in
  let v6 =
    (match v6 with
    | Some tok -> R.Option (Some (
        (* ";" *) token env tok
      ))
    | None -> R.Option None)
  in
  let v7 =
    (match v7 with
    | Some (v1, v2) -> R.Option (Some (
        let v1 = (* "else" *) token env v1 in
        let v2 = map_statement env v2 in
        R.Tuple [v1; v2]
      ))
    | None -> R.Option None)
  in
  R.Tuple [v1; v2; v3; v4; v5; v6; v7]

and map_intervalexpr (env : env) ((v1, v2) : CST.intervalexpr) =
  let v1 = map_bitshiftexpr env v1 in
  let v2 =
    (match v2 with
    | Some (v1, v2) -> R.Option (Some (
        let v1 = map_intervalop env v1 in
        let v2 = map_bitshiftexpr env v2 in
        R.Tuple [v1; v2]
      ))
    | None -> R.Option None)
  in
  R.Tuple [v1; v2]

and map_literal (env : env) (x : CST.literal) =
  (match x with
  | `Numb x -> R.Case ("Numb",
      map_numberliteral env x
    )
  | `Feat (v1, v2, v3, v4) -> R.Case ("Feat",
      let v1 = (* "#" *) token env v1 in
      let v2 =
        (match v2 with
        | `Id tok -> R.Case ("Id",
            (* ident *) token env tok
          )
        | `Cons tok -> R.Case ("Cons",
            (* "construct" *) token env tok
          )
        )
      in
      let v3 =
        (match v3 with
        | Some x -> R.Option (Some (
            map_anon_LT_type_rep_COMMA_type_GT_b734705 env x
          ))
        | None -> R.Option None)
      in
      let v4 =
        (match v4 with
        | Some x -> R.Option (Some (
            map_annotationarguments env x
          ))
        | None -> R.Option None)
      in
      R.Tuple [v1; v2; v3; v4]
    )
  | `Stri x -> R.Case ("Stri",
      map_stringliteral env x
    )
  | `Char (v1, v2, v3) -> R.Case ("Char",
      let v1 = (* "'" *) token env v1 in
      let v2 = map_anon_choice_esca_b61eefe env v2 in
      let v3 = (* "'" *) token env v3 in
      R.Tuple [v1; v2; v3]
    )
  | `True tok -> R.Case ("True",
      (* "true" *) token env tok
    )
  | `False tok -> R.Case ("False",
      (* "false" *) token env tok
    )
  | `Null tok -> R.Case ("Null",
      (* "null" *) token env tok
    )
  )

and map_localvarstatement (env : env) ((v1, v2, v3, v4) : CST.localvarstatement) =
  let v1 = (* "var" *) token env v1 in
  let v2 = (* ident *) token env v2 in
  let v3 =
    (match v3 with
    | Some x -> R.Option (Some (
        map_anon_choice_COLON_type_7487407 env x
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

and map_multiplicativeexpr (env : env) ((v1, v2) : CST.multiplicativeexpr) =
  let v1 = map_typeasexpr env v1 in
  let v2 =
    R.List (List.map (fun (v1, v2) ->
      let v1 = map_multiplicativeop env v1 in
      let v2 = map_typeasexpr env v2 in
      R.Tuple [v1; v2]
    ) v2)
  in
  R.Tuple [v1; v2]

and map_parameterdeclaration (env : env) ((v1, v2, v3, v4) : CST.parameterdeclaration) =
  let v1 = R.List (List.map (map_annotation env) v1) in
  let v2 =
    (match v2 with
    | Some tok -> R.Option (Some (
        (* "final" *) token env tok
      ))
    | None -> R.Option None)
  in
  let v3 = (* ident *) token env v3 in
  let v4 =
    (match v4 with
    | Some x -> R.Option (Some (
        (match x with
        | `COLON_type_opt_EQ_exp (v1, v2, v3) -> R.Case ("COLON_type_opt_EQ_exp",
            let v1 = (* ":" *) token env v1 in
            let v2 = map_typeliterallist env v2 in
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
        | `Bloc x -> R.Case ("Bloc",
            map_blocktypeliteral env x
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
  R.Tuple [v1; v2; v3; v4]

and map_parameterdeclarationlist (env : env) ((v1, v2) : CST.parameterdeclarationlist) =
  let v1 = map_parameterdeclaration env v1 in
  let v2 =
    R.List (List.map (fun (v1, v2) ->
      let v1 = (* "," *) token env v1 in
      let v2 = map_parameterdeclaration env v2 in
      R.Tuple [v1; v2]
    ) v2)
  in
  R.Tuple [v1; v2]

and map_parenthexpr (env : env) ((v1, v2, v3) : CST.parenthexpr) =
  let v1 = (* "(" *) token env v1 in
  let v2 = map_expression env v2 in
  let v3 = (* ")" *) token env v3 in
  R.Tuple [v1; v2; v3]

and map_relationalexpr (env : env) ((v1, v2) : CST.relationalexpr) =
  let v1 = map_intervalexpr env v1 in
  let v2 =
    R.List (List.map (fun x ->
      (match x with
      | `Relop_inte (v1, v2) -> R.Case ("Relop_inte",
          let v1 = map_relop env v1 in
          let v2 = map_intervalexpr env v2 in
          R.Tuple [v1; v2]
        )
      | `Typeis_type (v1, v2) -> R.Case ("Typeis_type",
          let v1 = (* "typeis" *) token env v1 in
          let v2 = map_typeliteraltype env v2 in
          R.Tuple [v1; v2]
        )
      )
    ) v2)
  in
  R.Tuple [v1; v2]

and map_returnstatement (env : env) ((v1, v2) : CST.returnstatement) =
  let v1 = (* "return" *) token env v1 in
  let v2 =
    (match v2 with
    | Some x -> R.Option (Some (
        map_expression env x
      ))
    | None -> R.Option None)
  in
  R.Tuple [v1; v2]

and map_statement (env : env) (x : CST.statement) =
  (match x with
  | `Choice_ifst_opt_SEMI (v1, v2) -> R.Case ("Choice_ifst_opt_SEMI",
      let v1 =
        (match v1 with
        | `Ifst x -> R.Case ("Ifst",
            map_ifstatement env x
          )
        | `Tryc x -> R.Case ("Tryc",
            map_trycatchfinallystatement env x
          )
        | `Thro x -> R.Case ("Thro",
            map_throwstatement env x
          )
        | `Cont tok -> R.Case ("Cont",
            (* "continue" *) token env tok
          )
        | `Brk tok -> R.Case ("Brk",
            (* "break" *) token env tok
          )
        | `Retu x -> R.Case ("Retu",
            map_returnstatement env x
          )
        | `Fore x -> R.Case ("Fore",
            map_foreachstatement env x
          )
        | `Whil x -> R.Case ("Whil",
            map_whilestatement env x
          )
        | `Dowh x -> R.Case ("Dowh",
            map_dowhilestatement env x
          )
        | `Swit x -> R.Case ("Swit",
            map_switchstatement env x
          )
        | `Usin x -> R.Case ("Usin",
            map_usingstatement env x
          )
        | `Asse x -> R.Case ("Asse",
            map_assertstatement env x
          )
        | `Final_loca (v1, v2) -> R.Case ("Final_loca",
            let v1 = (* "final" *) token env v1 in
            let v2 = map_localvarstatement env v2 in
            R.Tuple [v1; v2]
          )
        | `Loca x -> R.Case ("Loca",
            map_localvarstatement env x
          )
        | `Eval x -> R.Case ("Eval",
            map_evalexpr env x
          )
        | `Assi x -> R.Case ("Assi",
            map_assignmentormethodcall env x
          )
        | `Stat x -> R.Case ("Stat",
            map_functionbody env x
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

and map_statementblock (env : env) (x : CST.statementblock) =
  map_statementblockbody env x

and map_statementblockbody (env : env) ((v1, v2, v3) : CST.statementblockbody) =
  let v1 = (* "{" *) token env v1 in
  let v2 = R.List (List.map (map_statement env) v2) in
  let v3 = (* "}" *) token env v3 in
  R.Tuple [v1; v2; v3]

and map_switchblockstatementgroup (env : env) ((v1, v2) : CST.switchblockstatementgroup) =
  let v1 =
    (match v1 with
    | `Case_exp_COLON (v1, v2, v3) -> R.Case ("Case_exp_COLON",
        let v1 = (* "case" *) token env v1 in
        let v2 = map_expression env v2 in
        let v3 = (* ":" *) token env v3 in
        R.Tuple [v1; v2; v3]
      )
    | `Defa_COLON (v1, v2) -> R.Case ("Defa_COLON",
        let v1 = (* "default" *) token env v1 in
        let v2 = (* ":" *) token env v2 in
        R.Tuple [v1; v2]
      )
    )
  in
  let v2 = map_statement env v2 in
  R.Tuple [v1; v2]

and map_switchstatement (env : env) ((v1, v2, v3, v4, v5, v6, v7) : CST.switchstatement) =
  let v1 = (* "switch" *) token env v1 in
  let v2 = (* "(" *) token env v2 in
  let v3 = map_expression env v3 in
  let v4 = (* ")" *) token env v4 in
  let v5 = (* "{" *) token env v5 in
  let v6 =
    R.List (List.map (map_switchblockstatementgroup env) v6)
  in
  let v7 = (* "}" *) token env v7 in
  R.Tuple [v1; v2; v3; v4; v5; v6; v7]

and map_throwstatement (env : env) ((v1, v2) : CST.throwstatement) =
  let v1 = (* "throw" *) token env v1 in
  let v2 = map_expression env v2 in
  R.Tuple [v1; v2]

and map_trycatchfinallystatement (env : env) ((v1, v2, v3) : CST.trycatchfinallystatement) =
  let v1 = (* "try" *) token env v1 in
  let v2 = map_functionbody env v2 in
  let v3 =
    (match v3 with
    | `Catc_rep_catc_opt_fina_stat (v1, v2, v3) -> R.Case ("Catc_rep_catc_opt_fina_stat",
        let v1 = map_catchclause env v1 in
        let v2 = R.List (List.map (map_catchclause env) v2) in
        let v3 =
          (match v3 with
          | Some (v1, v2) -> R.Option (Some (
              let v1 = (* "finally" *) token env v1 in
              let v2 = map_functionbody env v2 in
              R.Tuple [v1; v2]
            ))
          | None -> R.Option None)
        in
        R.Tuple [v1; v2; v3]
      )
    | `Fina_stat (v1, v2) -> R.Case ("Fina_stat",
        let v1 = (* "finally" *) token env v1 in
        let v2 = map_functionbody env v2 in
        R.Tuple [v1; v2]
      )
    )
  in
  R.Tuple [v1; v2; v3]

and map_type_ (env : env) (x : CST.type_) =
  (match x with
  | `Clas_rep_LBRACK_RBRACK (v1, v2) -> R.Case ("Clas_rep_LBRACK_RBRACK",
      let v1 = map_classorinterfacetype env v1 in
      let v2 =
        R.List (List.map (fun (v1, v2) ->
          let v1 = (* "[" *) token env v1 in
          let v2 = (* "]" *) token env v2 in
          R.Tuple [v1; v2]
        ) v2)
      in
      R.Tuple [v1; v2]
    )
  | `Blk_bloc (v1, v2) -> R.Case ("Blk_bloc",
      let v1 = (* "block" *) token env v1 in
      let v2 = map_blocktypeliteral env v2 in
      R.Tuple [v1; v2]
    )
  )

and map_typeargument (env : env) (x : CST.typeargument) =
  (match x with
  | `Type x -> R.Case ("Type",
      map_typeliteraltype env x
    )
  | `QMARK_opt_choice_extends_type (v1, v2) -> R.Case ("QMARK_opt_choice_extends_type",
      let v1 = (* "?" *) token env v1 in
      let v2 =
        (match v2 with
        | Some (v1, v2) -> R.Option (Some (
            let v1 =
              (match v1 with
              | `Extends tok -> R.Case ("Extends",
                  (* "extends" *) token env tok
                )
              | `Super tok -> R.Case ("Super",
                  (* "super" *) token env tok
                )
              )
            in
            let v2 = map_typeliteraltype env v2 in
            R.Tuple [v1; v2]
          ))
        | None -> R.Option None)
      in
      R.Tuple [v1; v2]
    )
  )

and map_typeasexpr (env : env) ((v1, v2) : CST.typeasexpr) =
  let v1 = map_unaryexpr env v1 in
  let v2 =
    R.List (List.map (fun (v1, v2) ->
      let v1 = map_typeasop env v1 in
      let v2 = map_unaryexpr env v2 in
      R.Tuple [v1; v2]
    ) v2)
  in
  R.Tuple [v1; v2]

and map_typeliteral (env : env) ((v1, v2) : CST.typeliteral) =
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

and map_typeliteralexpr (env : env) (x : CST.typeliteralexpr) =
  map_typeliteral env x

and map_typeliterallist (env : env) (x : CST.typeliterallist) =
  map_typeliteral env x

and map_typeliteraltype (env : env) (x : CST.typeliteraltype) =
  map_typeliteral env x

and map_unaryexpr (env : env) (x : CST.unaryexpr) =
  (match x with
  | `Choice_PLUS_unarys (v1, v2) -> R.Case ("Choice_PLUS_unarys",
      let v1 =
        (match v1 with
        | `PLUS tok -> R.Case ("PLUS",
            (* "+" *) token env tok
          )
        | `DASH tok -> R.Case ("DASH",
            (* "-" *) token env tok
          )
        | `BANGDASH tok -> R.Case ("BANGDASH",
            (* "!-" *) token env tok
          )
        )
      in
      let v2 = map_unaryexprnotplusminus env v2 in
      R.Tuple [v1; v2]
    )
  | `Unarys x -> R.Case ("Unarys",
      map_unaryexprnotplusminus env x
    )
  )

and map_unaryexprnotplusminus (env : env) (x : CST.unaryexprnotplusminus) =
  (match x with
  | `Unar_unar (v1, v2) -> R.Case ("Unar_unar",
      let v1 = map_unaryop env v1 in
      let v2 = map_unaryexpr env v2 in
      R.Tuple [v1; v2]
    )
  | `BSLASH_bloc (v1, v2) -> R.Case ("BSLASH_bloc",
      let v1 = (* "\\" *) token env v1 in
      let v2 = map_blockexpr env v2 in
      R.Tuple [v1; v2]
    )
  | `Eval x -> R.Case ("Eval",
      map_evalexpr env x
    )
  | `Prim (v1, v2) -> R.Case ("Prim",
      let v1 =
        (match v1 with
        | `Lit x -> R.Case ("Lit",
            map_literal env x
          )
        | `Type x -> R.Case ("Type",
            map_typeliteralexpr env x
          )
        | `Pare x -> R.Case ("Pare",
            map_parenthexpr env x
          )
        )
      in
      let v2 = map_anon_rep_choice_annots_36889ef env v2 in
      R.Tuple [v1; v2]
    )
  )

and map_usingstatement (env : env) ((v1, v2, v3, v4, v5, v6) : CST.usingstatement) =
  let v1 = (* "using" *) token env v1 in
  let v2 = (* "(" *) token env v2 in
  let v3 =
    (match v3 with
    | `Loca_rep_COMMA_loca (v1, v2) -> R.Case ("Loca_rep_COMMA_loca",
        let v1 = map_localvarstatement env v1 in
        let v2 =
          R.List (List.map (fun (v1, v2) ->
            let v1 = (* "," *) token env v1 in
            let v2 = map_localvarstatement env v2 in
            R.Tuple [v1; v2]
          ) v2)
        in
        R.Tuple [v1; v2]
      )
    | `Exp x -> R.Case ("Exp",
        map_expression env x
      )
    )
  in
  let v4 = (* ")" *) token env v4 in
  let v5 = map_functionbody env v5 in
  let v6 =
    (match v6 with
    | Some (v1, v2) -> R.Option (Some (
        let v1 = (* "finally" *) token env v1 in
        let v2 = map_functionbody env v2 in
        R.Tuple [v1; v2]
      ))
    | None -> R.Option None)
  in
  R.Tuple [v1; v2; v3; v4; v5; v6]

and map_whilestatement (env : env) ((v1, v2, v3, v4, v5) : CST.whilestatement) =
  let v1 = (* "while" *) token env v1 in
  let v2 = (* "(" *) token env v2 in
  let v3 = map_expression env v3 in
  let v4 = (* ")" *) token env v4 in
  let v5 = map_statement env v5 in
  R.Tuple [v1; v2; v3; v4; v5]

let map_fielddefn (env : env) ((v1, v2, v3, v4, v5) : CST.fielddefn) =
  let v1 = (* "var" *) token env v1 in
  let v2 = (* ident *) token env v2 in
  let v3 =
    (match v3 with
    | Some x -> R.Option (Some (
        map_anon_choice_COLON_type_7487407 env x
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
        let v3 = (* ident *) token env v3 in
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

let map_typevariabledefinition (env : env) ((v1, v2) : CST.typevariabledefinition) =
  let v1 = (* ident *) token env v1 in
  let v2 =
    (match v2 with
    | Some (v1, v2) -> R.Option (Some (
        let v1 = (* "extends" *) token env v1 in
        let v2 = map_typeliterallist env v2 in
        R.Tuple [v1; v2]
      ))
    | None -> R.Option None)
  in
  R.Tuple [v1; v2]

let map_parameters (env : env) ((v1, v2, v3) : CST.parameters) =
  let v1 = (* "(" *) token env v1 in
  let v2 =
    (match v2 with
    | Some x -> R.Option (Some (
        map_parameterdeclarationlist env x
      ))
    | None -> R.Option None)
  in
  let v3 = (* ")" *) token env v3 in
  R.Tuple [v1; v2; v3]

let map_anon_choice_anno_2451648 (env : env) (x : CST.anon_choice_anno_2451648) =
  (match x with
  | `Anno x -> R.Case ("Anno",
      map_annotation env x
    )
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

let map_anon_LT_type_rep_COMMA_type_GT_4296e12 (env : env) ((v1, v2, v3, v4) : CST.anon_LT_type_rep_COMMA_type_GT_4296e12) =
  let v1 = (* "<" *) token env v1 in
  let v2 = map_typevariabledefinition env v2 in
  let v3 =
    R.List (List.map (fun (v1, v2) ->
      let v1 = (* "," *) token env v1 in
      let v2 = map_typevariabledefinition env v2 in
      R.Tuple [v1; v2]
    ) v3)
  in
  let v4 = (* ">" *) token env v4 in
  R.Tuple [v1; v2; v3; v4]

let map_constructordefn (env : env) ((v1, v2, v3) : CST.constructordefn) =
  let v1 = (* "construct" *) token env v1 in
  let v2 = map_parameters env v2 in
  let v3 =
    (match v3 with
    | Some (v1, v2) -> R.Option (Some (
        let v1 = (* ":" *) token env v1 in
        let v2 = map_typeliterallist env v2 in
        R.Tuple [v1; v2]
      ))
    | None -> R.Option None)
  in
  R.Tuple [v1; v2; v3]

let map_functiondefn (env : env) ((v1, v2, v3, v4, v5) : CST.functiondefn) =
  let v1 = (* "function" *) token env v1 in
  let v2 = (* ident *) token env v2 in
  let v3 =
    (match v3 with
    | Some x -> R.Option (Some (
        map_anon_LT_type_rep_COMMA_type_GT_4296e12 env x
      ))
    | None -> R.Option None)
  in
  let v4 = map_parameters env v4 in
  let v5 =
    (match v5 with
    | Some (v1, v2) -> R.Option (Some (
        let v1 = (* ":" *) token env v1 in
        let v2 = map_typeliterallist env v2 in
        R.Tuple [v1; v2]
      ))
    | None -> R.Option None)
  in
  R.Tuple [v1; v2; v3; v4; v5]

let map_declaration (env : env) ((v1, v2, v3) : CST.declaration) =
  let v1 =
    R.List (List.map (map_anon_choice_anno_2451648 env) v1)
  in
  let v2 =
    (match v2 with
    | `Func_opt_func (v1, v2) -> R.Case ("Func_opt_func",
        let v1 = map_functiondefn env v1 in
        let v2 =
          (match v2 with
          | Some x -> R.Option (Some (
              map_functionbody env x
            ))
          | None -> R.Option None)
        in
        R.Tuple [v1; v2]
      )
    | `Cons_func (v1, v2) -> R.Case ("Cons_func",
        let v1 = map_constructordefn env v1 in
        let v2 = map_functionbody env v2 in
        R.Tuple [v1; v2]
      )
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

let map_classbody (env : env) ((v1, v2, v3) : CST.classbody) =
  let v1 = (* "{" *) token env v1 in
  let v2 = R.List (List.map (map_declaration env) v2) in
  let v3 = (* "}" *) token env v3 in
  R.Tuple [v1; v2; v3]

let map_gclass (env : env) ((v1, v2, v3, v4, v5, v6) : CST.gclass) =
  let v1 = (* "class" *) token env v1 in
  let v2 = (* ident *) token env v2 in
  let v3 =
    (match v3 with
    | Some x -> R.Option (Some (
        map_anon_LT_type_rep_COMMA_type_GT_4296e12 env x
      ))
    | None -> R.Option None)
  in
  let v4 =
    (match v4 with
    | Some (v1, v2) -> R.Option (Some (
        let v1 = (* "extends" *) token env v1 in
        let v2 = map_classorinterfacetype env v2 in
        R.Tuple [v1; v2]
      ))
    | None -> R.Option None)
  in
  let v5 =
    (match v5 with
    | Some (v1, v2, v3) -> R.Option (Some (
        let v1 = (* "implements" *) token env v1 in
        let v2 = map_classorinterfacetype env v2 in
        let v3 =
          R.List (List.map (fun (v1, v2) ->
            let v1 = (* "," *) token env v1 in
            let v2 = map_classorinterfacetype env v2 in
            R.Tuple [v1; v2]
          ) v3)
        in
        R.Tuple [v1; v2; v3]
      ))
    | None -> R.Option None)
  in
  let v6 = map_classbody env v6 in
  R.Tuple [v1; v2; v3; v4; v5; v6]

let map_source_file (env : env) ((v1, v2, v3, v4) : CST.source_file) =
  let v1 =
    (match v1 with
    | Some (v1, v2) -> R.Option (Some (
        let v1 = (* "package" *) token env v1 in
        let v2 = map_namespacestatement env v2 in
        R.Tuple [v1; v2]
      ))
    | None -> R.Option None)
  in
  let v2 =
    (match v2 with
    | Some x -> R.Option (Some (
        map_usesstatementlist env x
      ))
    | None -> R.Option None)
  in
  let v3 =
    R.List (List.map (map_anon_choice_anno_2451648 env) v3)
  in
  let v4 =
    (match v4 with
    | `Gclass x -> R.Case ("Gclass",
        map_gclass env x
      )
    )
  in
  R.Tuple [v1; v2; v3; v4]

let map_comment (env : env) (tok : CST.comment) =
  (* pattern \/\*([^\*]|(\*[^\/]))*\*\/ *) token env tok

let map_line_comment (env : env) (tok : CST.line_comment) =
  (* pattern \/\/[^\n\r]* *) token env tok

let map_ws (env : env) (tok : CST.ws) =
  (* pattern \s *) token env tok

let dump_tree root =
  map_source_file () root
  |> Tree_sitter_run.Raw_tree.to_channel stdout

let map_extra (env : env) (x : CST.extra) =
  match x with
  | `Ws (_loc, x) -> ("ws", "ws", map_ws env x)
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
