#pragma once

 

// Package: ImagineInheritSelect

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function ImagineInheritSelect.ImagineInheritSelect_C.OnSelectPerk__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct ImagineInheritSelect_C_OnSelectPerk__DelegateSignature final
{
public:
	struct FOwnItemInfo                           SelectedPerk;                                      // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(ImagineInheritSelect_C_OnSelectPerk__DelegateSignature) == 0x000008, "Wrong alignment on ImagineInheritSelect_C_OnSelectPerk__DelegateSignature");
static_assert(sizeof(ImagineInheritSelect_C_OnSelectPerk__DelegateSignature) == 0x000118, "Wrong size on ImagineInheritSelect_C_OnSelectPerk__DelegateSignature");
static_assert(offsetof(ImagineInheritSelect_C_OnSelectPerk__DelegateSignature, SelectedPerk) == 0x000000, "Member 'ImagineInheritSelect_C_OnSelectPerk__DelegateSignature::SelectedPerk' has a wrong offset!");

// Function ImagineInheritSelect.ImagineInheritSelect_C.ExecuteUbergraph_ImagineInheritSelect
// 0x0228 (0x0228 - 0x0000)
struct ImagineInheritSelect_C_ExecuteUbergraph_ImagineInheritSelect final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D84[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           K2Node_CustomEvent_Target;                         // 0x0008(0x0118)()
	class UImagineAbilityView_C*                  CallFunc_Create_ReturnValue;                       // 0x0120(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0128(0x0010)(ZeroConstructor, NoDestructor)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0138(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0140(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0168(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0190(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;                    // 0x01B8(0x0028)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x01F8(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const struct FOwnItemInfo& Target)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0208(0x0010)(ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_2;       // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue_3;       // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineInheritSelect_C_ExecuteUbergraph_ImagineInheritSelect) == 0x000008, "Wrong alignment on ImagineInheritSelect_C_ExecuteUbergraph_ImagineInheritSelect");
static_assert(sizeof(ImagineInheritSelect_C_ExecuteUbergraph_ImagineInheritSelect) == 0x000228, "Wrong size on ImagineInheritSelect_C_ExecuteUbergraph_ImagineInheritSelect");
static_assert(offsetof(ImagineInheritSelect_C_ExecuteUbergraph_ImagineInheritSelect, EntryPoint) == 0x000000, "Member 'ImagineInheritSelect_C_ExecuteUbergraph_ImagineInheritSelect::EntryPoint' has a wrong offset!");
static_assert(offsetof(ImagineInheritSelect_C_ExecuteUbergraph_ImagineInheritSelect, K2Node_CustomEvent_Target) == 0x000008, "Member 'ImagineInheritSelect_C_ExecuteUbergraph_ImagineInheritSelect::K2Node_CustomEvent_Target' has a wrong offset!");
static_assert(offsetof(ImagineInheritSelect_C_ExecuteUbergraph_ImagineInheritSelect, CallFunc_Create_ReturnValue) == 0x000120, "Member 'ImagineInheritSelect_C_ExecuteUbergraph_ImagineInheritSelect::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineInheritSelect_C_ExecuteUbergraph_ImagineInheritSelect, K2Node_CreateDelegate_OutputDelegate) == 0x000128, "Member 'ImagineInheritSelect_C_ExecuteUbergraph_ImagineInheritSelect::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ImagineInheritSelect_C_ExecuteUbergraph_ImagineInheritSelect, CallFunc_AddChildToCanvas_ReturnValue) == 0x000138, "Member 'ImagineInheritSelect_C_ExecuteUbergraph_ImagineInheritSelect::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineInheritSelect_C_ExecuteUbergraph_ImagineInheritSelect, K2Node_MakeStruct_SlateColor) == 0x000140, "Member 'ImagineInheritSelect_C_ExecuteUbergraph_ImagineInheritSelect::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(ImagineInheritSelect_C_ExecuteUbergraph_ImagineInheritSelect, K2Node_MakeStruct_SlateColor_1) == 0x000168, "Member 'ImagineInheritSelect_C_ExecuteUbergraph_ImagineInheritSelect::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(ImagineInheritSelect_C_ExecuteUbergraph_ImagineInheritSelect, K2Node_MakeStruct_SlateColor_2) == 0x000190, "Member 'ImagineInheritSelect_C_ExecuteUbergraph_ImagineInheritSelect::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(ImagineInheritSelect_C_ExecuteUbergraph_ImagineInheritSelect, K2Node_MakeStruct_SlateColor_3) == 0x0001B8, "Member 'ImagineInheritSelect_C_ExecuteUbergraph_ImagineInheritSelect::K2Node_MakeStruct_SlateColor_3' has a wrong offset!");
static_assert(offsetof(ImagineInheritSelect_C_ExecuteUbergraph_ImagineInheritSelect, CallFunc_PlayAnimationForward_ReturnValue) == 0x0001E0, "Member 'ImagineInheritSelect_C_ExecuteUbergraph_ImagineInheritSelect::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineInheritSelect_C_ExecuteUbergraph_ImagineInheritSelect, CallFunc_PlayAnimationForward_ReturnValue_1) == 0x0001E8, "Member 'ImagineInheritSelect_C_ExecuteUbergraph_ImagineInheritSelect::CallFunc_PlayAnimationForward_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ImagineInheritSelect_C_ExecuteUbergraph_ImagineInheritSelect, CallFunc_PlayAnimation_ReturnValue) == 0x0001F0, "Member 'ImagineInheritSelect_C_ExecuteUbergraph_ImagineInheritSelect::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineInheritSelect_C_ExecuteUbergraph_ImagineInheritSelect, K2Node_CreateDelegate_OutputDelegate_1) == 0x0001F8, "Member 'ImagineInheritSelect_C_ExecuteUbergraph_ImagineInheritSelect::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(ImagineInheritSelect_C_ExecuteUbergraph_ImagineInheritSelect, K2Node_CreateDelegate_OutputDelegate_2) == 0x000208, "Member 'ImagineInheritSelect_C_ExecuteUbergraph_ImagineInheritSelect::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(ImagineInheritSelect_C_ExecuteUbergraph_ImagineInheritSelect, CallFunc_PlayAnimationForward_ReturnValue_2) == 0x000218, "Member 'ImagineInheritSelect_C_ExecuteUbergraph_ImagineInheritSelect::CallFunc_PlayAnimationForward_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ImagineInheritSelect_C_ExecuteUbergraph_ImagineInheritSelect, CallFunc_PlayAnimationForward_ReturnValue_3) == 0x000220, "Member 'ImagineInheritSelect_C_ExecuteUbergraph_ImagineInheritSelect::CallFunc_PlayAnimationForward_ReturnValue_3' has a wrong offset!");

// Function ImagineInheritSelect.ImagineInheritSelect_C.OnSelect
// 0x0118 (0x0118 - 0x0000)
struct ImagineInheritSelect_C_OnSelect final
{
public:
	struct FOwnItemInfo                           Param_Target;                                      // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(ImagineInheritSelect_C_OnSelect) == 0x000008, "Wrong alignment on ImagineInheritSelect_C_OnSelect");
static_assert(sizeof(ImagineInheritSelect_C_OnSelect) == 0x000118, "Wrong size on ImagineInheritSelect_C_OnSelect");
static_assert(offsetof(ImagineInheritSelect_C_OnSelect, Param_Target) == 0x000000, "Member 'ImagineInheritSelect_C_OnSelect::Param_Target' has a wrong offset!");

// Function ImagineInheritSelect.ImagineInheritSelect_C.Initialize
// 0x02F0 (0x02F0 - 0x0000)
struct ImagineInheritSelect_C_Initialize final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidOwnItem_ReturnValue;               // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindImagineMaster_bIsValid;               // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D85[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindImagineMaster_ImagineMaster;          // 0x0008(0x00B0)()
	struct FOwnItemInfo                           K2Node_Select_Default;                             // 0x00B8(0x0118)()
	int32                                         CallFunc_GetStackBNum_ReturnValue;                 // 0x01D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x01D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           CallFunc_OverwriteStackB_ReturnValue;              // 0x01D8(0x0118)()
};
static_assert(alignof(ImagineInheritSelect_C_Initialize) == 0x000008, "Wrong alignment on ImagineInheritSelect_C_Initialize");
static_assert(sizeof(ImagineInheritSelect_C_Initialize) == 0x0002F0, "Wrong size on ImagineInheritSelect_C_Initialize");
static_assert(offsetof(ImagineInheritSelect_C_Initialize, Temp_bool_Variable) == 0x000000, "Member 'ImagineInheritSelect_C_Initialize::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ImagineInheritSelect_C_Initialize, CallFunc_IsValidOwnItem_ReturnValue) == 0x000001, "Member 'ImagineInheritSelect_C_Initialize::CallFunc_IsValidOwnItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineInheritSelect_C_Initialize, CallFunc_FindImagineMaster_bIsValid) == 0x000002, "Member 'ImagineInheritSelect_C_Initialize::CallFunc_FindImagineMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ImagineInheritSelect_C_Initialize, CallFunc_FindImagineMaster_ImagineMaster) == 0x000008, "Member 'ImagineInheritSelect_C_Initialize::CallFunc_FindImagineMaster_ImagineMaster' has a wrong offset!");
static_assert(offsetof(ImagineInheritSelect_C_Initialize, K2Node_Select_Default) == 0x0000B8, "Member 'ImagineInheritSelect_C_Initialize::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ImagineInheritSelect_C_Initialize, CallFunc_GetStackBNum_ReturnValue) == 0x0001D0, "Member 'ImagineInheritSelect_C_Initialize::CallFunc_GetStackBNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineInheritSelect_C_Initialize, CallFunc_Add_IntInt_ReturnValue) == 0x0001D4, "Member 'ImagineInheritSelect_C_Initialize::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ImagineInheritSelect_C_Initialize, CallFunc_OverwriteStackB_ReturnValue) == 0x0001D8, "Member 'ImagineInheritSelect_C_Initialize::CallFunc_OverwriteStackB_ReturnValue' has a wrong offset!");

// Function ImagineInheritSelect.ImagineInheritSelect_C.CloseDialog
// 0x0008 (0x0008 - 0x0000)
struct ImagineInheritSelect_C_CloseDialog final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ImagineInheritSelect_C_CloseDialog) == 0x000008, "Wrong alignment on ImagineInheritSelect_C_CloseDialog");
static_assert(sizeof(ImagineInheritSelect_C_CloseDialog) == 0x000008, "Wrong size on ImagineInheritSelect_C_CloseDialog");
static_assert(offsetof(ImagineInheritSelect_C_CloseDialog, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000000, "Member 'ImagineInheritSelect_C_CloseDialog::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");

}

