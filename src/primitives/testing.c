#include "index.h"

void x_ok(vm_t *vm) {
    bool ok = to_bool(stack_pop(vm->value_stack));
    if (!ok) {
        fprintf(vm->err, "[assertion-failed]\n");
        // vm_print(vm, vm->err);
        exit(1);
    }
}
