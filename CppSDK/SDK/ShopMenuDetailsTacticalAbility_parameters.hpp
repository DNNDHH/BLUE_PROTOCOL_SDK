#pragma once

 

// Package: ShopMenuDetailsTacticalAbility

#include "Basic.hpp"

#include "E_SBDetailsZoomIn_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function ShopMenuDetailsTacticalAbility.ShopMenuDetailsTacticalAbility_C.OnEndCloseDetailAnimation__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct ShopMenuDetailsTacticalAbility_C_OnEndCloseDetailAnimation__DelegateSignature final
{
public:
	class UUserWidget*                            InWidget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsTacticalAbility_C_OnEndCloseDetailAnimation__DelegateSignature) == 0x000008, "Wrong alignment on ShopMenuDetailsTacticalAbility_C_OnEndCloseDetailAnimation__DelegateSignature");
static_assert(sizeof(ShopMenuDetailsTacticalAbility_C_OnEndCloseDetailAnimation__DelegateSignature) == 0x000008, "Wrong size on ShopMenuDetailsTacticalAbility_C_OnEndCloseDetailAnimation__DelegateSignature");
static_assert(offsetof(ShopMenuDetailsTacticalAbility_C_OnEndCloseDetailAnimation__DelegateSignature, InWidget) == 0x000000, "Member 'ShopMenuDetailsTacticalAbility_C_OnEndCloseDetailAnimation__DelegateSignature::InWidget' has a wrong offset!");

// Function ShopMenuDetailsTacticalAbility.ShopMenuDetailsTacticalAbility_C.OnClickZoomIn__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct ShopMenuDetailsTacticalAbility_C_OnClickZoomIn__DelegateSignature final
{
public:
	E_SBDetailsZoomIn                             Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsTacticalAbility_C_OnClickZoomIn__DelegateSignature) == 0x000001, "Wrong alignment on ShopMenuDetailsTacticalAbility_C_OnClickZoomIn__DelegateSignature");
static_assert(sizeof(ShopMenuDetailsTacticalAbility_C_OnClickZoomIn__DelegateSignature) == 0x000001, "Wrong size on ShopMenuDetailsTacticalAbility_C_OnClickZoomIn__DelegateSignature");
static_assert(offsetof(ShopMenuDetailsTacticalAbility_C_OnClickZoomIn__DelegateSignature, Type) == 0x000000, "Member 'ShopMenuDetailsTacticalAbility_C_OnClickZoomIn__DelegateSignature::Type' has a wrong offset!");

// Function ShopMenuDetailsTacticalAbility.ShopMenuDetailsTacticalAbility_C.ExecuteUbergraph_ShopMenuDetailsTacticalAbility
// 0x01C8 (0x01C8 - 0x0000)
struct ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWPB_BuffIcon_C*                        K2Node_DynamicCast_AsWPB_Buff_Icon;                // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_540F[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5410[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5411[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_SkillId;                        // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindSkillDataMaster_bIsValid;             // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5412[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBSkillDataMasterData                 CallFunc_FindSkillDataMaster_SkillDataMaster;      // 0x0078(0x0058)()
	TArray<class UTextBlock*>                     K2Node_MakeArray_Array_1;                          // 0x00D0(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5413[0x3];                                     // 0x00E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBTextTableHash                       CallFunc_Array_Get_Item_1;                         // 0x00EC(0x0004)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5414[0x7];                                     // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetMasterSkillDataText_ReturnValue;       // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0108(0x0018)()
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue;             // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5415[0x3];                                     // 0x0131(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class USBSkillInfoClass*                CallFunc_GetSkillInfo_BP_ReturnValue;              // 0x0138(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5416[0x3];                                     // 0x0141(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetRecastTimeDefault_ReturnValue;         // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x014C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5417[0x3];                                     // 0x014D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Array_Get_Item_2;                         // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5418[0x4];                                     // 0x015C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0160(0x0018)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5419[0x7];                                     // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue_1;           // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetSkillBufIconList_ReturnValue;          // 0x0188(0x0010)(ReferenceParm)
	class USBPlayerManager*                       CallFunc_GetPlayerManager_ReturnValue_2;           // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetSkillIconDetail_ReturnValue;           // 0x01A0(0x0028)(UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility) == 0x000008, "Wrong alignment on ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility");
static_assert(sizeof(ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility) == 0x0001C8, "Wrong size on ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility");
static_assert(offsetof(ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility, EntryPoint) == 0x000000, "Member 'ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility::EntryPoint' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility, Temp_int_Array_Index_Variable) == 0x000004, "Member 'ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility, K2Node_MakeArray_Array) == 0x000008, "Member 'ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility, CallFunc_GetChildAt_ReturnValue) == 0x000018, "Member 'ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility, CallFunc_Array_Get_Item) == 0x000020, "Member 'ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility, K2Node_DynamicCast_AsWPB_Buff_Icon) == 0x000028, "Member 'ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility::K2Node_DynamicCast_AsWPB_Buff_Icon' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000038, "Member 'ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility, CallFunc_GetDisplayName_ReturnValue) == 0x000040, "Member 'ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility, Temp_int_Loop_Counter_Variable) == 0x000050, "Member 'ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility, K2Node_SwitchInteger_CmpSuccess) == 0x000054, "Member 'ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility, CallFunc_Add_IntInt_ReturnValue) == 0x000058, "Member 'ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility, CallFunc_IsAnimationPlaying_ReturnValue) == 0x00005C, "Member 'ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility, CallFunc_PlayAnimation_ReturnValue) == 0x000060, "Member 'ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility, CallFunc_PlayAnimation_ReturnValue_1) == 0x000068, "Member 'ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility, K2Node_CustomEvent_SkillId) == 0x000070, "Member 'ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility::K2Node_CustomEvent_SkillId' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility, CallFunc_FindSkillDataMaster_bIsValid) == 0x000074, "Member 'ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility::CallFunc_FindSkillDataMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility, CallFunc_FindSkillDataMaster_SkillDataMaster) == 0x000078, "Member 'ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility::CallFunc_FindSkillDataMaster_SkillDataMaster' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility, K2Node_MakeArray_Array_1) == 0x0000D0, "Member 'ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x0000E0, "Member 'ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility, Temp_bool_Variable) == 0x0000E8, "Member 'ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility, CallFunc_Array_Get_Item_1) == 0x0000EC, "Member 'ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility, CallFunc_IsEmpty_ReturnValue) == 0x0000F0, "Member 'ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility, CallFunc_GetMasterSkillDataText_ReturnValue) == 0x0000F8, "Member 'ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility::CallFunc_GetMasterSkillDataText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility, CallFunc_Conv_StringToText_ReturnValue) == 0x000108, "Member 'ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility, CallFunc_GetPlayerManager_ReturnValue) == 0x000120, "Member 'ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility::CallFunc_GetPlayerManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000128, "Member 'ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000130, "Member 'ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility, K2Node_Select_Default) == 0x000134, "Member 'ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility, CallFunc_GetSkillInfo_BP_ReturnValue) == 0x000138, "Member 'ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility::CallFunc_GetSkillInfo_BP_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility, CallFunc_IsValid_ReturnValue) == 0x000140, "Member 'ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility, CallFunc_GetRecastTimeDefault_ReturnValue) == 0x000144, "Member 'ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility::CallFunc_GetRecastTimeDefault_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility, CallFunc_FTrunc_ReturnValue) == 0x000148, "Member 'ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility, CallFunc_NotEqual_IntInt_ReturnValue) == 0x00014C, "Member 'ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility, CallFunc_Array_Get_Item_2) == 0x000150, "Member 'ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility, CallFunc_Array_Length_ReturnValue) == 0x000158, "Member 'ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility, CallFunc_Conv_IntToText_ReturnValue) == 0x000160, "Member 'ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility, CallFunc_Less_IntInt_ReturnValue) == 0x000178, "Member 'ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility, CallFunc_GetPlayerManager_ReturnValue_1) == 0x000180, "Member 'ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility::CallFunc_GetPlayerManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility, CallFunc_GetSkillBufIconList_ReturnValue) == 0x000188, "Member 'ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility::CallFunc_GetSkillBufIconList_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility, CallFunc_GetPlayerManager_ReturnValue_2) == 0x000198, "Member 'ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility::CallFunc_GetPlayerManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility, CallFunc_GetSkillIconDetail_ReturnValue) == 0x0001A0, "Member 'ShopMenuDetailsTacticalAbility_C_ExecuteUbergraph_ShopMenuDetailsTacticalAbility::CallFunc_GetSkillIconDetail_ReturnValue' has a wrong offset!");

// Function ShopMenuDetailsTacticalAbility.ShopMenuDetailsTacticalAbility_C.SetData
// 0x0004 (0x0004 - 0x0000)
struct ShopMenuDetailsTacticalAbility_C_SetData final
{
public:
	int32                                         Param_SkillId;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsTacticalAbility_C_SetData) == 0x000004, "Wrong alignment on ShopMenuDetailsTacticalAbility_C_SetData");
static_assert(sizeof(ShopMenuDetailsTacticalAbility_C_SetData) == 0x000004, "Wrong size on ShopMenuDetailsTacticalAbility_C_SetData");
static_assert(offsetof(ShopMenuDetailsTacticalAbility_C_SetData, Param_SkillId) == 0x000000, "Member 'ShopMenuDetailsTacticalAbility_C_SetData::Param_SkillId' has a wrong offset!");

}

