#include <stdio.h>
#include "input.h"
#include "auth.h"
#include "output.h"

int main(void){
    /*認証結果保存用変数*/
    int auth_id_status;
    int auth_pass_status;
    /*入力要変数をint型で確保*/
    int input_id;
    int input_pass;

    /*IDの入力*/
    input_id = scan_id();
    input_pass = scan_pass();

    /*IDの認証*/
    auth_id_status = auth_id(input_id);
    auth_pass_status = auth_pass(input_pass);

    /*結果の出力*/
    print_result(auth_id_status, auth_pass_status);

    return 0;
}
