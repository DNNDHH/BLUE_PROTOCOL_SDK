#pragma once

 

// Package: WeaponInheritSelect

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function WeaponInheritSelect.WeaponInheritSelect_C.OnSelected__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct WeaponInheritSelect_C_OnSelected__DelegateSignature final
{
public:
	class FString                                 SpecialPerkUID;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FSBStackBPerk>                  Param_SelectedPerks;                               // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WeaponInheritSelect_C_OnSelected__DelegateSignature) == 0x000008, "Wrong alignment on WeaponInheritSelect_C_OnSelected__DelegateSignature");
static_assert(sizeof(WeaponInheritSelect_C_OnSelected__DelegateSignature) == 0x000020, "Wrong size on WeaponInheritSelect_C_OnSelected__DelegateSignature");
static_assert(offsetof(WeaponInheritSelect_C_OnSelected__DelegateSignature, SpecialPerkUID) == 0x000000, "Member 'WeaponInheritSelect_C_OnSelected__DelegateSignature::SpecialPerkUID' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_OnSelected__DelegateSignature, Param_SelectedPerks) == 0x000010, "Member 'WeaponInheritSelect_C_OnSelected__DelegateSignature::Param_SelectedPerks' has a wrong offset!");

// Function WeaponInheritSelect.WeaponInheritSelect_C.ExecuteUbergraph_WeaponInheritSelect
// 0x03D8 (0x03D8 - 0x0000)
struct WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69C0[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FOwnItemInfo& OnSelect)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_69C1[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           K2Node_CustomEvent_OnSelect;                       // 0x0038(0x0118)()
	struct FSBStackBPerk                          K2Node_ComponentBoundEvent_ChangeTarget;           // 0x0150(0x0030)()
	struct FSBStackBPerk                          K2Node_CustomEvent_Before;                         // 0x0180(0x0030)()
	struct FSBStackBPerk                          K2Node_CustomEvent_Select;                         // 0x01B0(0x0030)()
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69C2[0x7];                                     // 0x01E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBStackBPerk>                  CallFunc_GenerateStackBPerkList_ReturnValue;       // 0x01E8(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x01FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69C3[0x3];                                     // 0x01FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStackBPerk                          K2Node_ComponentBoundEvent_PurgeTarget;            // 0x0200(0x0030)()
	bool                                          CallFunc_Array_RemoveItem_ReturnValue_1;           // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69C4[0x3];                                     // 0x0231(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0234(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_69C5[0x4];                                     // 0x0244(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0248(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0270(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0298(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;                    // 0x02C0(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_4;                    // 0x02E8(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_5;                    // 0x0310(0x0028)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0338(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0340(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USpecialViewSelect_C*                   CallFunc_Create_ReturnValue_1;                     // 0x0348(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsModalWindowOpen_IsOpen;                 // 0x0350(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69C6[0x3];                                     // 0x0351(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FSBStackBPerk& Before, const struct FSBStackBPerk& Select)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0354(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_69C7[0x4];                                     // 0x0364(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBStackBPerk>                  CallFunc_GenerateStackBPerkList_ReturnValue_1;     // 0x0368(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsStackBInhelitable_ReturnValue;          // 0x0378(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69C8[0x3];                                     // 0x0379(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x037C(0x0010)(ZeroConstructor, NoDestructor)
	EDialogResult                                 K2Node_CustomEvent_Result;                         // 0x038C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69C9[0x3];                                     // 0x038D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UInhelitPerkSelector_C*                 CallFunc_Create_ReturnValue_2;                     // 0x0390(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0398(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69CA[0x7];                                     // 0x0399(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x03A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x03B0(0x0010)(ZeroConstructor, NoDestructor)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x03C0(0x0018)()
};
static_assert(alignof(WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect) == 0x000008, "Wrong alignment on WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect");
static_assert(sizeof(WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect) == 0x0003D8, "Wrong size on WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect");
static_assert(offsetof(WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect, EntryPoint) == 0x000000, "Member 'WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect::EntryPoint' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect, CallFunc_Create_ReturnValue) == 0x000008, "Member 'WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect, CallFunc_PlaySE_ReturnValue) == 0x000020, "Member 'WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect, K2Node_CreateDelegate_OutputDelegate_1) == 0x000024, "Member 'WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect, K2Node_CustomEvent_OnSelect) == 0x000038, "Member 'WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect::K2Node_CustomEvent_OnSelect' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect, K2Node_ComponentBoundEvent_ChangeTarget) == 0x000150, "Member 'WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect::K2Node_ComponentBoundEvent_ChangeTarget' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect, K2Node_CustomEvent_Before) == 0x000180, "Member 'WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect::K2Node_CustomEvent_Before' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect, K2Node_CustomEvent_Select) == 0x0001B0, "Member 'WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect::K2Node_CustomEvent_Select' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect, CallFunc_IsEmpty_ReturnValue) == 0x0001E0, "Member 'WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect, CallFunc_GenerateStackBPerkList_ReturnValue) == 0x0001E8, "Member 'WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect::CallFunc_GenerateStackBPerkList_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect, CallFunc_Array_Add_ReturnValue) == 0x0001F8, "Member 'WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect, CallFunc_Array_RemoveItem_ReturnValue) == 0x0001FC, "Member 'WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect, K2Node_ComponentBoundEvent_PurgeTarget) == 0x000200, "Member 'WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect::K2Node_ComponentBoundEvent_PurgeTarget' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect, CallFunc_Array_RemoveItem_ReturnValue_1) == 0x000230, "Member 'WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect::CallFunc_Array_RemoveItem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect, K2Node_CreateDelegate_OutputDelegate_2) == 0x000234, "Member 'WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect, K2Node_MakeStruct_SlateColor) == 0x000248, "Member 'WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect, K2Node_MakeStruct_SlateColor_1) == 0x000270, "Member 'WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect, K2Node_MakeStruct_SlateColor_2) == 0x000298, "Member 'WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect, K2Node_MakeStruct_SlateColor_3) == 0x0002C0, "Member 'WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect::K2Node_MakeStruct_SlateColor_3' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect, K2Node_MakeStruct_SlateColor_4) == 0x0002E8, "Member 'WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect::K2Node_MakeStruct_SlateColor_4' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect, K2Node_MakeStruct_SlateColor_5) == 0x000310, "Member 'WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect::K2Node_MakeStruct_SlateColor_5' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect, CallFunc_PlayAnimationForward_ReturnValue) == 0x000338, "Member 'WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect, CallFunc_PlayAnimation_ReturnValue) == 0x000340, "Member 'WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect, CallFunc_Create_ReturnValue_1) == 0x000348, "Member 'WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect, CallFunc_IsModalWindowOpen_IsOpen) == 0x000350, "Member 'WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect::CallFunc_IsModalWindowOpen_IsOpen' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect, K2Node_CreateDelegate_OutputDelegate_3) == 0x000354, "Member 'WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect, CallFunc_GenerateStackBPerkList_ReturnValue_1) == 0x000368, "Member 'WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect::CallFunc_GenerateStackBPerkList_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect, CallFunc_IsStackBInhelitable_ReturnValue) == 0x000378, "Member 'WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect::CallFunc_IsStackBInhelitable_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect, K2Node_CreateDelegate_OutputDelegate_4) == 0x00037C, "Member 'WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect, K2Node_CustomEvent_Result) == 0x00038C, "Member 'WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect, CallFunc_Create_ReturnValue_2) == 0x000390, "Member 'WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000398, "Member 'WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect, CallFunc_GetTextFromAsset_ReturnValue) == 0x0003A0, "Member 'WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect, K2Node_CreateDelegate_OutputDelegate_5) == 0x0003B0, "Member 'WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect, CallFunc_Conv_StringToText_ReturnValue) == 0x0003C0, "Member 'WeaponInheritSelect_C_ExecuteUbergraph_WeaponInheritSelect::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function WeaponInheritSelect.WeaponInheritSelect_C.OnCheckedInhelit
// 0x0001 (0x0001 - 0x0000)
struct WeaponInheritSelect_C_OnCheckedInhelit final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponInheritSelect_C_OnCheckedInhelit) == 0x000001, "Wrong alignment on WeaponInheritSelect_C_OnCheckedInhelit");
static_assert(sizeof(WeaponInheritSelect_C_OnCheckedInhelit) == 0x000001, "Wrong size on WeaponInheritSelect_C_OnCheckedInhelit");
static_assert(offsetof(WeaponInheritSelect_C_OnCheckedInhelit, Result) == 0x000000, "Member 'WeaponInheritSelect_C_OnCheckedInhelit::Result' has a wrong offset!");

// Function WeaponInheritSelect.WeaponInheritSelect_C.BndEvt__WeaponInheritSelect_InhelitPerkView_K2Node_ComponentBoundEvent_4_PurgeRequest__DelegateSignature
// 0x0030 (0x0030 - 0x0000)
struct WeaponInheritSelect_C_BndEvt__WeaponInheritSelect_InhelitPerkView_K2Node_ComponentBoundEvent_4_PurgeRequest__DelegateSignature final
{
public:
	struct FSBStackBPerk                          PurgeTarget;                                       // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WeaponInheritSelect_C_BndEvt__WeaponInheritSelect_InhelitPerkView_K2Node_ComponentBoundEvent_4_PurgeRequest__DelegateSignature) == 0x000008, "Wrong alignment on WeaponInheritSelect_C_BndEvt__WeaponInheritSelect_InhelitPerkView_K2Node_ComponentBoundEvent_4_PurgeRequest__DelegateSignature");
static_assert(sizeof(WeaponInheritSelect_C_BndEvt__WeaponInheritSelect_InhelitPerkView_K2Node_ComponentBoundEvent_4_PurgeRequest__DelegateSignature) == 0x000030, "Wrong size on WeaponInheritSelect_C_BndEvt__WeaponInheritSelect_InhelitPerkView_K2Node_ComponentBoundEvent_4_PurgeRequest__DelegateSignature");
static_assert(offsetof(WeaponInheritSelect_C_BndEvt__WeaponInheritSelect_InhelitPerkView_K2Node_ComponentBoundEvent_4_PurgeRequest__DelegateSignature, PurgeTarget) == 0x000000, "Member 'WeaponInheritSelect_C_BndEvt__WeaponInheritSelect_InhelitPerkView_K2Node_ComponentBoundEvent_4_PurgeRequest__DelegateSignature::PurgeTarget' has a wrong offset!");

// Function WeaponInheritSelect.WeaponInheritSelect_C.ChangePerks
// 0x0060 (0x0060 - 0x0000)
struct WeaponInheritSelect_C_ChangePerks final
{
public:
	struct FSBStackBPerk                          Before;                                            // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSBStackBPerk                          Select;                                            // 0x0030(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WeaponInheritSelect_C_ChangePerks) == 0x000008, "Wrong alignment on WeaponInheritSelect_C_ChangePerks");
static_assert(sizeof(WeaponInheritSelect_C_ChangePerks) == 0x000060, "Wrong size on WeaponInheritSelect_C_ChangePerks");
static_assert(offsetof(WeaponInheritSelect_C_ChangePerks, Before) == 0x000000, "Member 'WeaponInheritSelect_C_ChangePerks::Before' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_ChangePerks, Select) == 0x000030, "Member 'WeaponInheritSelect_C_ChangePerks::Select' has a wrong offset!");

// Function WeaponInheritSelect.WeaponInheritSelect_C.BndEvt__WeaponInheritSelect_InhelitPerkView_K2Node_ComponentBoundEvent_2_ChangePerkRequest__DelegateSignature
// 0x0030 (0x0030 - 0x0000)
struct WeaponInheritSelect_C_BndEvt__WeaponInheritSelect_InhelitPerkView_K2Node_ComponentBoundEvent_2_ChangePerkRequest__DelegateSignature final
{
public:
	struct FSBStackBPerk                          ChangeTarget;                                      // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WeaponInheritSelect_C_BndEvt__WeaponInheritSelect_InhelitPerkView_K2Node_ComponentBoundEvent_2_ChangePerkRequest__DelegateSignature) == 0x000008, "Wrong alignment on WeaponInheritSelect_C_BndEvt__WeaponInheritSelect_InhelitPerkView_K2Node_ComponentBoundEvent_2_ChangePerkRequest__DelegateSignature");
static_assert(sizeof(WeaponInheritSelect_C_BndEvt__WeaponInheritSelect_InhelitPerkView_K2Node_ComponentBoundEvent_2_ChangePerkRequest__DelegateSignature) == 0x000030, "Wrong size on WeaponInheritSelect_C_BndEvt__WeaponInheritSelect_InhelitPerkView_K2Node_ComponentBoundEvent_2_ChangePerkRequest__DelegateSignature");
static_assert(offsetof(WeaponInheritSelect_C_BndEvt__WeaponInheritSelect_InhelitPerkView_K2Node_ComponentBoundEvent_2_ChangePerkRequest__DelegateSignature, ChangeTarget) == 0x000000, "Member 'WeaponInheritSelect_C_BndEvt__WeaponInheritSelect_InhelitPerkView_K2Node_ComponentBoundEvent_2_ChangePerkRequest__DelegateSignature::ChangeTarget' has a wrong offset!");

// Function WeaponInheritSelect.WeaponInheritSelect_C.OnSelectedNewVitalType
// 0x0118 (0x0118 - 0x0000)
struct WeaponInheritSelect_C_OnSelectedNewVitalType final
{
public:
	struct FOwnItemInfo                           OnSelect;                                          // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WeaponInheritSelect_C_OnSelectedNewVitalType) == 0x000008, "Wrong alignment on WeaponInheritSelect_C_OnSelectedNewVitalType");
static_assert(sizeof(WeaponInheritSelect_C_OnSelectedNewVitalType) == 0x000118, "Wrong size on WeaponInheritSelect_C_OnSelectedNewVitalType");
static_assert(offsetof(WeaponInheritSelect_C_OnSelectedNewVitalType, OnSelect) == 0x000000, "Member 'WeaponInheritSelect_C_OnSelectedNewVitalType::OnSelect' has a wrong offset!");

// Function WeaponInheritSelect.WeaponInheritSelect_C.Initialize
// 0x04F0 (0x04F0 - 0x0000)
struct WeaponInheritSelect_C_Initialize final
{
public:
	struct FOwnItemInfo                           GeneratedStackB;                                   // 0x0000(0x0118)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           CallFunc_FindArgViralId_Array_Element;             // 0x0128(0x0118)()
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0241(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0242(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0243(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0244(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69CB[0x3];                                     // 0x0245(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBStackBPerk>                  CallFunc_GenerateStackBPerkList_ReturnValue;       // 0x0248(0x0010)(ReferenceParm)
	struct FOwnItemInfo                           K2Node_Select_Default;                             // 0x0258(0x0118)()
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0370(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0374(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69CC[0x3];                                     // 0x0375(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharacterWeaponPerkData             CallFunc_Array_Get_Item;                           // 0x0378(0x001C)(NoDestructor)
	uint8                                         Pad_69CD[0x4];                                     // 0x0394(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStackBPerk                          K2Node_MakeStruct_SBStackBPerk;                    // 0x0398(0x0030)()
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x03C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x03CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x03D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69CE[0x7];                                     // 0x03D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_GenerateStackBItemBase_ReturnValue;       // 0x03D8(0x0118)()
};
static_assert(alignof(WeaponInheritSelect_C_Initialize) == 0x000008, "Wrong alignment on WeaponInheritSelect_C_Initialize");
static_assert(sizeof(WeaponInheritSelect_C_Initialize) == 0x0004F0, "Wrong size on WeaponInheritSelect_C_Initialize");
static_assert(offsetof(WeaponInheritSelect_C_Initialize, GeneratedStackB) == 0x000000, "Member 'WeaponInheritSelect_C_Initialize::GeneratedStackB' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_Initialize, Temp_int_Array_Index_Variable) == 0x000118, "Member 'WeaponInheritSelect_C_Initialize::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_Initialize, Temp_int_Loop_Counter_Variable) == 0x00011C, "Member 'WeaponInheritSelect_C_Initialize::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_Initialize, CallFunc_Add_IntInt_ReturnValue) == 0x000120, "Member 'WeaponInheritSelect_C_Initialize::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_Initialize, CallFunc_Array_Length_ReturnValue) == 0x000124, "Member 'WeaponInheritSelect_C_Initialize::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_Initialize, CallFunc_FindArgViralId_Array_Element) == 0x000128, "Member 'WeaponInheritSelect_C_Initialize::CallFunc_FindArgViralId_Array_Element' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_Initialize, CallFunc_Greater_IntInt_ReturnValue) == 0x000240, "Member 'WeaponInheritSelect_C_Initialize::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_Initialize, CallFunc_IsEmpty_ReturnValue) == 0x000241, "Member 'WeaponInheritSelect_C_Initialize::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_Initialize, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000242, "Member 'WeaponInheritSelect_C_Initialize::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_Initialize, CallFunc_BooleanOR_ReturnValue) == 0x000243, "Member 'WeaponInheritSelect_C_Initialize::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_Initialize, Temp_bool_Variable) == 0x000244, "Member 'WeaponInheritSelect_C_Initialize::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_Initialize, CallFunc_GenerateStackBPerkList_ReturnValue) == 0x000248, "Member 'WeaponInheritSelect_C_Initialize::CallFunc_GenerateStackBPerkList_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_Initialize, K2Node_Select_Default) == 0x000258, "Member 'WeaponInheritSelect_C_Initialize::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_Initialize, CallFunc_Array_Length_ReturnValue_1) == 0x000370, "Member 'WeaponInheritSelect_C_Initialize::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_Initialize, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000374, "Member 'WeaponInheritSelect_C_Initialize::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_Initialize, CallFunc_Array_Get_Item) == 0x000378, "Member 'WeaponInheritSelect_C_Initialize::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_Initialize, K2Node_MakeStruct_SBStackBPerk) == 0x000398, "Member 'WeaponInheritSelect_C_Initialize::K2Node_MakeStruct_SBStackBPerk' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_Initialize, CallFunc_Array_Add_ReturnValue) == 0x0003C8, "Member 'WeaponInheritSelect_C_Initialize::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_Initialize, CallFunc_Array_Length_ReturnValue_2) == 0x0003CC, "Member 'WeaponInheritSelect_C_Initialize::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_Initialize, CallFunc_Less_IntInt_ReturnValue) == 0x0003D0, "Member 'WeaponInheritSelect_C_Initialize::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_Initialize, CallFunc_GenerateStackBItemBase_ReturnValue) == 0x0003D8, "Member 'WeaponInheritSelect_C_Initialize::CallFunc_GenerateStackBItemBase_ReturnValue' has a wrong offset!");

// Function WeaponInheritSelect.WeaponInheritSelect_C.AddViewChild
// 0x0018 (0x0018 - 0x0000)
struct WeaponInheritSelect_C_AddViewChild final
{
public:
	class UWidget*                                Content;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponInheritSelect_C_AddViewChild) == 0x000008, "Wrong alignment on WeaponInheritSelect_C_AddViewChild");
static_assert(sizeof(WeaponInheritSelect_C_AddViewChild) == 0x000018, "Wrong size on WeaponInheritSelect_C_AddViewChild");
static_assert(offsetof(WeaponInheritSelect_C_AddViewChild, Content) == 0x000000, "Member 'WeaponInheritSelect_C_AddViewChild::Content' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_AddViewChild, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'WeaponInheritSelect_C_AddViewChild::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_AddViewChild, CallFunc_AddChildToCanvas_ReturnValue) == 0x000010, "Member 'WeaponInheritSelect_C_AddViewChild::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");

// Function WeaponInheritSelect.WeaponInheritSelect_C.RequestClose
// 0x0008 (0x0008 - 0x0000)
struct WeaponInheritSelect_C_RequestClose final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WeaponInheritSelect_C_RequestClose) == 0x000008, "Wrong alignment on WeaponInheritSelect_C_RequestClose");
static_assert(sizeof(WeaponInheritSelect_C_RequestClose) == 0x000008, "Wrong size on WeaponInheritSelect_C_RequestClose");
static_assert(offsetof(WeaponInheritSelect_C_RequestClose, CallFunc_PlayAnimationForward_ReturnValue) == 0x000000, "Member 'WeaponInheritSelect_C_RequestClose::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

// Function WeaponInheritSelect.WeaponInheritSelect_C.CloseWindow
// 0x0010 (0x0010 - 0x0000)
struct WeaponInheritSelect_C_CloseWindow final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponInheritSelect_C_CloseWindow) == 0x000008, "Wrong alignment on WeaponInheritSelect_C_CloseWindow");
static_assert(sizeof(WeaponInheritSelect_C_CloseWindow) == 0x000010, "Wrong size on WeaponInheritSelect_C_CloseWindow");
static_assert(offsetof(WeaponInheritSelect_C_CloseWindow, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000000, "Member 'WeaponInheritSelect_C_CloseWindow::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_CloseWindow, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WeaponInheritSelect_C_CloseWindow::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WeaponInheritSelect.WeaponInheritSelect_C.FindArgViralId
// 0x0248 (0x0248 - 0x0000)
struct WeaponInheritSelect_C_FindArgViralId final
{
public:
	struct FOwnItemInfo                           Array_Element;                                     // 0x0000(0x0118)(Parm, OutParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69CF[0x4];                                     // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_Array_Get_Item;                           // 0x0128(0x0118)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0244(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0245(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponInheritSelect_C_FindArgViralId) == 0x000008, "Wrong alignment on WeaponInheritSelect_C_FindArgViralId");
static_assert(sizeof(WeaponInheritSelect_C_FindArgViralId) == 0x000248, "Wrong size on WeaponInheritSelect_C_FindArgViralId");
static_assert(offsetof(WeaponInheritSelect_C_FindArgViralId, Array_Element) == 0x000000, "Member 'WeaponInheritSelect_C_FindArgViralId::Array_Element' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_FindArgViralId, Temp_int_Array_Index_Variable) == 0x000118, "Member 'WeaponInheritSelect_C_FindArgViralId::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_FindArgViralId, Temp_int_Loop_Counter_Variable) == 0x00011C, "Member 'WeaponInheritSelect_C_FindArgViralId::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_FindArgViralId, CallFunc_Add_IntInt_ReturnValue) == 0x000120, "Member 'WeaponInheritSelect_C_FindArgViralId::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_FindArgViralId, CallFunc_Array_Get_Item) == 0x000128, "Member 'WeaponInheritSelect_C_FindArgViralId::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_FindArgViralId, CallFunc_Array_Length_ReturnValue) == 0x000240, "Member 'WeaponInheritSelect_C_FindArgViralId::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_FindArgViralId, CallFunc_Less_IntInt_ReturnValue) == 0x000244, "Member 'WeaponInheritSelect_C_FindArgViralId::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_FindArgViralId, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000245, "Member 'WeaponInheritSelect_C_FindArgViralId::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");

// Function WeaponInheritSelect.WeaponInheritSelect_C.IsModalWindowOpen
// 0x0002 (0x0002 - 0x0000)
struct WeaponInheritSelect_C_IsModalWindowOpen final
{
public:
	bool                                          IsOpen;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WeaponInheritSelect_C_IsModalWindowOpen) == 0x000001, "Wrong alignment on WeaponInheritSelect_C_IsModalWindowOpen");
static_assert(sizeof(WeaponInheritSelect_C_IsModalWindowOpen) == 0x000002, "Wrong size on WeaponInheritSelect_C_IsModalWindowOpen");
static_assert(offsetof(WeaponInheritSelect_C_IsModalWindowOpen, IsOpen) == 0x000000, "Member 'WeaponInheritSelect_C_IsModalWindowOpen::IsOpen' has a wrong offset!");
static_assert(offsetof(WeaponInheritSelect_C_IsModalWindowOpen, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'WeaponInheritSelect_C_IsModalWindowOpen::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

