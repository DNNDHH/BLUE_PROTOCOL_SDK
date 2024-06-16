#pragma once

 

// Package: DeleteDialogFirst

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function DeleteDialogFirst.DeleteDialogFirst_C.OnEnd__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct DeleteDialogFirst_C_OnEnd__DelegateSignature final
{
public:
	bool                                          DELETE;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DeleteDialogFirst_C_OnEnd__DelegateSignature) == 0x000001, "Wrong alignment on DeleteDialogFirst_C_OnEnd__DelegateSignature");
static_assert(sizeof(DeleteDialogFirst_C_OnEnd__DelegateSignature) == 0x000001, "Wrong size on DeleteDialogFirst_C_OnEnd__DelegateSignature");
static_assert(offsetof(DeleteDialogFirst_C_OnEnd__DelegateSignature, DELETE) == 0x000000, "Member 'DeleteDialogFirst_C_OnEnd__DelegateSignature::DELETE' has a wrong offset!");

// Function DeleteDialogFirst.DeleteDialogFirst_C.ExecuteUbergraph_DeleteDialogFirst
// 0x0068 (0x0068 - 0x0000)
struct DeleteDialogFirst_C_ExecuteUbergraph_DeleteDialogFirst final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_9435[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0018(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0040(0x0028)()
};
static_assert(alignof(DeleteDialogFirst_C_ExecuteUbergraph_DeleteDialogFirst) == 0x000008, "Wrong alignment on DeleteDialogFirst_C_ExecuteUbergraph_DeleteDialogFirst");
static_assert(sizeof(DeleteDialogFirst_C_ExecuteUbergraph_DeleteDialogFirst) == 0x000068, "Wrong size on DeleteDialogFirst_C_ExecuteUbergraph_DeleteDialogFirst");
static_assert(offsetof(DeleteDialogFirst_C_ExecuteUbergraph_DeleteDialogFirst, EntryPoint) == 0x000000, "Member 'DeleteDialogFirst_C_ExecuteUbergraph_DeleteDialogFirst::EntryPoint' has a wrong offset!");
static_assert(offsetof(DeleteDialogFirst_C_ExecuteUbergraph_DeleteDialogFirst, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'DeleteDialogFirst_C_ExecuteUbergraph_DeleteDialogFirst::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(DeleteDialogFirst_C_ExecuteUbergraph_DeleteDialogFirst, K2Node_MakeStruct_SlateColor) == 0x000018, "Member 'DeleteDialogFirst_C_ExecuteUbergraph_DeleteDialogFirst::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(DeleteDialogFirst_C_ExecuteUbergraph_DeleteDialogFirst, K2Node_MakeStruct_SlateColor_1) == 0x000040, "Member 'DeleteDialogFirst_C_ExecuteUbergraph_DeleteDialogFirst::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

}

