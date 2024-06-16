#pragma once

 

// Package: DeleteDialogLast

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function DeleteDialogLast.DeleteDialogLast_C.OnEnd__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct DeleteDialogLast_C_OnEnd__DelegateSignature final
{
public:
	bool                                          DELETE;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DeleteDialogLast_C_OnEnd__DelegateSignature) == 0x000001, "Wrong alignment on DeleteDialogLast_C_OnEnd__DelegateSignature");
static_assert(sizeof(DeleteDialogLast_C_OnEnd__DelegateSignature) == 0x000001, "Wrong size on DeleteDialogLast_C_OnEnd__DelegateSignature");
static_assert(offsetof(DeleteDialogLast_C_OnEnd__DelegateSignature, DELETE) == 0x000000, "Member 'DeleteDialogLast_C_OnEnd__DelegateSignature::DELETE' has a wrong offset!");

// Function DeleteDialogLast.DeleteDialogLast_C.ExecuteUbergraph_DeleteDialogLast
// 0x00B8 (0x00B8 - 0x0000)
struct DeleteDialogLast_C_ExecuteUbergraph_DeleteDialogLast final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_7DDC[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0018(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0040(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0068(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;                    // 0x0090(0x0028)()
};
static_assert(alignof(DeleteDialogLast_C_ExecuteUbergraph_DeleteDialogLast) == 0x000008, "Wrong alignment on DeleteDialogLast_C_ExecuteUbergraph_DeleteDialogLast");
static_assert(sizeof(DeleteDialogLast_C_ExecuteUbergraph_DeleteDialogLast) == 0x0000B8, "Wrong size on DeleteDialogLast_C_ExecuteUbergraph_DeleteDialogLast");
static_assert(offsetof(DeleteDialogLast_C_ExecuteUbergraph_DeleteDialogLast, EntryPoint) == 0x000000, "Member 'DeleteDialogLast_C_ExecuteUbergraph_DeleteDialogLast::EntryPoint' has a wrong offset!");
static_assert(offsetof(DeleteDialogLast_C_ExecuteUbergraph_DeleteDialogLast, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'DeleteDialogLast_C_ExecuteUbergraph_DeleteDialogLast::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(DeleteDialogLast_C_ExecuteUbergraph_DeleteDialogLast, K2Node_MakeStruct_SlateColor) == 0x000018, "Member 'DeleteDialogLast_C_ExecuteUbergraph_DeleteDialogLast::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(DeleteDialogLast_C_ExecuteUbergraph_DeleteDialogLast, K2Node_MakeStruct_SlateColor_1) == 0x000040, "Member 'DeleteDialogLast_C_ExecuteUbergraph_DeleteDialogLast::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(DeleteDialogLast_C_ExecuteUbergraph_DeleteDialogLast, K2Node_MakeStruct_SlateColor_2) == 0x000068, "Member 'DeleteDialogLast_C_ExecuteUbergraph_DeleteDialogLast::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(DeleteDialogLast_C_ExecuteUbergraph_DeleteDialogLast, K2Node_MakeStruct_SlateColor_3) == 0x000090, "Member 'DeleteDialogLast_C_ExecuteUbergraph_DeleteDialogLast::K2Node_MakeStruct_SlateColor_3' has a wrong offset!");

}

