from torch._parameter import (
    is_lazy as is_lazy,
    Parameter as _Parameter,
    UninitializedBuffer as _UninitializedBuffer,
    UninitializedParameter as _UninitializedParameter,
)

# workaround for setting the __module__ attribute
class Parameter(_Parameter): ...
class UninitializedParameter(_UninitializedParameter): ...
class UninitializedBuffer(_UninitializedBuffer): ...
