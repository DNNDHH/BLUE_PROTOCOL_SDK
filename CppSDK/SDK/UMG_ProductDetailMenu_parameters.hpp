#pragma once

 

// Package: UMG_ProductDetailMenu

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "E_SBDetailsZoomIn_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.OnClose__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_ProductDetailMenu_C_OnClose__DelegateSignature final
{
public:
	class UUMG_ProductDetailMenu_C*               Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ProductDetailMenu_C_OnClose__DelegateSignature) == 0x000008, "Wrong alignment on UMG_ProductDetailMenu_C_OnClose__DelegateSignature");
static_assert(sizeof(UMG_ProductDetailMenu_C_OnClose__DelegateSignature) == 0x000008, "Wrong size on UMG_ProductDetailMenu_C_OnClose__DelegateSignature");
static_assert(offsetof(UMG_ProductDetailMenu_C_OnClose__DelegateSignature, Sender) == 0x000000, "Member 'UMG_ProductDetailMenu_C_OnClose__DelegateSignature::Sender' has a wrong offset!");

// Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.ExecuteUbergraph_UMG_ProductDetailMenu
// 0x0178 (0x0178 - 0x0000)
struct UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetParentData_bIsValid;                   // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IBPI_SBProductData_C>  CallFunc_GetParentData_ParentData;                 // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UBP_SBProductItemData_C*                K2Node_ComponentBoundEvent_Data_2;                 // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_SBProductItemData_C*                K2Node_ComponentBoundEvent_Data_1;                 // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bTrying;                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bShow;                  // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89DC[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_SBProductItemData_C*                K2Node_ComponentBoundEvent_Data;                   // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89DD[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IBPI_SBProductData_C>  CallFunc_SetProductData_Data_CastInput;            // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	E_SBDetailsZoomIn                             K2Node_ComponentBoundEvent_Type;                   // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x005A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89DE[0x5];                                     // 0x005B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_SBProductItemData_C*                K2Node_CustomEvent_Data_1;                         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_SBProductData_C>  K2Node_CustomEvent_Data;                           // 0x0068(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_SBProductData_C*                    CallFunc_SpawnObject_ReturnValue;                  // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_SBProductData_C*                    CallFunc_SpawnObject_ReturnValue_1;                // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_SBProductData_C>  CallFunc_SetProductData_Data_CastInput_1;          // 0x0090(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IBPI_SBProductData_C>  CallFunc_SetProductData_Data_CastInput_2;          // 0x00A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UBP_SBProductData_C*                    CallFunc_SpawnObject_ReturnValue_2;                // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_SBProductData_C*                    CallFunc_SpawnObject_ReturnValue_3;                // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_SBProductData_C>  CallFunc_SetProductData_Data_CastInput_3;          // 0x00C0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IBPI_SBProductData_C>  CallFunc_SetProductData_Data_CastInput_4;          // 0x00D0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UBP_SBProductData_C*                    CallFunc_SpawnObject_ReturnValue_4;                // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_SBProductData_C*                    CallFunc_SpawnObject_ReturnValue_5;                // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IBPI_SBProductData_C>  CallFunc_SetProductData_Data_CastInput_5;          // 0x00F0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IBPI_SBProductData_C>  CallFunc_SetProductData_Data_CastInput_6;          // 0x0100(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSBMasterReward                        K2Node_CustomEvent_MasterReward;                   // 0x0110(0x0014)(NoDestructor)
	uint8                                         Pad_89DF[0x4];                                     // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIBlocker_C*                           CallFunc_Create_ReturnValue;                       // 0x0128(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBMailData>                    K2Node_CustomEvent_MailDatas;                      // 0x0130(0x0010)(ConstParm, ReferenceParm)
	struct FSBDungeonSupply                       K2Node_CustomEvent_DungeonSupply;                  // 0x0140(0x0008)(NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89E0[0x7];                                     // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_UniqueId;                       // 0x0150(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_OverrideAmount;                 // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             K2Node_CustomEvent_RewardType;                     // 0x0164(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89E1[0x3];                                     // 0x0165(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_ItemId;                         // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Amount;                         // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bBonus;                         // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu) == 0x000008, "Wrong alignment on UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu");
static_assert(sizeof(UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu) == 0x000178, "Wrong size on UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu");
static_assert(offsetof(UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu, EntryPoint) == 0x000000, "Member 'UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu, CallFunc_MakeLiteralByte_ReturnValue) == 0x000004, "Member 'UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu, CallFunc_IsValid_ReturnValue) == 0x000005, "Member 'UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000006, "Member 'UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu, CallFunc_GetParentData_bIsValid) == 0x000007, "Member 'UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu::CallFunc_GetParentData_bIsValid' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu, CallFunc_GetParentData_ParentData) == 0x000008, "Member 'UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu::CallFunc_GetParentData_ParentData' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu, K2Node_ComponentBoundEvent_Data_2) == 0x000018, "Member 'UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu::K2Node_ComponentBoundEvent_Data_2' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu, K2Node_ComponentBoundEvent_Data_1) == 0x000020, "Member 'UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu::K2Node_ComponentBoundEvent_Data_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu, K2Node_ComponentBoundEvent_bTrying) == 0x000028, "Member 'UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu::K2Node_ComponentBoundEvent_bTrying' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu, K2Node_ComponentBoundEvent_bShow) == 0x000029, "Member 'UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu::K2Node_ComponentBoundEvent_bShow' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu, CallFunc_Not_PreBool_ReturnValue) == 0x00002A, "Member 'UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu, CallFunc_IsAnimationPlaying_ReturnValue) == 0x00002B, "Member 'UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu, CallFunc_PlayAnimation_ReturnValue) == 0x000030, "Member 'UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu, K2Node_ComponentBoundEvent_Data) == 0x000038, "Member 'UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu::K2Node_ComponentBoundEvent_Data' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu, Temp_bool_Variable) == 0x000040, "Member 'UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu, CallFunc_SetProductData_Data_CastInput) == 0x000048, "Member 'UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu::CallFunc_SetProductData_Data_CastInput' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu, K2Node_ComponentBoundEvent_Type) == 0x000058, "Member 'UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu::K2Node_ComponentBoundEvent_Type' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu, K2Node_Select_Default) == 0x000059, "Member 'UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu, CallFunc_IsValid_ReturnValue_1) == 0x00005A, "Member 'UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu, K2Node_CustomEvent_Data_1) == 0x000060, "Member 'UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu::K2Node_CustomEvent_Data_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu, K2Node_CustomEvent_Data) == 0x000068, "Member 'UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu::K2Node_CustomEvent_Data' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu, CallFunc_GetOwningPlayer_ReturnValue) == 0x000078, "Member 'UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu, CallFunc_SpawnObject_ReturnValue) == 0x000080, "Member 'UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu, CallFunc_SpawnObject_ReturnValue_1) == 0x000088, "Member 'UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu::CallFunc_SpawnObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu, CallFunc_SetProductData_Data_CastInput_1) == 0x000090, "Member 'UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu::CallFunc_SetProductData_Data_CastInput_1' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu, CallFunc_SetProductData_Data_CastInput_2) == 0x0000A0, "Member 'UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu::CallFunc_SetProductData_Data_CastInput_2' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu, CallFunc_SpawnObject_ReturnValue_2) == 0x0000B0, "Member 'UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu::CallFunc_SpawnObject_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu, CallFunc_SpawnObject_ReturnValue_3) == 0x0000B8, "Member 'UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu::CallFunc_SpawnObject_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu, CallFunc_SetProductData_Data_CastInput_3) == 0x0000C0, "Member 'UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu::CallFunc_SetProductData_Data_CastInput_3' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu, CallFunc_SetProductData_Data_CastInput_4) == 0x0000D0, "Member 'UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu::CallFunc_SetProductData_Data_CastInput_4' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu, CallFunc_SpawnObject_ReturnValue_4) == 0x0000E0, "Member 'UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu::CallFunc_SpawnObject_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu, CallFunc_SpawnObject_ReturnValue_5) == 0x0000E8, "Member 'UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu::CallFunc_SpawnObject_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu, CallFunc_SetProductData_Data_CastInput_5) == 0x0000F0, "Member 'UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu::CallFunc_SetProductData_Data_CastInput_5' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu, CallFunc_SetProductData_Data_CastInput_6) == 0x000100, "Member 'UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu::CallFunc_SetProductData_Data_CastInput_6' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu, K2Node_CustomEvent_MasterReward) == 0x000110, "Member 'UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu::K2Node_CustomEvent_MasterReward' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu, CallFunc_Create_ReturnValue) == 0x000128, "Member 'UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu, K2Node_CustomEvent_MailDatas) == 0x000130, "Member 'UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu::K2Node_CustomEvent_MailDatas' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu, K2Node_CustomEvent_DungeonSupply) == 0x000140, "Member 'UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu::K2Node_CustomEvent_DungeonSupply' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000148, "Member 'UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu, K2Node_CustomEvent_UniqueId) == 0x000150, "Member 'UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu::K2Node_CustomEvent_UniqueId' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu, K2Node_CustomEvent_OverrideAmount) == 0x000160, "Member 'UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu::K2Node_CustomEvent_OverrideAmount' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu, K2Node_CustomEvent_RewardType) == 0x000164, "Member 'UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu::K2Node_CustomEvent_RewardType' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu, K2Node_CustomEvent_ItemId) == 0x000168, "Member 'UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu::K2Node_CustomEvent_ItemId' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu, K2Node_CustomEvent_Amount) == 0x00016C, "Member 'UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu::K2Node_CustomEvent_Amount' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu, K2Node_CustomEvent_bBonus) == 0x000170, "Member 'UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu::K2Node_CustomEvent_bBonus' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000171, "Member 'UMG_ProductDetailMenu_C_ExecuteUbergraph_UMG_ProductDetailMenu::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");

// Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.SetDataByRewardData
// 0x0010 (0x0010 - 0x0000)
struct UMG_ProductDetailMenu_C_SetDataByRewardData final
{
public:
	ESBRewardItemType                             RewardType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_89E2[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ItemId;                                            // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Amount;                                            // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bBonus;                                            // 0x000C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ProductDetailMenu_C_SetDataByRewardData) == 0x000004, "Wrong alignment on UMG_ProductDetailMenu_C_SetDataByRewardData");
static_assert(sizeof(UMG_ProductDetailMenu_C_SetDataByRewardData) == 0x000010, "Wrong size on UMG_ProductDetailMenu_C_SetDataByRewardData");
static_assert(offsetof(UMG_ProductDetailMenu_C_SetDataByRewardData, RewardType) == 0x000000, "Member 'UMG_ProductDetailMenu_C_SetDataByRewardData::RewardType' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_SetDataByRewardData, ItemId) == 0x000004, "Member 'UMG_ProductDetailMenu_C_SetDataByRewardData::ItemId' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_SetDataByRewardData, Amount) == 0x000008, "Member 'UMG_ProductDetailMenu_C_SetDataByRewardData::Amount' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_SetDataByRewardData, bBonus) == 0x00000C, "Member 'UMG_ProductDetailMenu_C_SetDataByRewardData::bBonus' has a wrong offset!");

// Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.SetDataByUniqueId
// 0x0018 (0x0018 - 0x0000)
struct UMG_ProductDetailMenu_C_SetDataByUniqueId final
{
public:
	class FString                                 UniqueId;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         OverrideAmount;                                    // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ProductDetailMenu_C_SetDataByUniqueId) == 0x000008, "Wrong alignment on UMG_ProductDetailMenu_C_SetDataByUniqueId");
static_assert(sizeof(UMG_ProductDetailMenu_C_SetDataByUniqueId) == 0x000018, "Wrong size on UMG_ProductDetailMenu_C_SetDataByUniqueId");
static_assert(offsetof(UMG_ProductDetailMenu_C_SetDataByUniqueId, UniqueId) == 0x000000, "Member 'UMG_ProductDetailMenu_C_SetDataByUniqueId::UniqueId' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_SetDataByUniqueId, OverrideAmount) == 0x000010, "Member 'UMG_ProductDetailMenu_C_SetDataByUniqueId::OverrideAmount' has a wrong offset!");

// Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.SetDataByDungeonSupply
// 0x0008 (0x0008 - 0x0000)
struct UMG_ProductDetailMenu_C_SetDataByDungeonSupply final
{
public:
	struct FSBDungeonSupply                       DungeonSupply;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(UMG_ProductDetailMenu_C_SetDataByDungeonSupply) == 0x000004, "Wrong alignment on UMG_ProductDetailMenu_C_SetDataByDungeonSupply");
static_assert(sizeof(UMG_ProductDetailMenu_C_SetDataByDungeonSupply) == 0x000008, "Wrong size on UMG_ProductDetailMenu_C_SetDataByDungeonSupply");
static_assert(offsetof(UMG_ProductDetailMenu_C_SetDataByDungeonSupply, DungeonSupply) == 0x000000, "Member 'UMG_ProductDetailMenu_C_SetDataByDungeonSupply::DungeonSupply' has a wrong offset!");

// Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.SetDataByMailDatas
// 0x0010 (0x0010 - 0x0000)
struct UMG_ProductDetailMenu_C_SetDataByMailDatas final
{
public:
	TArray<struct FSBMailData>                    MailDatas;                                         // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(UMG_ProductDetailMenu_C_SetDataByMailDatas) == 0x000008, "Wrong alignment on UMG_ProductDetailMenu_C_SetDataByMailDatas");
static_assert(sizeof(UMG_ProductDetailMenu_C_SetDataByMailDatas) == 0x000010, "Wrong size on UMG_ProductDetailMenu_C_SetDataByMailDatas");
static_assert(offsetof(UMG_ProductDetailMenu_C_SetDataByMailDatas, MailDatas) == 0x000000, "Member 'UMG_ProductDetailMenu_C_SetDataByMailDatas::MailDatas' has a wrong offset!");

// Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.SetDataByMasterReward
// 0x0014 (0x0014 - 0x0000)
struct UMG_ProductDetailMenu_C_SetDataByMasterReward final
{
public:
	struct FSBMasterReward                        MasterReward;                                      // 0x0000(0x0014)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(UMG_ProductDetailMenu_C_SetDataByMasterReward) == 0x000004, "Wrong alignment on UMG_ProductDetailMenu_C_SetDataByMasterReward");
static_assert(sizeof(UMG_ProductDetailMenu_C_SetDataByMasterReward) == 0x000014, "Wrong size on UMG_ProductDetailMenu_C_SetDataByMasterReward");
static_assert(offsetof(UMG_ProductDetailMenu_C_SetDataByMasterReward, MasterReward) == 0x000000, "Member 'UMG_ProductDetailMenu_C_SetDataByMasterReward::MasterReward' has a wrong offset!");

// Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.SetProductData
// 0x0010 (0x0010 - 0x0000)
struct UMG_ProductDetailMenu_C_SetProductData final
{
public:
	TScriptInterface<class IBPI_SBProductData_C>  Data;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ProductDetailMenu_C_SetProductData) == 0x000008, "Wrong alignment on UMG_ProductDetailMenu_C_SetProductData");
static_assert(sizeof(UMG_ProductDetailMenu_C_SetProductData) == 0x000010, "Wrong size on UMG_ProductDetailMenu_C_SetProductData");
static_assert(offsetof(UMG_ProductDetailMenu_C_SetProductData, Data) == 0x000000, "Member 'UMG_ProductDetailMenu_C_SetProductData::Data' has a wrong offset!");

// Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.SetData
// 0x0008 (0x0008 - 0x0000)
struct UMG_ProductDetailMenu_C_SetData final
{
public:
	class UBP_SBProductItemData_C*                Data;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ProductDetailMenu_C_SetData) == 0x000008, "Wrong alignment on UMG_ProductDetailMenu_C_SetData");
static_assert(sizeof(UMG_ProductDetailMenu_C_SetData) == 0x000008, "Wrong size on UMG_ProductDetailMenu_C_SetData");
static_assert(offsetof(UMG_ProductDetailMenu_C_SetData, Data) == 0x000000, "Member 'UMG_ProductDetailMenu_C_SetData::Data' has a wrong offset!");

// Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.BndEvt__UMG_ProductDetailMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_2_OnClickZoomIn__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct UMG_ProductDetailMenu_C_BndEvt__UMG_ProductDetailMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_2_OnClickZoomIn__DelegateSignature final
{
public:
	E_SBDetailsZoomIn                             Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ProductDetailMenu_C_BndEvt__UMG_ProductDetailMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_2_OnClickZoomIn__DelegateSignature) == 0x000001, "Wrong alignment on UMG_ProductDetailMenu_C_BndEvt__UMG_ProductDetailMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_2_OnClickZoomIn__DelegateSignature");
static_assert(sizeof(UMG_ProductDetailMenu_C_BndEvt__UMG_ProductDetailMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_2_OnClickZoomIn__DelegateSignature) == 0x000001, "Wrong size on UMG_ProductDetailMenu_C_BndEvt__UMG_ProductDetailMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_2_OnClickZoomIn__DelegateSignature");
static_assert(offsetof(UMG_ProductDetailMenu_C_BndEvt__UMG_ProductDetailMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_2_OnClickZoomIn__DelegateSignature, Type) == 0x000000, "Member 'UMG_ProductDetailMenu_C_BndEvt__UMG_ProductDetailMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_2_OnClickZoomIn__DelegateSignature::Type' has a wrong offset!");

// Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.BndEvt__UMG_SeasonPassItemReceiveMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_5_OnClickItemBoxDetail__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_ProductDetailMenu_C_BndEvt__UMG_SeasonPassItemReceiveMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_5_OnClickItemBoxDetail__DelegateSignature final
{
public:
	class UBP_SBProductItemData_C*                Data;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ProductDetailMenu_C_BndEvt__UMG_SeasonPassItemReceiveMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_5_OnClickItemBoxDetail__DelegateSignature) == 0x000008, "Wrong alignment on UMG_ProductDetailMenu_C_BndEvt__UMG_SeasonPassItemReceiveMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_5_OnClickItemBoxDetail__DelegateSignature");
static_assert(sizeof(UMG_ProductDetailMenu_C_BndEvt__UMG_SeasonPassItemReceiveMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_5_OnClickItemBoxDetail__DelegateSignature) == 0x000008, "Wrong size on UMG_ProductDetailMenu_C_BndEvt__UMG_SeasonPassItemReceiveMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_5_OnClickItemBoxDetail__DelegateSignature");
static_assert(offsetof(UMG_ProductDetailMenu_C_BndEvt__UMG_SeasonPassItemReceiveMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_5_OnClickItemBoxDetail__DelegateSignature, Data) == 0x000000, "Member 'UMG_ProductDetailMenu_C_BndEvt__UMG_SeasonPassItemReceiveMenu_UMG_ProductDetail_K2Node_ComponentBoundEvent_5_OnClickItemBoxDetail__DelegateSignature::Data' has a wrong offset!");

// Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.BndEvt__UMG_ItemPreviewItemInfo_K2Node_ComponentBoundEvent_9_OnShowDetails__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct UMG_ProductDetailMenu_C_BndEvt__UMG_ItemPreviewItemInfo_K2Node_ComponentBoundEvent_9_OnShowDetails__DelegateSignature final
{
public:
	bool                                          bShow;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ProductDetailMenu_C_BndEvt__UMG_ItemPreviewItemInfo_K2Node_ComponentBoundEvent_9_OnShowDetails__DelegateSignature) == 0x000001, "Wrong alignment on UMG_ProductDetailMenu_C_BndEvt__UMG_ItemPreviewItemInfo_K2Node_ComponentBoundEvent_9_OnShowDetails__DelegateSignature");
static_assert(sizeof(UMG_ProductDetailMenu_C_BndEvt__UMG_ItemPreviewItemInfo_K2Node_ComponentBoundEvent_9_OnShowDetails__DelegateSignature) == 0x000001, "Wrong size on UMG_ProductDetailMenu_C_BndEvt__UMG_ItemPreviewItemInfo_K2Node_ComponentBoundEvent_9_OnShowDetails__DelegateSignature");
static_assert(offsetof(UMG_ProductDetailMenu_C_BndEvt__UMG_ItemPreviewItemInfo_K2Node_ComponentBoundEvent_9_OnShowDetails__DelegateSignature, bShow) == 0x000000, "Member 'UMG_ProductDetailMenu_C_BndEvt__UMG_ItemPreviewItemInfo_K2Node_ComponentBoundEvent_9_OnShowDetails__DelegateSignature::bShow' has a wrong offset!");

// Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_3_OnSelectedItemData__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct UMG_ProductDetailMenu_C_BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_3_OnSelectedItemData__DelegateSignature final
{
public:
	class UBP_SBProductItemData_C*                Data;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bTrying;                                           // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_ProductDetailMenu_C_BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_3_OnSelectedItemData__DelegateSignature) == 0x000008, "Wrong alignment on UMG_ProductDetailMenu_C_BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_3_OnSelectedItemData__DelegateSignature");
static_assert(sizeof(UMG_ProductDetailMenu_C_BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_3_OnSelectedItemData__DelegateSignature) == 0x000010, "Wrong size on UMG_ProductDetailMenu_C_BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_3_OnSelectedItemData__DelegateSignature");
static_assert(offsetof(UMG_ProductDetailMenu_C_BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_3_OnSelectedItemData__DelegateSignature, Data) == 0x000000, "Member 'UMG_ProductDetailMenu_C_BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_3_OnSelectedItemData__DelegateSignature::Data' has a wrong offset!");
static_assert(offsetof(UMG_ProductDetailMenu_C_BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_3_OnSelectedItemData__DelegateSignature, bTrying) == 0x000008, "Member 'UMG_ProductDetailMenu_C_BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_3_OnSelectedItemData__DelegateSignature::bTrying' has a wrong offset!");

// Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_1_OnItemClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_ProductDetailMenu_C_BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_1_OnItemClicked__DelegateSignature final
{
public:
	class UBP_SBProductItemData_C*                Data;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ProductDetailMenu_C_BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_1_OnItemClicked__DelegateSignature) == 0x000008, "Wrong alignment on UMG_ProductDetailMenu_C_BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_1_OnItemClicked__DelegateSignature");
static_assert(sizeof(UMG_ProductDetailMenu_C_BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_1_OnItemClicked__DelegateSignature) == 0x000008, "Wrong size on UMG_ProductDetailMenu_C_BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_1_OnItemClicked__DelegateSignature");
static_assert(offsetof(UMG_ProductDetailMenu_C_BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_1_OnItemClicked__DelegateSignature, Data) == 0x000000, "Member 'UMG_ProductDetailMenu_C_BndEvt__FlatShop_ProductItem2_K2Node_ComponentBoundEvent_1_OnItemClicked__DelegateSignature::Data' has a wrong offset!");

// Function UMG_ProductDetailMenu.UMG_ProductDetailMenu_C.Show
// 0x0008 (0x0008 - 0x0000)
struct UMG_ProductDetailMenu_C_Show final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_ProductDetailMenu_C_Show) == 0x000008, "Wrong alignment on UMG_ProductDetailMenu_C_Show");
static_assert(sizeof(UMG_ProductDetailMenu_C_Show) == 0x000008, "Wrong size on UMG_ProductDetailMenu_C_Show");
static_assert(offsetof(UMG_ProductDetailMenu_C_Show, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'UMG_ProductDetailMenu_C_Show::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

