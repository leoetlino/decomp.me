? func_004000DC(s32);                               /* static */
s32 test(s32 arg0);                                 /* static */

s32 test(s32 arg0) {
    s32 temp_t6;
    s32 phi_s0;

    phi_s0 = arg0;
loop_2:
    func_004000DC(phi_s0);
    temp_t6 = phi_s0 * 2;
    if (temp_t6 < 4) {
        func_004000DC(temp_t6);
        phi_s0 = temp_t6 + 1;
        goto loop_2;
    }
    return temp_t6;
}
