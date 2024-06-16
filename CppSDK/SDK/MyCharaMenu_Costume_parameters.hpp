#pragma once

 

// Package: MyCharaMenu_Costume

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "CharaParts_structs.hpp"
#include "UMG_structs.hpp"
#include "E_MyCharaMenu_CostumeCategory_structs.hpp"


namespace SDK::Params
{

// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnChangeCostumeProc__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_Costume_C_OnChangeCostumeProc__DelegateSignature final
{
public:
	bool                                          ProcStart;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_Costume_C_OnChangeCostumeProc__DelegateSignature) == 0x000001, "Wrong alignment on MyCharaMenu_Costume_C_OnChangeCostumeProc__DelegateSignature");
static_assert(sizeof(MyCharaMenu_Costume_C_OnChangeCostumeProc__DelegateSignature) == 0x000001, "Wrong size on MyCharaMenu_Costume_C_OnChangeCostumeProc__DelegateSignature");
static_assert(offsetof(MyCharaMenu_Costume_C_OnChangeCostumeProc__DelegateSignature, ProcStart) == 0x000000, "Member 'MyCharaMenu_Costume_C_OnChangeCostumeProc__DelegateSignature::ProcStart' has a wrong offset!");

// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnPlayerAvatarRotateActive__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_Costume_C_OnPlayerAvatarRotateActive__DelegateSignature final
{
public:
	bool                                          InIsActive;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_Costume_C_OnPlayerAvatarRotateActive__DelegateSignature) == 0x000001, "Wrong alignment on MyCharaMenu_Costume_C_OnPlayerAvatarRotateActive__DelegateSignature");
static_assert(sizeof(MyCharaMenu_Costume_C_OnPlayerAvatarRotateActive__DelegateSignature) == 0x000001, "Wrong size on MyCharaMenu_Costume_C_OnPlayerAvatarRotateActive__DelegateSignature");
static_assert(offsetof(MyCharaMenu_Costume_C_OnPlayerAvatarRotateActive__DelegateSignature, InIsActive) == 0x000000, "Member 'MyCharaMenu_Costume_C_OnPlayerAvatarRotateActive__DelegateSignature::InIsActive' has a wrong offset!");

// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnPlayerAvatarSwitchPosing__DelegateSignature
// 0x000C (0x000C - 0x0000)
struct MyCharaMenu_Costume_C_OnPlayerAvatarSwitchPosing__DelegateSignature final
{
public:
	class FName                                   OnPosingCommandName;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Param_IsSwitchPosingToPrev;                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_Costume_C_OnPlayerAvatarSwitchPosing__DelegateSignature) == 0x000004, "Wrong alignment on MyCharaMenu_Costume_C_OnPlayerAvatarSwitchPosing__DelegateSignature");
static_assert(sizeof(MyCharaMenu_Costume_C_OnPlayerAvatarSwitchPosing__DelegateSignature) == 0x00000C, "Wrong size on MyCharaMenu_Costume_C_OnPlayerAvatarSwitchPosing__DelegateSignature");
static_assert(offsetof(MyCharaMenu_Costume_C_OnPlayerAvatarSwitchPosing__DelegateSignature, OnPosingCommandName) == 0x000000, "Member 'MyCharaMenu_Costume_C_OnPlayerAvatarSwitchPosing__DelegateSignature::OnPosingCommandName' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_OnPlayerAvatarSwitchPosing__DelegateSignature, Param_IsSwitchPosingToPrev) == 0x000008, "Member 'MyCharaMenu_Costume_C_OnPlayerAvatarSwitchPosing__DelegateSignature::Param_IsSwitchPosingToPrev' has a wrong offset!");

// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnPlayerAvatarSwitchCostumeOnOff__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_Costume_C_OnPlayerAvatarSwitchCostumeOnOff__DelegateSignature final
{
public:
	bool                                          InIsCostumeOn;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_Costume_C_OnPlayerAvatarSwitchCostumeOnOff__DelegateSignature) == 0x000001, "Wrong alignment on MyCharaMenu_Costume_C_OnPlayerAvatarSwitchCostumeOnOff__DelegateSignature");
static_assert(sizeof(MyCharaMenu_Costume_C_OnPlayerAvatarSwitchCostumeOnOff__DelegateSignature) == 0x000001, "Wrong size on MyCharaMenu_Costume_C_OnPlayerAvatarSwitchCostumeOnOff__DelegateSignature");
static_assert(offsetof(MyCharaMenu_Costume_C_OnPlayerAvatarSwitchCostumeOnOff__DelegateSignature, InIsCostumeOn) == 0x000000, "Member 'MyCharaMenu_Costume_C_OnPlayerAvatarSwitchCostumeOnOff__DelegateSignature::InIsCostumeOn' has a wrong offset!");

// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnSetCostumePreviewParameter__DelegateSignature
// 0x03C8 (0x03C8 - 0x0000)
struct MyCharaMenu_Costume_C_OnSetCostumePreviewParameter__DelegateSignature final
{
public:
	struct FSBCharaCreateParameter                CharaCreateParameter;                              // 0x0000(0x03C0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          Start;                                             // 0x03C0(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_Costume_C_OnSetCostumePreviewParameter__DelegateSignature) == 0x000008, "Wrong alignment on MyCharaMenu_Costume_C_OnSetCostumePreviewParameter__DelegateSignature");
static_assert(sizeof(MyCharaMenu_Costume_C_OnSetCostumePreviewParameter__DelegateSignature) == 0x0003C8, "Wrong size on MyCharaMenu_Costume_C_OnSetCostumePreviewParameter__DelegateSignature");
static_assert(offsetof(MyCharaMenu_Costume_C_OnSetCostumePreviewParameter__DelegateSignature, CharaCreateParameter) == 0x000000, "Member 'MyCharaMenu_Costume_C_OnSetCostumePreviewParameter__DelegateSignature::CharaCreateParameter' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_OnSetCostumePreviewParameter__DelegateSignature, Start) == 0x0003C0, "Member 'MyCharaMenu_Costume_C_OnSetCostumePreviewParameter__DelegateSignature::Start' has a wrong offset!");

// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnRefreshPreviewCostume__DelegateSignature
// 0x03C0 (0x03C0 - 0x0000)
struct MyCharaMenu_Costume_C_OnRefreshPreviewCostume__DelegateSignature final
{
public:
	struct FSBCharaCreateParameter                Parameter;                                         // 0x0000(0x03C0)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(MyCharaMenu_Costume_C_OnRefreshPreviewCostume__DelegateSignature) == 0x000008, "Wrong alignment on MyCharaMenu_Costume_C_OnRefreshPreviewCostume__DelegateSignature");
static_assert(sizeof(MyCharaMenu_Costume_C_OnRefreshPreviewCostume__DelegateSignature) == 0x0003C0, "Wrong size on MyCharaMenu_Costume_C_OnRefreshPreviewCostume__DelegateSignature");
static_assert(offsetof(MyCharaMenu_Costume_C_OnRefreshPreviewCostume__DelegateSignature, Parameter) == 0x000000, "Member 'MyCharaMenu_Costume_C_OnRefreshPreviewCostume__DelegateSignature::Parameter' has a wrong offset!");

// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ExecuteUbergraph_MyCharaMenu_Costume
// 0x0940 (0x0940 - 0x0000)
struct MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_75AD[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharaEquipItemInfo                    K2Node_MakeStruct_CharaEquipItemInfo;              // 0x0018(0x0028)()
	class FName                                   Temp_name_Variable;                                // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetEquipItemCharaCreateInfoFromEquipItemInfo_IsValid; // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75AE[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharaEquipItemCharaCreateInfo         CallFunc_GetEquipItemCharaCreateInfoFromEquipItemInfo_OutEquipItemCharaCreateInfo; // 0x0050(0x0028)()
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75AF[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerCharacterCommonComponent*      CallFunc_GetPlayerCharacterCommonComponent_ReturnValue; // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_GetPlayerClassType_ClassType;             // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75B0[0x6];                                     // 0x0092(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_InRingUniqueId;         // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_InIsLeftHand;           // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75B1[0x3];                                     // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPreviewCostumeUniqueId_UniqueId;       // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75B2[0x2];                                     // 0x00CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_MyCharaMenu_CostumeCategory                 CallFunc_GetSelectedCostumeCategory_OutCostumeCategory; // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_75B3[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_InItemUniqueId;         // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue_1;            // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharaEquipInfo                        CallFunc_GetEquipInfo_ReturnValue;                 // 0x00F8(0x0010)()
	bool                                          Temp_bool_Variable;                                // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75B4[0x3];                                     // 0x0109(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue_2;                     // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetEquipItemCharaCreateInfoFromEquipItemInfo_IsValid_1; // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75B5[0x6];                                     // 0x0112(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharaEquipItemCharaCreateInfo         CallFunc_GetEquipItemCharaCreateInfoFromEquipItemInfo_OutEquipItemCharaCreateInfo_1; // 0x0118(0x0028)()
	TDelegate<void(int32 RetCode, struct FSBExpiredEquipmentData& InExpiredEquipmentData)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0140(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_75B6[0x4];                                     // 0x0154(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0158(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75B7[0x2];                                     // 0x0162(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode_2;                      // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBExpiredEquipmentData                K2Node_CustomEvent_InExpiredEquipmentData_2;       // 0x0168(0x0130)(ConstParm)
	int32                                         K2Node_CustomEvent_RetCode_1;                      // 0x0298(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_75B8[0x4];                                     // 0x029C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBExpiredEquipmentData                K2Node_CustomEvent_InExpiredEquipmentData_1;       // 0x02A0(0x0130)(ConstParm)
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue;             // 0x03D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x03D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75B9[0x7];                                     // 0x03D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerStorageComponent*              CallFunc_GetPlayerStorageComponent_ReturnValue;    // 0x03E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x03E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsThereExpiredEquipment_ReturnValue;      // 0x03E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x03EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x03EB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_IsDetach;                       // 0x03EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckCostumeEquipment_EquipFlag;          // 0x03ED(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75BA[0x2];                                     // 0x03EE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharaEquipItemInfo                    K2Node_MakeStruct_CharaEquipItemInfo_1;            // 0x03F0(0x0028)()
	class FString                                 K2Node_CustomEvent_InItemUniqueId;                 // 0x0418(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0428(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x042C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharaEquipInfo                        CallFunc_GetEquipInfo_ReturnValue_1;               // 0x0430(0x0010)()
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x0440(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_75BB[0x4];                                     // 0x0444(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBExpiredEquipmentData                K2Node_CustomEvent_InExpiredEquipmentData;         // 0x0448(0x0130)()
	struct FCharaEquipItemInfo                    CallFunc_Array_Get_Item;                           // 0x0578(0x0028)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x05A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x05A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCompositeWearByCostumeId_bIsValid;      // 0x05A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCompositeWearByCostumeId_IsCompositeWear; // 0x05A6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75BC[0x1];                                     // 0x05A7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ECharaPartsLocation>                   CallFunc_IsCompositeWearByCostumeId_OccupiedPartsLocations; // 0x05A8(0x0010)(ReferenceParm)
	struct FSBMasterCostume                       CallFunc_IsCompositeWearByCostumeId_MasterCostume; // 0x05B8(0x0088)()
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0640(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharaEquipType                             CallFunc_GetCharaEquipTypeFromProtectorCategory_OutCharaEquipType; // 0x0641(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCharaEquipTypeFromProtectorCategory_ReturnValue; // 0x0642(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75BD[0x5];                                     // 0x0643(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0648(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0658(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75BE[0x7];                                     // 0x0659(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0660(0x0018)()
	int32                                         CallFunc_PlaySE_ReturnValue_3;                     // 0x0678(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x067C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_InIsDressVisibilitySwitchOn; // 0x067D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x067E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x067F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                K2Node_CustomEvent_Sender_1;                       // 0x0680(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_1;                        // 0x0688(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender;                         // 0x0690(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param;                          // 0x0698(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBIntParam*                            K2Node_DynamicCast_AsSBInt_Param;                  // 0x06A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x06A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75BF[0x7];                                     // 0x06A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBIntParam*                            K2Node_DynamicCast_AsSBInt_Param_1;                // 0x06B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x06B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x06B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x06BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75C0[0x5];                                     // 0x06BB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue;             // 0x06C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ShowExpiredItemNoticeSystemMessage_OutIsMessageShowed; // 0x06C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetSystemMessageManager_IsValid;          // 0x06C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75C1[0x6];                                     // 0x06CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSystemMessageManager*                CallFunc_GetSystemMessageManager_ReturnValue;      // 0x06D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSystemMessageShowingOrStandby_ReturnValue; // 0x06D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75C2[0x3];                                     // 0x06D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable_1;                              // 0x06DC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode, struct FSBExpiredEquipmentData& InExpiredEquipmentData)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x06E4(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   K2Node_Select_Default;                             // 0x06F4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_75C3[0x4];                                     // 0x06FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0700(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0708(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharacterGender                            CallFunc_GetGender_ReturnValue;                    // 0x0709(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAvatarCostumePartsLoadingFlag_OutIsAvatarCostumePartsLoading; // 0x070A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetAvatarCostumePartsLoadingFlag_OutIsAvatarCostumePartsLoading_1; // 0x070B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_PlaySE_ReturnValue_4;                     // 0x070C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0710(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0711(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0712(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0713(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_75C4[0x4];                                     // 0x0714(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_2;      // 0x0718(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerCharacterCommonComponent*      CallFunc_GetPlayerCharacterCommonComponent_ReturnValue_1; // 0x0720(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x0728(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x0729(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75C5[0x2];                                     // 0x072A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 RetCode, struct FSBExpiredEquipmentData& InExpiredEquipmentData)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x072C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_4;            // 0x073C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_75C6[0x3];                                     // 0x073D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x0740(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0750(0x0008)(NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable;                                // 0x0758(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_75C7[0x3];                                     // 0x0759(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x075C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_75C8[0x4];                                     // 0x076C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x0770(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckPreviewUnusedItem_Unused;            // 0x0778(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0779(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75C9[0x6];                                     // 0x077A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0780(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsUseCheckDialogActive_ReturnValue;       // 0x0788(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75CA[0x7];                                     // 0x0789(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0790(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x07A0(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x07B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_1;           // 0x07C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75CB[0x7];                                     // 0x07C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_1;       // 0x07D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x07D8(0x0018)()
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x07F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_SaveGeneralConfigData_ReturnValue;        // 0x0800(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_75CC[0x3];                                     // 0x0801(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;            // 0x0804(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_75CD[0x4];                                     // 0x0814(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_2;        // 0x0818(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_7;            // 0x0820(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_CustomEvent_Start;                          // 0x0830(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharaEquipType                             Temp_byte_Variable_1;                              // 0x0831(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0832(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_ForceReset;                     // 0x0833(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0834(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0838(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0839(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75CE[0x2];                                     // 0x083A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_8;            // 0x083C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_75CF[0x4];                                     // 0x084C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue_2;            // 0x0850(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_MyCharaMenu_CostumeCategory                 CallFunc_GetSelectedCostumeCategory_OutCostumeCategory_1; // 0x0858(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_75D0[0x7];                                     // 0x0859(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPreviewCostumeUniqueId_UniqueId_1;     // 0x0860(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x0870(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75D1[0x7];                                     // 0x0871(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPreviewCostumeUniqueId_UniqueId_2;     // 0x0878(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_2;          // 0x0888(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75D2[0x3];                                     // 0x0889(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_PlaySE_ReturnValue_5;                     // 0x088C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 RetCode, struct FSBExpiredEquipmentData& InExpiredEquipmentData)> K2Node_CreateDelegate_OutputDelegate_9;            // 0x0890(0x0010)(ZeroConstructor, NoDestructor)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_3;      // 0x08A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x08A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75D3[0x3];                                     // 0x08A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x08AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x08B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_5;            // 0x08B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_75D4[0x6];                                     // 0x08B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBShowYesNoDialog2Impl*                CallFunc_ShowYesNoDialog2_ReturnValue;             // 0x08B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x08C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x08C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75D5[0x6];                                     // 0x08C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharaEquipInfo                        CallFunc_GetEquipInfo_ReturnValue_2;               // 0x08C8(0x0010)()
	bool                                          Temp_bool_Variable_2;                              // 0x08D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75D6[0x7];                                     // 0x08D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x08E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             K2Node_Select_Default_2;                           // 0x08E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_75D7[0x7];                                     // 0x08E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue_1;       // 0x08F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x08F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75D8[0x7];                                     // 0x08F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0900(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_10;                   // 0x0908(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75D9[0x7];                                     // 0x0909(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemList*                         CallFunc_GetOwnItemList_ReturnValue;               // 0x0910(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_10;           // 0x0918(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid_1;            // 0x0928(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75DA[0x7];                                     // 0x0929(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue_1;        // 0x0930(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemList*                         CallFunc_GetOwnItemList_ReturnValue_1;             // 0x0938(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume) == 0x000008, "Wrong alignment on MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume");
static_assert(sizeof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume) == 0x000940, "Wrong size on MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, EntryPoint) == 0x000000, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::EntryPoint' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, K2Node_MakeStruct_CharaEquipItemInfo) == 0x000018, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::K2Node_MakeStruct_CharaEquipItemInfo' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, Temp_name_Variable) == 0x000040, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_GetEquipItemCharaCreateInfoFromEquipItemInfo_IsValid) == 0x000048, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_GetEquipItemCharaCreateInfoFromEquipItemInfo_IsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_GetEquipItemCharaCreateInfoFromEquipItemInfo_OutEquipItemCharaCreateInfo) == 0x000050, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_GetEquipItemCharaCreateInfoFromEquipItemInfo_OutEquipItemCharaCreateInfo' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_GetSBPlayerController_ReturnValue) == 0x000078, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_IsValid_ReturnValue) == 0x000080, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_GetPlayerCharacterCommonComponent_ReturnValue) == 0x000088, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_GetPlayerCharacterCommonComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_GetPlayerClassType_ClassType) == 0x000090, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_GetPlayerClassType_ClassType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_IsValid_ReturnValue_1) == 0x000091, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, K2Node_ComponentBoundEvent_InRingUniqueId) == 0x000098, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::K2Node_ComponentBoundEvent_InRingUniqueId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, K2Node_ComponentBoundEvent_InIsLeftHand) == 0x0000A8, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::K2Node_ComponentBoundEvent_InIsLeftHand' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_PlaySE_ReturnValue) == 0x0000AC, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x0000B0, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_GetPreviewCostumeUniqueId_UniqueId) == 0x0000B8, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_GetPreviewCostumeUniqueId_UniqueId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_IsValid_ReturnValue_2) == 0x0000C8, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000C9, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_PlaySE_ReturnValue_1) == 0x0000CC, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_GetEquipmentBag_ReturnValue) == 0x0000D0, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_GetSelectedCostumeCategory_OutCostumeCategory) == 0x0000D8, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_GetSelectedCostumeCategory_OutCostumeCategory' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, K2Node_ComponentBoundEvent_InItemUniqueId) == 0x0000E0, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::K2Node_ComponentBoundEvent_InItemUniqueId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_GetEquipmentBag_ReturnValue_1) == 0x0000F0, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_GetEquipmentBag_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_GetEquipInfo_ReturnValue) == 0x0000F8, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_GetEquipInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, Temp_bool_Variable) == 0x000108, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_PlaySE_ReturnValue_2) == 0x00010C, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_PlaySE_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_MakeLiteralByte_ReturnValue) == 0x000110, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_GetEquipItemCharaCreateInfoFromEquipItemInfo_IsValid_1) == 0x000111, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_GetEquipItemCharaCreateInfoFromEquipItemInfo_IsValid_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_GetEquipItemCharaCreateInfoFromEquipItemInfo_OutEquipItemCharaCreateInfo_1) == 0x000118, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_GetEquipItemCharaCreateInfoFromEquipItemInfo_OutEquipItemCharaCreateInfo_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, K2Node_CreateDelegate_OutputDelegate_1) == 0x000140, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, Temp_int_Array_Index_Variable) == 0x000150, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, K2Node_Event_Animation) == 0x000158, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_IsValid_ReturnValue_3) == 0x000160, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000161, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, K2Node_CustomEvent_RetCode_2) == 0x000164, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::K2Node_CustomEvent_RetCode_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, K2Node_CustomEvent_InExpiredEquipmentData_2) == 0x000168, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::K2Node_CustomEvent_InExpiredEquipmentData_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, K2Node_CustomEvent_RetCode_1) == 0x000298, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::K2Node_CustomEvent_RetCode_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, K2Node_CustomEvent_InExpiredEquipmentData_1) == 0x0002A0, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::K2Node_CustomEvent_InExpiredEquipmentData_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_GetSBPlayerState_ReturnValue) == 0x0003D0, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_GetSBPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_IsValid_ReturnValue_4) == 0x0003D8, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_GetPlayerStorageComponent_ReturnValue) == 0x0003E0, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_GetPlayerStorageComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_IsValid_ReturnValue_5) == 0x0003E8, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_IsThereExpiredEquipment_ReturnValue) == 0x0003E9, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_IsThereExpiredEquipment_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, Temp_bool_True_if_break_was_hit_Variable) == 0x0003EA, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_Not_PreBool_ReturnValue) == 0x0003EB, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, K2Node_CustomEvent_IsDetach) == 0x0003EC, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::K2Node_CustomEvent_IsDetach' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_CheckCostumeEquipment_EquipFlag) == 0x0003ED, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_CheckCostumeEquipment_EquipFlag' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, K2Node_MakeStruct_CharaEquipItemInfo_1) == 0x0003F0, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::K2Node_MakeStruct_CharaEquipItemInfo_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, K2Node_CustomEvent_InItemUniqueId) == 0x000418, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::K2Node_CustomEvent_InItemUniqueId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, Temp_int_Loop_Counter_Variable) == 0x000428, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_Add_IntInt_ReturnValue) == 0x00042C, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_GetEquipInfo_ReturnValue_1) == 0x000430, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_GetEquipInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, K2Node_CustomEvent_RetCode) == 0x000440, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, K2Node_CustomEvent_InExpiredEquipmentData) == 0x000448, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::K2Node_CustomEvent_InExpiredEquipmentData' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_Array_Get_Item) == 0x000578, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_Array_Length_ReturnValue) == 0x0005A0, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_Less_IntInt_ReturnValue) == 0x0005A4, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_IsCompositeWearByCostumeId_bIsValid) == 0x0005A5, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_IsCompositeWearByCostumeId_bIsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_IsCompositeWearByCostumeId_IsCompositeWear) == 0x0005A6, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_IsCompositeWearByCostumeId_IsCompositeWear' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_IsCompositeWearByCostumeId_OccupiedPartsLocations) == 0x0005A8, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_IsCompositeWearByCostumeId_OccupiedPartsLocations' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_IsCompositeWearByCostumeId_MasterCostume) == 0x0005B8, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_IsCompositeWearByCostumeId_MasterCostume' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_BooleanAND_ReturnValue) == 0x000640, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_GetCharaEquipTypeFromProtectorCategory_OutCharaEquipType) == 0x000641, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_GetCharaEquipTypeFromProtectorCategory_OutCharaEquipType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_GetCharaEquipTypeFromProtectorCategory_ReturnValue) == 0x000642, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_GetCharaEquipTypeFromProtectorCategory_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_GetSBRetMessage_ReturnValue) == 0x000648, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000658, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_Conv_StringToText_ReturnValue) == 0x000660, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_PlaySE_ReturnValue_3) == 0x000678, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_PlaySE_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00067C, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, K2Node_ComponentBoundEvent_InIsDressVisibilitySwitchOn) == 0x00067D, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::K2Node_ComponentBoundEvent_InIsDressVisibilitySwitchOn' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_Not_PreBool_ReturnValue_1) == 0x00067E, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_Not_PreBool_ReturnValue_2) == 0x00067F, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, K2Node_CustomEvent_Sender_1) == 0x000680, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::K2Node_CustomEvent_Sender_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, K2Node_CustomEvent_Param_1) == 0x000688, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::K2Node_CustomEvent_Param_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, K2Node_CustomEvent_Sender) == 0x000690, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, K2Node_CustomEvent_Param) == 0x000698, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::K2Node_CustomEvent_Param' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, K2Node_DynamicCast_AsSBInt_Param) == 0x0006A0, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::K2Node_DynamicCast_AsSBInt_Param' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, K2Node_DynamicCast_bSuccess) == 0x0006A8, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, K2Node_DynamicCast_AsSBInt_Param_1) == 0x0006B0, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::K2Node_DynamicCast_AsSBInt_Param_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, K2Node_DynamicCast_bSuccess_1) == 0x0006B8, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x0006B9, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_EqualEqual_IntInt_ReturnValue_2) == 0x0006BA, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_EqualEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_GetEventExecutor_ReturnValue) == 0x0006C0, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_GetEventExecutor_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_ShowExpiredItemNoticeSystemMessage_OutIsMessageShowed) == 0x0006C8, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_ShowExpiredItemNoticeSystemMessage_OutIsMessageShowed' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_GetSystemMessageManager_IsValid) == 0x0006C9, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_GetSystemMessageManager_IsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_GetSystemMessageManager_ReturnValue) == 0x0006D0, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_GetSystemMessageManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_IsSystemMessageShowingOrStandby_ReturnValue) == 0x0006D8, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_IsSystemMessageShowingOrStandby_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, Temp_name_Variable_1) == 0x0006DC, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, K2Node_CreateDelegate_OutputDelegate_2) == 0x0006E4, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, K2Node_Select_Default) == 0x0006F4, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000700, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_IsValid_ReturnValue_6) == 0x000708, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_GetGender_ReturnValue) == 0x000709, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_GetGender_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_GetAvatarCostumePartsLoadingFlag_OutIsAvatarCostumePartsLoading) == 0x00070A, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_GetAvatarCostumePartsLoadingFlag_OutIsAvatarCostumePartsLoading' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_GetAvatarCostumePartsLoadingFlag_OutIsAvatarCostumePartsLoading_1) == 0x00070B, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_GetAvatarCostumePartsLoadingFlag_OutIsAvatarCostumePartsLoading_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_PlaySE_ReturnValue_4) == 0x00070C, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_PlaySE_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, Temp_bool_Variable_1) == 0x000710, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000711, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000712, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, K2Node_Select_Default_1) == 0x000713, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_GetSBPlayerController_ReturnValue_2) == 0x000718, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_GetSBPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_GetPlayerCharacterCommonComponent_ReturnValue_1) == 0x000720, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_GetPlayerCharacterCommonComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_IsValid_ReturnValue_7) == 0x000728, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_IsValid_ReturnValue_8) == 0x000729, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, K2Node_CreateDelegate_OutputDelegate_3) == 0x00072C, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_MakeLiteralByte_ReturnValue_4) == 0x00073C, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_MakeLiteralByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, K2Node_CreateDelegate_OutputDelegate_4) == 0x000740, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000750, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, Temp_byte_Variable) == 0x000758, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, K2Node_CreateDelegate_OutputDelegate_5) == 0x00075C, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000770, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_CheckPreviewUnusedItem_Unused) == 0x000778, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_CheckPreviewUnusedItem_Unused' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_GetConfigSaveManager_IsValid) == 0x000779, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000780, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_IsUseCheckDialogActive_ReturnValue) == 0x000788, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_IsUseCheckDialogActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000790, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0007A0, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x0007B8, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_GetConfigSaveManager_IsValid_1) == 0x0007C8, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_GetConfigSaveManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_GetConfigSaveManager_ReturnValue_1) == 0x0007D0, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_GetConfigSaveManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0007D8, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_GetPlayerId_ReturnValue) == 0x0007F0, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_SaveGeneralConfigData_ReturnValue) == 0x000800, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_SaveGeneralConfigData_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, K2Node_CreateDelegate_OutputDelegate_6) == 0x000804, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_K2_SetTimerDelegate_ReturnValue_2) == 0x000818, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_K2_SetTimerDelegate_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, K2Node_CreateDelegate_OutputDelegate_7) == 0x000820, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, K2Node_CustomEvent_Start) == 0x000830, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::K2Node_CustomEvent_Start' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, Temp_byte_Variable_1) == 0x000831, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000832, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, K2Node_CustomEvent_ForceReset) == 0x000833, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::K2Node_CustomEvent_ForceReset' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_Array_Length_ReturnValue_1) == 0x000834, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_Greater_IntInt_ReturnValue) == 0x000838, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_BooleanOR_ReturnValue) == 0x000839, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, K2Node_CreateDelegate_OutputDelegate_8) == 0x00083C, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_GetEquipmentBag_ReturnValue_2) == 0x000850, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_GetEquipmentBag_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_GetSelectedCostumeCategory_OutCostumeCategory_1) == 0x000858, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_GetSelectedCostumeCategory_OutCostumeCategory_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_GetPreviewCostumeUniqueId_UniqueId_1) == 0x000860, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_GetPreviewCostumeUniqueId_UniqueId_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x000870, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_GetPreviewCostumeUniqueId_UniqueId_2) == 0x000878, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_GetPreviewCostumeUniqueId_UniqueId_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_EqualEqual_StrStr_ReturnValue_2) == 0x000888, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_EqualEqual_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_PlaySE_ReturnValue_5) == 0x00088C, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_PlaySE_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, K2Node_CreateDelegate_OutputDelegate_9) == 0x000890, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_GetSBPlayerController_ReturnValue_3) == 0x0008A0, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_GetSBPlayerController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_IsValid_ReturnValue_9) == 0x0008A8, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_Array_Length_ReturnValue_2) == 0x0008AC, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_Greater_IntInt_ReturnValue_1) == 0x0008B0, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_MakeLiteralByte_ReturnValue_5) == 0x0008B1, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_MakeLiteralByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_ShowYesNoDialog2_ReturnValue) == 0x0008B8, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_ShowYesNoDialog2_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_Not_PreBool_ReturnValue_3) == 0x0008C0, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0008C1, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_GetEquipInfo_ReturnValue_2) == 0x0008C8, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_GetEquipInfo_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, Temp_bool_Variable_2) == 0x0008D8, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_PlayAnimation_ReturnValue) == 0x0008E0, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, K2Node_Select_Default_2) == 0x0008E8, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_GetSBPlayerCharacter_ReturnValue_1) == 0x0008F0, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_GetSBPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_GetNetworkDataCache_IsValid) == 0x0008F8, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000900, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_IsValid_ReturnValue_10) == 0x000908, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_GetOwnItemList_ReturnValue) == 0x000910, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_GetOwnItemList_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, K2Node_CreateDelegate_OutputDelegate_10) == 0x000918, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_GetNetworkDataCache_IsValid_1) == 0x000928, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_GetNetworkDataCache_IsValid_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_GetNetworkDataCache_ReturnValue_1) == 0x000930, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_GetNetworkDataCache_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume, CallFunc_GetOwnItemList_ReturnValue_1) == 0x000938, "Member 'MyCharaMenu_Costume_C_ExecuteUbergraph_MyCharaMenu_Costume::CallFunc_GetOwnItemList_ReturnValue_1' has a wrong offset!");

// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ResetPreviewAvaterCostume
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_Costume_C_ResetPreviewAvaterCostume final
{
public:
	bool                                          ForceReset;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_Costume_C_ResetPreviewAvaterCostume) == 0x000001, "Wrong alignment on MyCharaMenu_Costume_C_ResetPreviewAvaterCostume");
static_assert(sizeof(MyCharaMenu_Costume_C_ResetPreviewAvaterCostume) == 0x000001, "Wrong size on MyCharaMenu_Costume_C_ResetPreviewAvaterCostume");
static_assert(offsetof(MyCharaMenu_Costume_C_ResetPreviewAvaterCostume, ForceReset) == 0x000000, "Member 'MyCharaMenu_Costume_C_ResetPreviewAvaterCostume::ForceReset' has a wrong offset!");

// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnPreviewCostumeChange
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_Costume_C_OnPreviewCostumeChange final
{
public:
	bool                                          Start;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_Costume_C_OnPreviewCostumeChange) == 0x000001, "Wrong alignment on MyCharaMenu_Costume_C_OnPreviewCostumeChange");
static_assert(sizeof(MyCharaMenu_Costume_C_OnPreviewCostumeChange) == 0x000001, "Wrong size on MyCharaMenu_Costume_C_OnPreviewCostumeChange");
static_assert(offsetof(MyCharaMenu_Costume_C_OnPreviewCostumeChange, Start) == 0x000000, "Member 'MyCharaMenu_Costume_C_OnPreviewCostumeChange::Start' has a wrong offset!");

// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnExistHigherPriorityCapture
// 0x0010 (0x0010 - 0x0000)
struct MyCharaMenu_Costume_C_OnExistHigherPriorityCapture final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_Costume_C_OnExistHigherPriorityCapture) == 0x000008, "Wrong alignment on MyCharaMenu_Costume_C_OnExistHigherPriorityCapture");
static_assert(sizeof(MyCharaMenu_Costume_C_OnExistHigherPriorityCapture) == 0x000010, "Wrong size on MyCharaMenu_Costume_C_OnExistHigherPriorityCapture");
static_assert(offsetof(MyCharaMenu_Costume_C_OnExistHigherPriorityCapture, Sender) == 0x000000, "Member 'MyCharaMenu_Costume_C_OnExistHigherPriorityCapture::Sender' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_OnExistHigherPriorityCapture, Param) == 0x000008, "Member 'MyCharaMenu_Costume_C_OnExistHigherPriorityCapture::Param' has a wrong offset!");

// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnUnexistHigherPriorityCapture
// 0x0010 (0x0010 - 0x0000)
struct MyCharaMenu_Costume_C_OnUnexistHigherPriorityCapture final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_Costume_C_OnUnexistHigherPriorityCapture) == 0x000008, "Wrong alignment on MyCharaMenu_Costume_C_OnUnexistHigherPriorityCapture");
static_assert(sizeof(MyCharaMenu_Costume_C_OnUnexistHigherPriorityCapture) == 0x000010, "Wrong size on MyCharaMenu_Costume_C_OnUnexistHigherPriorityCapture");
static_assert(offsetof(MyCharaMenu_Costume_C_OnUnexistHigherPriorityCapture, Sender) == 0x000000, "Member 'MyCharaMenu_Costume_C_OnUnexistHigherPriorityCapture::Sender' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_OnUnexistHigherPriorityCapture, Param) == 0x000008, "Member 'MyCharaMenu_Costume_C_OnUnexistHigherPriorityCapture::Param' has a wrong offset!");

// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.BndEvt__CostumeVisibilityOnOffSwitch_K2Node_ComponentBoundEvent_0_OnDressVisibilitySwitchClicked__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_Costume_C_BndEvt__CostumeVisibilityOnOffSwitch_K2Node_ComponentBoundEvent_0_OnDressVisibilitySwitchClicked__DelegateSignature final
{
public:
	bool                                          InIsDressVisibilitySwitchOn;                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_Costume_C_BndEvt__CostumeVisibilityOnOffSwitch_K2Node_ComponentBoundEvent_0_OnDressVisibilitySwitchClicked__DelegateSignature) == 0x000001, "Wrong alignment on MyCharaMenu_Costume_C_BndEvt__CostumeVisibilityOnOffSwitch_K2Node_ComponentBoundEvent_0_OnDressVisibilitySwitchClicked__DelegateSignature");
static_assert(sizeof(MyCharaMenu_Costume_C_BndEvt__CostumeVisibilityOnOffSwitch_K2Node_ComponentBoundEvent_0_OnDressVisibilitySwitchClicked__DelegateSignature) == 0x000001, "Wrong size on MyCharaMenu_Costume_C_BndEvt__CostumeVisibilityOnOffSwitch_K2Node_ComponentBoundEvent_0_OnDressVisibilitySwitchClicked__DelegateSignature");
static_assert(offsetof(MyCharaMenu_Costume_C_BndEvt__CostumeVisibilityOnOffSwitch_K2Node_ComponentBoundEvent_0_OnDressVisibilitySwitchClicked__DelegateSignature, InIsDressVisibilitySwitchOn) == 0x000000, "Member 'MyCharaMenu_Costume_C_BndEvt__CostumeVisibilityOnOffSwitch_K2Node_ComponentBoundEvent_0_OnDressVisibilitySwitchClicked__DelegateSignature::InIsDressVisibilitySwitchOn' has a wrong offset!");

// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnSaveEquipInfo_Costume
// 0x0138 (0x0138 - 0x0000)
struct MyCharaMenu_Costume_C_OnSaveEquipInfo_Costume final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_75DB[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBExpiredEquipmentData                InExpiredEquipmentData;                            // 0x0008(0x0130)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(MyCharaMenu_Costume_C_OnSaveEquipInfo_Costume) == 0x000008, "Wrong alignment on MyCharaMenu_Costume_C_OnSaveEquipInfo_Costume");
static_assert(sizeof(MyCharaMenu_Costume_C_OnSaveEquipInfo_Costume) == 0x000138, "Wrong size on MyCharaMenu_Costume_C_OnSaveEquipInfo_Costume");
static_assert(offsetof(MyCharaMenu_Costume_C_OnSaveEquipInfo_Costume, RetCode) == 0x000000, "Member 'MyCharaMenu_Costume_C_OnSaveEquipInfo_Costume::RetCode' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_OnSaveEquipInfo_Costume, InExpiredEquipmentData) == 0x000008, "Member 'MyCharaMenu_Costume_C_OnSaveEquipInfo_Costume::InExpiredEquipmentData' has a wrong offset!");

// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnIconSelected_CostumeCandidateList_����
// 0x0010 (0x0010 - 0x0000)
struct MyCharaMenu_Costume_C_OnIconSelected_CostumeCandidateList_____ final
{
public:
	class FString                                 InItemUniqueId;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_Costume_C_OnIconSelected_CostumeCandidateList_____) == 0x000008, "Wrong alignment on MyCharaMenu_Costume_C_OnIconSelected_CostumeCandidateList_____");
static_assert(sizeof(MyCharaMenu_Costume_C_OnIconSelected_CostumeCandidateList_____) == 0x000010, "Wrong size on MyCharaMenu_Costume_C_OnIconSelected_CostumeCandidateList_____");
static_assert(offsetof(MyCharaMenu_Costume_C_OnIconSelected_CostumeCandidateList_____, InItemUniqueId) == 0x000000, "Member 'MyCharaMenu_Costume_C_OnIconSelected_CostumeCandidateList_____::InItemUniqueId' has a wrong offset!");

// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnOtherCostumeCandidateSelected
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_Costume_C_OnOtherCostumeCandidateSelected final
{
public:
	bool                                          Param_IsDetach;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_Costume_C_OnOtherCostumeCandidateSelected) == 0x000001, "Wrong alignment on MyCharaMenu_Costume_C_OnOtherCostumeCandidateSelected");
static_assert(sizeof(MyCharaMenu_Costume_C_OnOtherCostumeCandidateSelected) == 0x000001, "Wrong size on MyCharaMenu_Costume_C_OnOtherCostumeCandidateSelected");
static_assert(offsetof(MyCharaMenu_Costume_C_OnOtherCostumeCandidateSelected, Param_IsDetach) == 0x000000, "Member 'MyCharaMenu_Costume_C_OnOtherCostumeCandidateSelected::Param_IsDetach' has a wrong offset!");

// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnSaveCostumeEquipDelegate
// 0x0138 (0x0138 - 0x0000)
struct MyCharaMenu_Costume_C_OnSaveCostumeEquipDelegate final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_75DC[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBExpiredEquipmentData                InExpiredEquipmentData;                            // 0x0008(0x0130)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(MyCharaMenu_Costume_C_OnSaveCostumeEquipDelegate) == 0x000008, "Wrong alignment on MyCharaMenu_Costume_C_OnSaveCostumeEquipDelegate");
static_assert(sizeof(MyCharaMenu_Costume_C_OnSaveCostumeEquipDelegate) == 0x000138, "Wrong size on MyCharaMenu_Costume_C_OnSaveCostumeEquipDelegate");
static_assert(offsetof(MyCharaMenu_Costume_C_OnSaveCostumeEquipDelegate, RetCode) == 0x000000, "Member 'MyCharaMenu_Costume_C_OnSaveCostumeEquipDelegate::RetCode' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_OnSaveCostumeEquipDelegate, InExpiredEquipmentData) == 0x000008, "Member 'MyCharaMenu_Costume_C_OnSaveCostumeEquipDelegate::InExpiredEquipmentData' has a wrong offset!");

// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnSaveCostumeMultipleEquipsDelegate
// 0x0138 (0x0138 - 0x0000)
struct MyCharaMenu_Costume_C_OnSaveCostumeMultipleEquipsDelegate final
{
public:
	int32                                         RetCode;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_75DD[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBExpiredEquipmentData                InExpiredEquipmentData;                            // 0x0008(0x0130)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(MyCharaMenu_Costume_C_OnSaveCostumeMultipleEquipsDelegate) == 0x000008, "Wrong alignment on MyCharaMenu_Costume_C_OnSaveCostumeMultipleEquipsDelegate");
static_assert(sizeof(MyCharaMenu_Costume_C_OnSaveCostumeMultipleEquipsDelegate) == 0x000138, "Wrong size on MyCharaMenu_Costume_C_OnSaveCostumeMultipleEquipsDelegate");
static_assert(offsetof(MyCharaMenu_Costume_C_OnSaveCostumeMultipleEquipsDelegate, RetCode) == 0x000000, "Member 'MyCharaMenu_Costume_C_OnSaveCostumeMultipleEquipsDelegate::RetCode' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_OnSaveCostumeMultipleEquipsDelegate, InExpiredEquipmentData) == 0x000008, "Member 'MyCharaMenu_Costume_C_OnSaveCostumeMultipleEquipsDelegate::InExpiredEquipmentData' has a wrong offset!");

// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct MyCharaMenu_Costume_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_Costume_C_OnAnimationFinished) == 0x000008, "Wrong alignment on MyCharaMenu_Costume_C_OnAnimationFinished");
static_assert(sizeof(MyCharaMenu_Costume_C_OnAnimationFinished) == 0x000008, "Wrong size on MyCharaMenu_Costume_C_OnAnimationFinished");
static_assert(offsetof(MyCharaMenu_Costume_C_OnAnimationFinished, Animation) == 0x000000, "Member 'MyCharaMenu_Costume_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_0_OnSelected__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct MyCharaMenu_Costume_C_BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_0_OnSelected__DelegateSignature final
{
public:
	class FString                                 InItemUniqueId;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_Costume_C_BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_0_OnSelected__DelegateSignature) == 0x000008, "Wrong alignment on MyCharaMenu_Costume_C_BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_0_OnSelected__DelegateSignature");
static_assert(sizeof(MyCharaMenu_Costume_C_BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_0_OnSelected__DelegateSignature) == 0x000010, "Wrong size on MyCharaMenu_Costume_C_BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_0_OnSelected__DelegateSignature");
static_assert(offsetof(MyCharaMenu_Costume_C_BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_0_OnSelected__DelegateSignature, InItemUniqueId) == 0x000000, "Member 'MyCharaMenu_Costume_C_BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_0_OnSelected__DelegateSignature::InItemUniqueId' has a wrong offset!");

// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.BndEvt__EquipRingHandSelectDialog_K2Node_ComponentBoundEvent_5_OnSelected__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_Costume_C_BndEvt__EquipRingHandSelectDialog_K2Node_ComponentBoundEvent_5_OnSelected__DelegateSignature final
{
public:
	bool                                          InIsLeftHand;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_Costume_C_BndEvt__EquipRingHandSelectDialog_K2Node_ComponentBoundEvent_5_OnSelected__DelegateSignature) == 0x000001, "Wrong alignment on MyCharaMenu_Costume_C_BndEvt__EquipRingHandSelectDialog_K2Node_ComponentBoundEvent_5_OnSelected__DelegateSignature");
static_assert(sizeof(MyCharaMenu_Costume_C_BndEvt__EquipRingHandSelectDialog_K2Node_ComponentBoundEvent_5_OnSelected__DelegateSignature) == 0x000001, "Wrong size on MyCharaMenu_Costume_C_BndEvt__EquipRingHandSelectDialog_K2Node_ComponentBoundEvent_5_OnSelected__DelegateSignature");
static_assert(offsetof(MyCharaMenu_Costume_C_BndEvt__EquipRingHandSelectDialog_K2Node_ComponentBoundEvent_5_OnSelected__DelegateSignature, InIsLeftHand) == 0x000000, "Member 'MyCharaMenu_Costume_C_BndEvt__EquipRingHandSelectDialog_K2Node_ComponentBoundEvent_5_OnSelected__DelegateSignature::InIsLeftHand' has a wrong offset!");

// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_3_OnOpenEquipRingHandSelectDialog__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct MyCharaMenu_Costume_C_BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_3_OnOpenEquipRingHandSelectDialog__DelegateSignature final
{
public:
	class FString                                 InRingUniqueId;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_Costume_C_BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_3_OnOpenEquipRingHandSelectDialog__DelegateSignature) == 0x000008, "Wrong alignment on MyCharaMenu_Costume_C_BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_3_OnOpenEquipRingHandSelectDialog__DelegateSignature");
static_assert(sizeof(MyCharaMenu_Costume_C_BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_3_OnOpenEquipRingHandSelectDialog__DelegateSignature) == 0x000010, "Wrong size on MyCharaMenu_Costume_C_BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_3_OnOpenEquipRingHandSelectDialog__DelegateSignature");
static_assert(offsetof(MyCharaMenu_Costume_C_BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_3_OnOpenEquipRingHandSelectDialog__DelegateSignature, InRingUniqueId) == 0x000000, "Member 'MyCharaMenu_Costume_C_BndEvt__CostumeChangeMenu_K2Node_ComponentBoundEvent_3_OnOpenEquipRingHandSelectDialog__DelegateSignature::InRingUniqueId' has a wrong offset!");

// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.GetEquipItemCharaCreateInfoFromEquipItemInfo
// 0x00F0 (0x00F0 - 0x0000)
struct MyCharaMenu_Costume_C_GetEquipItemCharaCreateInfoFromEquipItemInfo final
{
public:
	struct FCharaEquipItemInfo                    InEquipItemInfo;                                   // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         InMaterialId;                                      // 0x0028(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             InEquipType;                                       // 0x002C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDetachEquip;                                     // 0x002D(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsValid;                                           // 0x002E(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75DE[0x1];                                     // 0x002F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharaEquipItemCharaCreateInfo         OutEquipItemCharaCreateInfo;                       // 0x0030(0x0028)(Parm, OutParm)
	struct FCharaEquipItemCharaCreateInfo         CallFunc_GetCharaCostumeCharaCreateInfo_InCreateInfo; // 0x0058(0x0028)()
	bool                                          CallFunc_GetCharaCostumeCharaCreateInfo_ReturnValue; // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75DF[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharaEquipNakedPartsName_OutPartsName; // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCharaEquipNakedPartsName_ReturnValue;  // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75E0[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharaEquipItemCharaCreateInfo         K2Node_MakeStruct_CharaEquipItemCharaCreateInfo;   // 0x00A0(0x0028)()
	struct FCharaEquipItemCharaCreateInfo         K2Node_SetFieldsInStruct_StructOut;                // 0x00C8(0x0028)()
};
static_assert(alignof(MyCharaMenu_Costume_C_GetEquipItemCharaCreateInfoFromEquipItemInfo) == 0x000008, "Wrong alignment on MyCharaMenu_Costume_C_GetEquipItemCharaCreateInfoFromEquipItemInfo");
static_assert(sizeof(MyCharaMenu_Costume_C_GetEquipItemCharaCreateInfoFromEquipItemInfo) == 0x0000F0, "Wrong size on MyCharaMenu_Costume_C_GetEquipItemCharaCreateInfoFromEquipItemInfo");
static_assert(offsetof(MyCharaMenu_Costume_C_GetEquipItemCharaCreateInfoFromEquipItemInfo, InEquipItemInfo) == 0x000000, "Member 'MyCharaMenu_Costume_C_GetEquipItemCharaCreateInfoFromEquipItemInfo::InEquipItemInfo' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_GetEquipItemCharaCreateInfoFromEquipItemInfo, InMaterialId) == 0x000028, "Member 'MyCharaMenu_Costume_C_GetEquipItemCharaCreateInfoFromEquipItemInfo::InMaterialId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_GetEquipItemCharaCreateInfoFromEquipItemInfo, InEquipType) == 0x00002C, "Member 'MyCharaMenu_Costume_C_GetEquipItemCharaCreateInfoFromEquipItemInfo::InEquipType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_GetEquipItemCharaCreateInfoFromEquipItemInfo, IsDetachEquip) == 0x00002D, "Member 'MyCharaMenu_Costume_C_GetEquipItemCharaCreateInfoFromEquipItemInfo::IsDetachEquip' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_GetEquipItemCharaCreateInfoFromEquipItemInfo, IsValid) == 0x00002E, "Member 'MyCharaMenu_Costume_C_GetEquipItemCharaCreateInfoFromEquipItemInfo::IsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_GetEquipItemCharaCreateInfoFromEquipItemInfo, OutEquipItemCharaCreateInfo) == 0x000030, "Member 'MyCharaMenu_Costume_C_GetEquipItemCharaCreateInfoFromEquipItemInfo::OutEquipItemCharaCreateInfo' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_GetEquipItemCharaCreateInfoFromEquipItemInfo, CallFunc_GetCharaCostumeCharaCreateInfo_InCreateInfo) == 0x000058, "Member 'MyCharaMenu_Costume_C_GetEquipItemCharaCreateInfoFromEquipItemInfo::CallFunc_GetCharaCostumeCharaCreateInfo_InCreateInfo' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_GetEquipItemCharaCreateInfoFromEquipItemInfo, CallFunc_GetCharaCostumeCharaCreateInfo_ReturnValue) == 0x000080, "Member 'MyCharaMenu_Costume_C_GetEquipItemCharaCreateInfoFromEquipItemInfo::CallFunc_GetCharaCostumeCharaCreateInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_GetEquipItemCharaCreateInfoFromEquipItemInfo, CallFunc_GetCharaEquipNakedPartsName_OutPartsName) == 0x000088, "Member 'MyCharaMenu_Costume_C_GetEquipItemCharaCreateInfoFromEquipItemInfo::CallFunc_GetCharaEquipNakedPartsName_OutPartsName' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_GetEquipItemCharaCreateInfoFromEquipItemInfo, CallFunc_GetCharaEquipNakedPartsName_ReturnValue) == 0x000098, "Member 'MyCharaMenu_Costume_C_GetEquipItemCharaCreateInfoFromEquipItemInfo::CallFunc_GetCharaEquipNakedPartsName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_GetEquipItemCharaCreateInfoFromEquipItemInfo, K2Node_MakeStruct_CharaEquipItemCharaCreateInfo) == 0x0000A0, "Member 'MyCharaMenu_Costume_C_GetEquipItemCharaCreateInfoFromEquipItemInfo::K2Node_MakeStruct_CharaEquipItemCharaCreateInfo' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_GetEquipItemCharaCreateInfoFromEquipItemInfo, K2Node_SetFieldsInStruct_StructOut) == 0x0000C8, "Member 'MyCharaMenu_Costume_C_GetEquipItemCharaCreateInfoFromEquipItemInfo::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");

// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.SetAvatarCostumePartsLoadingFlag
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_Costume_C_SetAvatarCostumePartsLoadingFlag final
{
public:
	bool                                          InIsLoading;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_Costume_C_SetAvatarCostumePartsLoadingFlag) == 0x000001, "Wrong alignment on MyCharaMenu_Costume_C_SetAvatarCostumePartsLoadingFlag");
static_assert(sizeof(MyCharaMenu_Costume_C_SetAvatarCostumePartsLoadingFlag) == 0x000001, "Wrong size on MyCharaMenu_Costume_C_SetAvatarCostumePartsLoadingFlag");
static_assert(offsetof(MyCharaMenu_Costume_C_SetAvatarCostumePartsLoadingFlag, InIsLoading) == 0x000000, "Member 'MyCharaMenu_Costume_C_SetAvatarCostumePartsLoadingFlag::InIsLoading' has a wrong offset!");

// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.GetAvatarCostumePartsLoadingFlag
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_Costume_C_GetAvatarCostumePartsLoadingFlag final
{
public:
	bool                                          OutIsAvatarCostumePartsLoading;                    // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_Costume_C_GetAvatarCostumePartsLoadingFlag) == 0x000001, "Wrong alignment on MyCharaMenu_Costume_C_GetAvatarCostumePartsLoadingFlag");
static_assert(sizeof(MyCharaMenu_Costume_C_GetAvatarCostumePartsLoadingFlag) == 0x000001, "Wrong size on MyCharaMenu_Costume_C_GetAvatarCostumePartsLoadingFlag");
static_assert(offsetof(MyCharaMenu_Costume_C_GetAvatarCostumePartsLoadingFlag, OutIsAvatarCostumePartsLoading) == 0x000000, "Member 'MyCharaMenu_Costume_C_GetAvatarCostumePartsLoadingFlag::OutIsAvatarCostumePartsLoading' has a wrong offset!");

// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.SetUIBlockerVisibility
// 0x0005 (0x0005 - 0x0000)
struct MyCharaMenu_Costume_C_SetUIBlockerVisibility final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_Costume_C_SetUIBlockerVisibility) == 0x000001, "Wrong alignment on MyCharaMenu_Costume_C_SetUIBlockerVisibility");
static_assert(sizeof(MyCharaMenu_Costume_C_SetUIBlockerVisibility) == 0x000005, "Wrong size on MyCharaMenu_Costume_C_SetUIBlockerVisibility");
static_assert(offsetof(MyCharaMenu_Costume_C_SetUIBlockerVisibility, InIsVisible) == 0x000000, "Member 'MyCharaMenu_Costume_C_SetUIBlockerVisibility::InIsVisible' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_SetUIBlockerVisibility, Temp_bool_Variable) == 0x000001, "Member 'MyCharaMenu_Costume_C_SetUIBlockerVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_SetUIBlockerVisibility, Temp_byte_Variable) == 0x000002, "Member 'MyCharaMenu_Costume_C_SetUIBlockerVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_SetUIBlockerVisibility, Temp_byte_Variable_1) == 0x000003, "Member 'MyCharaMenu_Costume_C_SetUIBlockerVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_SetUIBlockerVisibility, K2Node_Select_Default) == 0x000004, "Member 'MyCharaMenu_Costume_C_SetUIBlockerVisibility::K2Node_Select_Default' has a wrong offset!");

// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ChangeCostumeFunc
// 0x0510 (0x0510 - 0x0000)
struct MyCharaMenu_Costume_C_ChangeCostumeFunc final
{
public:
	ECharaPartsLocation                           WorkLocation;                                      // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_75E1[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         FindIndex;                                         // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             WorkEquipType;                                     // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSelectedCostumeCompositeWear;                    // 0x0009(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75E2[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ECharaPartsLocation>                   NewCostumeOccupiedPartsLocations;                  // 0x0010(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetEquipItemCharaCreateInfoFromEquipItemInfo_IsValid; // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75E3[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharaEquipItemCharaCreateInfo         CallFunc_GetEquipItemCharaCreateInfoFromEquipItemInfo_OutEquipItemCharaCreateInfo; // 0x0028(0x0028)()
	ESBCharaEquipType                             CallFunc_LocationToEquipType_CharaEquipType;       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindConflictingCompositeWearbyEquipInfo_IsConflict; // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharaEquipType                             CallFunc_FindConflictingCompositeWearbyEquipInfo_ConflictEquipType; // 0x0053(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetEquipItemCharaCreateInfoFromEquipItemInfo_IsValid_1; // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75E4[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharaEquipItemCharaCreateInfo         CallFunc_GetEquipItemCharaCreateInfoFromEquipItemInfo_OutEquipItemCharaCreateInfo_1; // 0x0058(0x0028)()
	bool                                          CallFunc_FindConflictingCompositeWearbyEquipInfo_IsConflict_1; // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharaEquipType                             CallFunc_FindConflictingCompositeWearbyEquipInfo_ConflictEquipType_1; // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_75E5[0x2];                                     // 0x0082(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_75E6[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0090(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue_1;                    // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75E7[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetEquipItemCharaCreateInfoFromEquipItemInfo_IsValid_2; // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75E8[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharaEquipItemCharaCreateInfo         CallFunc_GetEquipItemCharaCreateInfoFromEquipItemInfo_OutEquipItemCharaCreateInfo_2; // 0x00D0(0x0028)()
	TArray<class AActor*>                         K2Node_MakeArray_Array_1;                          // 0x00F8(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item_1;                         // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue_2;                    // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75E9[0x7];                                     // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_1;        // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue_1;             // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array_2;                          // 0x0130(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item_2;                         // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_2;        // 0x0148(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue_2;             // 0x0150(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75EA[0x7];                                     // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x0170(0x0118)(ConstParm)
	struct FCharaEquipItemInfo                    K2Node_MakeStruct_CharaEquipItemInfo;              // 0x0288(0x0028)()
	bool                                          CallFunc_GetEquipItemCharaCreateInfoFromEquipItemInfo_IsValid_3; // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75EB[0x7];                                     // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharaEquipItemCharaCreateInfo         CallFunc_GetEquipItemCharaCreateInfoFromEquipItemInfo_OutEquipItemCharaCreateInfo_3; // 0x02B8(0x0028)()
	class FString                                 CallFunc_GetPreviewCostumeUniqueId_UniqueId;       // 0x02E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x02F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharaEquipType                             Temp_byte_Variable;                                // 0x02F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCompositeWearByCostumeId_bIsValid;      // 0x02F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCompositeWearByCostumeId_IsCompositeWear; // 0x02F3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75EC[0x4];                                     // 0x02F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ECharaPartsLocation>                   CallFunc_IsCompositeWearByCostumeId_OccupiedPartsLocations; // 0x02F8(0x0010)(ReferenceParm)
	struct FSBMasterCostume                       CallFunc_IsCompositeWearByCostumeId_MasterCostume; // 0x0308(0x0088)()
	ESBCharaEquipType                             Temp_byte_Variable_1;                              // 0x0390(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_75ED[0x7];                                     // 0x0391(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharaEquipItemInfo                    K2Node_MakeStruct_CharaEquipItemInfo_1;            // 0x0398(0x0028)()
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x03C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x03C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75EE[0x3];                                     // 0x03C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharaEquipItemInfo                    K2Node_MakeStruct_CharaEquipItemInfo_2;            // 0x03C8(0x0028)()
	ECharaPartsLocation                           CallFunc_Array_Get_Item_3;                         // 0x03F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_75EF[0x3];                                     // 0x03F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x03F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x03F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75F0[0x7];                                     // 0x03F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharaEquipItemInfo                    CallFunc_GetEquipItemInfo_ReturnValue;             // 0x0400(0x0028)(ConstParm)
	bool                                          Temp_bool_Variable;                                // 0x0428(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75F1[0x7];                                     // 0x0429(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharaEquipItemInfo                    CallFunc_GetEquipItemInfo_ReturnValue_1;           // 0x0430(0x0028)(ConstParm)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0458(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0459(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x045A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75F2[0x5];                                     // 0x045B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharaEquipItemInfo                    K2Node_MakeStruct_CharaEquipItemInfo_3;            // 0x0460(0x0028)()
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0488(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0489(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x048A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue_3;                    // 0x048B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharaEquipType                             K2Node_Select_Default;                             // 0x048C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetEquipItemCharaCreateInfoFromEquipItemInfo_IsValid_4; // 0x048D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75F3[0x2];                                     // 0x048E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharaEquipItemCharaCreateInfo         CallFunc_GetEquipItemCharaCreateInfoFromEquipItemInfo_OutEquipItemCharaCreateInfo_4; // 0x0490(0x0028)()
	struct FCharaEquipItemInfo                    K2Node_MakeStruct_CharaEquipItemInfo_4;            // 0x04B8(0x0028)()
	TArray<class AActor*>                         K2Node_MakeArray_Array_3;                          // 0x04E0(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item_4;                         // 0x04F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_3;        // 0x04F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue_3;             // 0x0500(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_Costume_C_ChangeCostumeFunc) == 0x000008, "Wrong alignment on MyCharaMenu_Costume_C_ChangeCostumeFunc");
static_assert(sizeof(MyCharaMenu_Costume_C_ChangeCostumeFunc) == 0x000510, "Wrong size on MyCharaMenu_Costume_C_ChangeCostumeFunc");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, WorkLocation) == 0x000000, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::WorkLocation' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, FindIndex) == 0x000004, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::FindIndex' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, WorkEquipType) == 0x000008, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::WorkEquipType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, IsSelectedCostumeCompositeWear) == 0x000009, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::IsSelectedCostumeCompositeWear' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, NewCostumeOccupiedPartsLocations) == 0x000010, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::NewCostumeOccupiedPartsLocations' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, Temp_int_Array_Index_Variable) == 0x000020, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_GetEquipItemCharaCreateInfoFromEquipItemInfo_IsValid) == 0x000024, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_GetEquipItemCharaCreateInfoFromEquipItemInfo_IsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_GetEquipItemCharaCreateInfoFromEquipItemInfo_OutEquipItemCharaCreateInfo) == 0x000028, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_GetEquipItemCharaCreateInfoFromEquipItemInfo_OutEquipItemCharaCreateInfo' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_LocationToEquipType_CharaEquipType) == 0x000050, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_LocationToEquipType_CharaEquipType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_IsEmpty_ReturnValue) == 0x000051, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_FindConflictingCompositeWearbyEquipInfo_IsConflict) == 0x000052, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_FindConflictingCompositeWearbyEquipInfo_IsConflict' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_FindConflictingCompositeWearbyEquipInfo_ConflictEquipType) == 0x000053, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_FindConflictingCompositeWearbyEquipInfo_ConflictEquipType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_GetEquipItemCharaCreateInfoFromEquipItemInfo_IsValid_1) == 0x000054, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_GetEquipItemCharaCreateInfoFromEquipItemInfo_IsValid_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_GetEquipItemCharaCreateInfoFromEquipItemInfo_OutEquipItemCharaCreateInfo_1) == 0x000058, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_GetEquipItemCharaCreateInfoFromEquipItemInfo_OutEquipItemCharaCreateInfo_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_FindConflictingCompositeWearbyEquipInfo_IsConflict_1) == 0x000080, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_FindConflictingCompositeWearbyEquipInfo_IsConflict_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_FindConflictingCompositeWearbyEquipInfo_ConflictEquipType_1) == 0x000081, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_FindConflictingCompositeWearbyEquipInfo_ConflictEquipType_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, Temp_int_Loop_Counter_Variable) == 0x000084, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_Add_IntInt_ReturnValue) == 0x000088, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, K2Node_MakeArray_Array) == 0x000090, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_Array_Get_Item) == 0x0000A0, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_IsEmpty_ReturnValue_1) == 0x0000A8, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_IsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_K2_GetRootComponent_ReturnValue) == 0x0000B0, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_GetDisplayName_ReturnValue) == 0x0000B8, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_GetEquipItemCharaCreateInfoFromEquipItemInfo_IsValid_2) == 0x0000C8, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_GetEquipItemCharaCreateInfoFromEquipItemInfo_IsValid_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_GetEquipItemCharaCreateInfoFromEquipItemInfo_OutEquipItemCharaCreateInfo_2) == 0x0000D0, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_GetEquipItemCharaCreateInfoFromEquipItemInfo_OutEquipItemCharaCreateInfo_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, K2Node_MakeArray_Array_1) == 0x0000F8, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_Array_Get_Item_1) == 0x000108, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_IsEmpty_ReturnValue_2) == 0x000110, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_IsEmpty_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_K2_GetRootComponent_ReturnValue_1) == 0x000118, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_K2_GetRootComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_GetDisplayName_ReturnValue_1) == 0x000120, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_GetDisplayName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, K2Node_MakeArray_Array_2) == 0x000130, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_Array_Get_Item_2) == 0x000140, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_K2_GetRootComponent_ReturnValue_2) == 0x000148, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_K2_GetRootComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_GetDisplayName_ReturnValue_2) == 0x000150, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_GetDisplayName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_GetEquipmentBag_ReturnValue) == 0x000160, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x000168, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x000170, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, K2Node_MakeStruct_CharaEquipItemInfo) == 0x000288, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::K2Node_MakeStruct_CharaEquipItemInfo' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_GetEquipItemCharaCreateInfoFromEquipItemInfo_IsValid_3) == 0x0002B0, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_GetEquipItemCharaCreateInfoFromEquipItemInfo_IsValid_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_GetEquipItemCharaCreateInfoFromEquipItemInfo_OutEquipItemCharaCreateInfo_3) == 0x0002B8, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_GetEquipItemCharaCreateInfoFromEquipItemInfo_OutEquipItemCharaCreateInfo_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_GetPreviewCostumeUniqueId_UniqueId) == 0x0002E0, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_GetPreviewCostumeUniqueId_UniqueId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_NotEqual_StrStr_ReturnValue) == 0x0002F0, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, Temp_byte_Variable) == 0x0002F1, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_IsCompositeWearByCostumeId_bIsValid) == 0x0002F2, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_IsCompositeWearByCostumeId_bIsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_IsCompositeWearByCostumeId_IsCompositeWear) == 0x0002F3, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_IsCompositeWearByCostumeId_IsCompositeWear' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_IsCompositeWearByCostumeId_OccupiedPartsLocations) == 0x0002F8, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_IsCompositeWearByCostumeId_OccupiedPartsLocations' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_IsCompositeWearByCostumeId_MasterCostume) == 0x000308, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_IsCompositeWearByCostumeId_MasterCostume' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, Temp_byte_Variable_1) == 0x000390, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, K2Node_MakeStruct_CharaEquipItemInfo_1) == 0x000398, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::K2Node_MakeStruct_CharaEquipItemInfo_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_Array_Find_ReturnValue) == 0x0003C0, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0003C4, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, K2Node_MakeStruct_CharaEquipItemInfo_2) == 0x0003C8, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::K2Node_MakeStruct_CharaEquipItemInfo_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_Array_Get_Item_3) == 0x0003F0, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_Array_Length_ReturnValue) == 0x0003F4, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_Less_IntInt_ReturnValue) == 0x0003F8, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_GetEquipItemInfo_ReturnValue) == 0x000400, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_GetEquipItemInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, Temp_bool_Variable) == 0x000428, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_GetEquipItemInfo_ReturnValue_1) == 0x000430, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_GetEquipItemInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000458, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_BooleanAND_ReturnValue) == 0x000459, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00045A, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, K2Node_MakeStruct_CharaEquipItemInfo_3) == 0x000460, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::K2Node_MakeStruct_CharaEquipItemInfo_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_BooleanAND_ReturnValue_1) == 0x000488, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_BooleanOR_ReturnValue) == 0x000489, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x00048A, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_IsEmpty_ReturnValue_3) == 0x00048B, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_IsEmpty_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, K2Node_Select_Default) == 0x00048C, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_GetEquipItemCharaCreateInfoFromEquipItemInfo_IsValid_4) == 0x00048D, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_GetEquipItemCharaCreateInfoFromEquipItemInfo_IsValid_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_GetEquipItemCharaCreateInfoFromEquipItemInfo_OutEquipItemCharaCreateInfo_4) == 0x000490, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_GetEquipItemCharaCreateInfoFromEquipItemInfo_OutEquipItemCharaCreateInfo_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, K2Node_MakeStruct_CharaEquipItemInfo_4) == 0x0004B8, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::K2Node_MakeStruct_CharaEquipItemInfo_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, K2Node_MakeArray_Array_3) == 0x0004E0, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_Array_Get_Item_4) == 0x0004F0, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_K2_GetRootComponent_ReturnValue_3) == 0x0004F8, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_K2_GetRootComponent_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeCostumeFunc, CallFunc_GetDisplayName_ReturnValue_3) == 0x000500, "Member 'MyCharaMenu_Costume_C_ChangeCostumeFunc::CallFunc_GetDisplayName_ReturnValue_3' has a wrong offset!");

// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.AddNewEquipInfo
// 0x0060 (0x0060 - 0x0000)
struct MyCharaMenu_Costume_C_AddNewEquipInfo final
{
public:
	struct FCharaEquipItemInfo                    NewCostumeEquipItemInfo;                           // 0x0000(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FCharaEquipItemCharaCreateInfo         NewCostumeEquipCharaCreateInfo;                    // 0x0028(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ESBCharaEquipType                             CostumeEquipType;                                  // 0x0050(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_75F4[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_Costume_C_AddNewEquipInfo) == 0x000008, "Wrong alignment on MyCharaMenu_Costume_C_AddNewEquipInfo");
static_assert(sizeof(MyCharaMenu_Costume_C_AddNewEquipInfo) == 0x000060, "Wrong size on MyCharaMenu_Costume_C_AddNewEquipInfo");
static_assert(offsetof(MyCharaMenu_Costume_C_AddNewEquipInfo, NewCostumeEquipItemInfo) == 0x000000, "Member 'MyCharaMenu_Costume_C_AddNewEquipInfo::NewCostumeEquipItemInfo' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_AddNewEquipInfo, NewCostumeEquipCharaCreateInfo) == 0x000028, "Member 'MyCharaMenu_Costume_C_AddNewEquipInfo::NewCostumeEquipCharaCreateInfo' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_AddNewEquipInfo, CostumeEquipType) == 0x000050, "Member 'MyCharaMenu_Costume_C_AddNewEquipInfo::CostumeEquipType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_AddNewEquipInfo, CallFunc_Array_Add_ReturnValue) == 0x000054, "Member 'MyCharaMenu_Costume_C_AddNewEquipInfo::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_AddNewEquipInfo, CallFunc_Array_Add_ReturnValue_1) == 0x000058, "Member 'MyCharaMenu_Costume_C_AddNewEquipInfo::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_AddNewEquipInfo, CallFunc_Array_Add_ReturnValue_2) == 0x00005C, "Member 'MyCharaMenu_Costume_C_AddNewEquipInfo::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");

// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.InitDefaultCostumeData
// 0x0088 (0x0088 - 0x0000)
struct MyCharaMenu_Costume_C_InitDefaultCostumeData final
{
public:
	struct FCharaEquipItemInfo                    ItemInfo;                                          // 0x0000(0x0028)(Edit, BlueprintVisible)
	int32                                         LoopEnd;                                           // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_75F5[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_75F6[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerCharacter*                     CallFunc_GetSBPlayerCharacter_ReturnValue;         // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x004E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue_1;              // 0x004F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_75F7[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharaEquipItemInfo                    CallFunc_GetEquipItemInfo_ReturnValue;             // 0x0058(0x0028)(ConstParm)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75F8[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_Costume_C_InitDefaultCostumeData) == 0x000008, "Wrong alignment on MyCharaMenu_Costume_C_InitDefaultCostumeData");
static_assert(sizeof(MyCharaMenu_Costume_C_InitDefaultCostumeData) == 0x000088, "Wrong size on MyCharaMenu_Costume_C_InitDefaultCostumeData");
static_assert(offsetof(MyCharaMenu_Costume_C_InitDefaultCostumeData, ItemInfo) == 0x000000, "Member 'MyCharaMenu_Costume_C_InitDefaultCostumeData::ItemInfo' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_InitDefaultCostumeData, LoopEnd) == 0x000028, "Member 'MyCharaMenu_Costume_C_InitDefaultCostumeData::LoopEnd' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_InitDefaultCostumeData, CallFunc_MakeLiteralByte_ReturnValue) == 0x00002C, "Member 'MyCharaMenu_Costume_C_InitDefaultCostumeData::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_InitDefaultCostumeData, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000030, "Member 'MyCharaMenu_Costume_C_InitDefaultCostumeData::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_InitDefaultCostumeData, CallFunc_GetSBPlayerCharacter_ReturnValue) == 0x000038, "Member 'MyCharaMenu_Costume_C_InitDefaultCostumeData::CallFunc_GetSBPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_InitDefaultCostumeData, CallFunc_Subtract_IntInt_ReturnValue) == 0x000040, "Member 'MyCharaMenu_Costume_C_InitDefaultCostumeData::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_InitDefaultCostumeData, CallFunc_Array_Add_ReturnValue) == 0x000044, "Member 'MyCharaMenu_Costume_C_InitDefaultCostumeData::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_InitDefaultCostumeData, Temp_int_Variable) == 0x000048, "Member 'MyCharaMenu_Costume_C_InitDefaultCostumeData::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_InitDefaultCostumeData, CallFunc_Conv_IntToByte_ReturnValue) == 0x00004C, "Member 'MyCharaMenu_Costume_C_InitDefaultCostumeData::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_InitDefaultCostumeData, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x00004D, "Member 'MyCharaMenu_Costume_C_InitDefaultCostumeData::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_InitDefaultCostumeData, CallFunc_GetValidValue_ReturnValue) == 0x00004E, "Member 'MyCharaMenu_Costume_C_InitDefaultCostumeData::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_InitDefaultCostumeData, CallFunc_GetValidValue_ReturnValue_1) == 0x00004F, "Member 'MyCharaMenu_Costume_C_InitDefaultCostumeData::CallFunc_GetValidValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_InitDefaultCostumeData, CallFunc_Array_Add_ReturnValue_1) == 0x000050, "Member 'MyCharaMenu_Costume_C_InitDefaultCostumeData::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_InitDefaultCostumeData, CallFunc_GetEquipItemInfo_ReturnValue) == 0x000058, "Member 'MyCharaMenu_Costume_C_InitDefaultCostumeData::CallFunc_GetEquipItemInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_InitDefaultCostumeData, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000080, "Member 'MyCharaMenu_Costume_C_InitDefaultCostumeData::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_InitDefaultCostumeData, CallFunc_Add_IntInt_ReturnValue) == 0x000084, "Member 'MyCharaMenu_Costume_C_InitDefaultCostumeData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.AddPreviewCostumeItemMulti
// 0x0058 (0x0058 - 0x0000)
struct MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti final
{
public:
	bool                                          ChangeButtonVisible;                               // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75F9[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CheckIndex;                                        // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMasterDataManager*                   MasterDataManager;                                 // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             TempType;                                          // 0x0014(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_75FA[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LoopEnd;                                           // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75FB[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75FC[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75FD[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue_1;                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75FE[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti) == 0x000008, "Wrong alignment on MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti");
static_assert(sizeof(MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti) == 0x000058, "Wrong size on MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti");
static_assert(offsetof(MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti, ChangeButtonVisible) == 0x000000, "Member 'MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti::ChangeButtonVisible' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti, CheckIndex) == 0x000004, "Member 'MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti::CheckIndex' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti, MasterDataManager) == 0x000008, "Member 'MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti::MasterDataManager' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti, Param_Index) == 0x000010, "Member 'MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti::Param_Index' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti, TempType) == 0x000014, "Member 'MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti::TempType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti, LoopEnd) == 0x000018, "Member 'MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti::LoopEnd' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti, Temp_int_Variable) == 0x00001C, "Member 'MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti, CallFunc_Array_Length_ReturnValue) == 0x000024, "Member 'MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti, CallFunc_Greater_IntInt_ReturnValue) == 0x000028, "Member 'MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000029, "Member 'MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti, CallFunc_Array_Length_ReturnValue_1) == 0x00002C, "Member 'MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000030, "Member 'MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000031, "Member 'MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti, CallFunc_Array_Find_ReturnValue) == 0x000034, "Member 'MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti, CallFunc_Array_Add_ReturnValue) == 0x000038, "Member 'MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00003C, "Member 'MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti, CallFunc_Array_Add_ReturnValue_1) == 0x000040, "Member 'MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti, CallFunc_Array_Find_ReturnValue_1) == 0x000044, "Member 'MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti::CallFunc_Array_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x000048, "Member 'MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti, CallFunc_Array_LastIndex_ReturnValue) == 0x00004C, "Member 'MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti, CallFunc_Array_Add_ReturnValue_2) == 0x000050, "Member 'MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000054, "Member 'MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x000055, "Member 'MyCharaMenu_Costume_C_AddPreviewCostumeItemMulti::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");

// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.AddPreviewCostumeItem
// 0x0098 (0x0098 - 0x0000)
struct MyCharaMenu_Costume_C_AddPreviewCostumeItem final
{
public:
	struct FCharaEquipItemInfo                    NewCostumeEquipItemInfo;                           // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ESBCharaEquipType                             CostumeEquipType;                                  // 0x0028(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_75FF[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharaEquipItemCharaCreateInfo         NewCostumeEquipCharaCreateInfo;                    // 0x0030(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          IsPlayAnimation;                                   // 0x0058(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7600[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CheckIndex;                                        // 0x005C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0060(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             TempType;                                          // 0x0064(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7601[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LoopEnd;                                           // 0x0068(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7602[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x007B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7603[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue_1;                 // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_Costume_C_AddPreviewCostumeItem) == 0x000008, "Wrong alignment on MyCharaMenu_Costume_C_AddPreviewCostumeItem");
static_assert(sizeof(MyCharaMenu_Costume_C_AddPreviewCostumeItem) == 0x000098, "Wrong size on MyCharaMenu_Costume_C_AddPreviewCostumeItem");
static_assert(offsetof(MyCharaMenu_Costume_C_AddPreviewCostumeItem, NewCostumeEquipItemInfo) == 0x000000, "Member 'MyCharaMenu_Costume_C_AddPreviewCostumeItem::NewCostumeEquipItemInfo' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_AddPreviewCostumeItem, CostumeEquipType) == 0x000028, "Member 'MyCharaMenu_Costume_C_AddPreviewCostumeItem::CostumeEquipType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_AddPreviewCostumeItem, NewCostumeEquipCharaCreateInfo) == 0x000030, "Member 'MyCharaMenu_Costume_C_AddPreviewCostumeItem::NewCostumeEquipCharaCreateInfo' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_AddPreviewCostumeItem, IsPlayAnimation) == 0x000058, "Member 'MyCharaMenu_Costume_C_AddPreviewCostumeItem::IsPlayAnimation' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_AddPreviewCostumeItem, CheckIndex) == 0x00005C, "Member 'MyCharaMenu_Costume_C_AddPreviewCostumeItem::CheckIndex' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_AddPreviewCostumeItem, Param_Index) == 0x000060, "Member 'MyCharaMenu_Costume_C_AddPreviewCostumeItem::Param_Index' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_AddPreviewCostumeItem, TempType) == 0x000064, "Member 'MyCharaMenu_Costume_C_AddPreviewCostumeItem::TempType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_AddPreviewCostumeItem, LoopEnd) == 0x000068, "Member 'MyCharaMenu_Costume_C_AddPreviewCostumeItem::LoopEnd' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_AddPreviewCostumeItem, CallFunc_Array_Length_ReturnValue) == 0x00006C, "Member 'MyCharaMenu_Costume_C_AddPreviewCostumeItem::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_AddPreviewCostumeItem, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000070, "Member 'MyCharaMenu_Costume_C_AddPreviewCostumeItem::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_AddPreviewCostumeItem, CallFunc_Array_Length_ReturnValue_1) == 0x000074, "Member 'MyCharaMenu_Costume_C_AddPreviewCostumeItem::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_AddPreviewCostumeItem, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000078, "Member 'MyCharaMenu_Costume_C_AddPreviewCostumeItem::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_AddPreviewCostumeItem, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000079, "Member 'MyCharaMenu_Costume_C_AddPreviewCostumeItem::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_AddPreviewCostumeItem, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x00007A, "Member 'MyCharaMenu_Costume_C_AddPreviewCostumeItem::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_AddPreviewCostumeItem, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x00007B, "Member 'MyCharaMenu_Costume_C_AddPreviewCostumeItem::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_AddPreviewCostumeItem, CallFunc_Array_Find_ReturnValue) == 0x00007C, "Member 'MyCharaMenu_Costume_C_AddPreviewCostumeItem::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_AddPreviewCostumeItem, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x000080, "Member 'MyCharaMenu_Costume_C_AddPreviewCostumeItem::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_AddPreviewCostumeItem, CallFunc_Array_Add_ReturnValue) == 0x000084, "Member 'MyCharaMenu_Costume_C_AddPreviewCostumeItem::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_AddPreviewCostumeItem, CallFunc_Array_Add_ReturnValue_1) == 0x000088, "Member 'MyCharaMenu_Costume_C_AddPreviewCostumeItem::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_AddPreviewCostumeItem, CallFunc_Array_Add_ReturnValue_2) == 0x00008C, "Member 'MyCharaMenu_Costume_C_AddPreviewCostumeItem::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_AddPreviewCostumeItem, CallFunc_Array_Find_ReturnValue_1) == 0x000090, "Member 'MyCharaMenu_Costume_C_AddPreviewCostumeItem::CallFunc_Array_Find_ReturnValue_1' has a wrong offset!");

// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.CheckPreviewUnusedItem
// 0x02C8 (0x02C8 - 0x0000)
struct MyCharaMenu_Costume_C_CheckPreviewUnusedItem final
{
public:
	bool                                          Unused;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          RetFlag;                                           // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7604[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   MasterDataManager;                                 // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           OwnItem;                                           // 0x0010(0x0118)(Edit, BlueprintVisible)
	class USBOwnItemListContainer*                EquipmentBag;                                      // 0x0128(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7605[0x3];                                     // 0x0131(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7606[0x3];                                     // 0x0139(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7607[0x3];                                     // 0x0141(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBRewardItemType                             CallFunc_ItemTypeToRewardItemType_Out_RewardItemType; // 0x014A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEquipmentItem_ReturnValue;              // 0x014B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x014C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_GetBPPtExchangeMasterByItemId_IsExists; // 0x014D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7608[0x2];                                     // 0x014E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBBPPtExchangeMasterData              CallFunc_BP_GetBPPtExchangeMasterByItemId_ReturnValue; // 0x0150(0x0018)(NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x016A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x016B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7609[0x4];                                     // 0x016C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharaEquipItemInfo                    CallFunc_Array_Get_Item;                           // 0x0178(0x0028)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x01A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x01A6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_760A[0x1];                                     // 0x01A7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x01A8(0x0118)(ConstParm)
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x02C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_Costume_C_CheckPreviewUnusedItem) == 0x000008, "Wrong alignment on MyCharaMenu_Costume_C_CheckPreviewUnusedItem");
static_assert(sizeof(MyCharaMenu_Costume_C_CheckPreviewUnusedItem) == 0x0002C8, "Wrong size on MyCharaMenu_Costume_C_CheckPreviewUnusedItem");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckPreviewUnusedItem, Unused) == 0x000000, "Member 'MyCharaMenu_Costume_C_CheckPreviewUnusedItem::Unused' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckPreviewUnusedItem, RetFlag) == 0x000001, "Member 'MyCharaMenu_Costume_C_CheckPreviewUnusedItem::RetFlag' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckPreviewUnusedItem, MasterDataManager) == 0x000008, "Member 'MyCharaMenu_Costume_C_CheckPreviewUnusedItem::MasterDataManager' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckPreviewUnusedItem, OwnItem) == 0x000010, "Member 'MyCharaMenu_Costume_C_CheckPreviewUnusedItem::OwnItem' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckPreviewUnusedItem, EquipmentBag) == 0x000128, "Member 'MyCharaMenu_Costume_C_CheckPreviewUnusedItem::EquipmentBag' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckPreviewUnusedItem, Temp_bool_True_if_break_was_hit_Variable) == 0x000130, "Member 'MyCharaMenu_Costume_C_CheckPreviewUnusedItem::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckPreviewUnusedItem, Temp_int_Array_Index_Variable) == 0x000134, "Member 'MyCharaMenu_Costume_C_CheckPreviewUnusedItem::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckPreviewUnusedItem, CallFunc_Not_PreBool_ReturnValue) == 0x000138, "Member 'MyCharaMenu_Costume_C_CheckPreviewUnusedItem::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckPreviewUnusedItem, Temp_int_Loop_Counter_Variable) == 0x00013C, "Member 'MyCharaMenu_Costume_C_CheckPreviewUnusedItem::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckPreviewUnusedItem, CallFunc_IsValid_ReturnValue) == 0x000140, "Member 'MyCharaMenu_Costume_C_CheckPreviewUnusedItem::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckPreviewUnusedItem, CallFunc_Add_IntInt_ReturnValue) == 0x000144, "Member 'MyCharaMenu_Costume_C_CheckPreviewUnusedItem::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckPreviewUnusedItem, CallFunc_Not_PreBool_ReturnValue_1) == 0x000148, "Member 'MyCharaMenu_Costume_C_CheckPreviewUnusedItem::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckPreviewUnusedItem, CallFunc_Not_PreBool_ReturnValue_2) == 0x000149, "Member 'MyCharaMenu_Costume_C_CheckPreviewUnusedItem::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckPreviewUnusedItem, CallFunc_ItemTypeToRewardItemType_Out_RewardItemType) == 0x00014A, "Member 'MyCharaMenu_Costume_C_CheckPreviewUnusedItem::CallFunc_ItemTypeToRewardItemType_Out_RewardItemType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckPreviewUnusedItem, CallFunc_IsEquipmentItem_ReturnValue) == 0x00014B, "Member 'MyCharaMenu_Costume_C_CheckPreviewUnusedItem::CallFunc_IsEquipmentItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckPreviewUnusedItem, CallFunc_Not_PreBool_ReturnValue_3) == 0x00014C, "Member 'MyCharaMenu_Costume_C_CheckPreviewUnusedItem::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckPreviewUnusedItem, CallFunc_BP_GetBPPtExchangeMasterByItemId_IsExists) == 0x00014D, "Member 'MyCharaMenu_Costume_C_CheckPreviewUnusedItem::CallFunc_BP_GetBPPtExchangeMasterByItemId_IsExists' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckPreviewUnusedItem, CallFunc_BP_GetBPPtExchangeMasterByItemId_ReturnValue) == 0x000150, "Member 'MyCharaMenu_Costume_C_CheckPreviewUnusedItem::CallFunc_BP_GetBPPtExchangeMasterByItemId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckPreviewUnusedItem, CallFunc_BooleanAND_ReturnValue) == 0x000168, "Member 'MyCharaMenu_Costume_C_CheckPreviewUnusedItem::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckPreviewUnusedItem, CallFunc_IsValid_ReturnValue_1) == 0x000169, "Member 'MyCharaMenu_Costume_C_CheckPreviewUnusedItem::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckPreviewUnusedItem, CallFunc_BooleanAND_ReturnValue_1) == 0x00016A, "Member 'MyCharaMenu_Costume_C_CheckPreviewUnusedItem::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckPreviewUnusedItem, CallFunc_GetMasterDataManager_IsValid) == 0x00016B, "Member 'MyCharaMenu_Costume_C_CheckPreviewUnusedItem::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckPreviewUnusedItem, CallFunc_GetMasterDataManager_ReturnValue) == 0x000170, "Member 'MyCharaMenu_Costume_C_CheckPreviewUnusedItem::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckPreviewUnusedItem, CallFunc_Array_Get_Item) == 0x000178, "Member 'MyCharaMenu_Costume_C_CheckPreviewUnusedItem::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckPreviewUnusedItem, CallFunc_Array_Length_ReturnValue) == 0x0001A0, "Member 'MyCharaMenu_Costume_C_CheckPreviewUnusedItem::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckPreviewUnusedItem, CallFunc_Less_IntInt_ReturnValue) == 0x0001A4, "Member 'MyCharaMenu_Costume_C_CheckPreviewUnusedItem::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckPreviewUnusedItem, CallFunc_BooleanAND_ReturnValue_2) == 0x0001A5, "Member 'MyCharaMenu_Costume_C_CheckPreviewUnusedItem::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckPreviewUnusedItem, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x0001A6, "Member 'MyCharaMenu_Costume_C_CheckPreviewUnusedItem::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckPreviewUnusedItem, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x0001A8, "Member 'MyCharaMenu_Costume_C_CheckPreviewUnusedItem::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckPreviewUnusedItem, CallFunc_GetEquipmentBag_ReturnValue) == 0x0002C0, "Member 'MyCharaMenu_Costume_C_CheckPreviewUnusedItem::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ChangeDecideButtonVisibility
// 0x0020 (0x0020 - 0x0000)
struct MyCharaMenu_Costume_C_ChangeDecideButtonVisibility final
{
public:
	bool                                          Animation;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_760B[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_Costume_C_ChangeDecideButtonVisibility) == 0x000008, "Wrong alignment on MyCharaMenu_Costume_C_ChangeDecideButtonVisibility");
static_assert(sizeof(MyCharaMenu_Costume_C_ChangeDecideButtonVisibility) == 0x000020, "Wrong size on MyCharaMenu_Costume_C_ChangeDecideButtonVisibility");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeDecideButtonVisibility, Animation) == 0x000000, "Member 'MyCharaMenu_Costume_C_ChangeDecideButtonVisibility::Animation' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeDecideButtonVisibility, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'MyCharaMenu_Costume_C_ChangeDecideButtonVisibility::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeDecideButtonVisibility, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'MyCharaMenu_Costume_C_ChangeDecideButtonVisibility::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeDecideButtonVisibility, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'MyCharaMenu_Costume_C_ChangeDecideButtonVisibility::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_ChangeDecideButtonVisibility, CallFunc_Greater_IntInt_ReturnValue) == 0x00001C, "Member 'MyCharaMenu_Costume_C_ChangeDecideButtonVisibility::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.SetCharaCreateParameter
// 0x00B0 (0x00B0 - 0x0000)
struct MyCharaMenu_Costume_C_SetCharaCreateParameter final
{
public:
	struct FCharaEquipItemCharaCreateInfo         CreateInfo;                                        // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FName                                   WorkPartsName2;                                    // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 WorkPartsName1;                                    // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         PartsMaterialId;                                   // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   PartsName;                                         // 0x0044(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCharaCreateColorHSV                 ColorHSV;                                          // 0x004C(0x000C)(Edit, BlueprintVisible, NoDestructor)
	class FString                                 CallFunc_Replace_ReturnValue;                      // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Replace_ReturnValue_1;                    // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_1;          // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBCharaCreateColorHSV                 K2Node_MakeStruct_SBCharaCreateColorHSV;           // 0x0098(0x000C)(NoDestructor)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_2;          // 0x00A4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_Costume_C_SetCharaCreateParameter) == 0x000008, "Wrong alignment on MyCharaMenu_Costume_C_SetCharaCreateParameter");
static_assert(sizeof(MyCharaMenu_Costume_C_SetCharaCreateParameter) == 0x0000B0, "Wrong size on MyCharaMenu_Costume_C_SetCharaCreateParameter");
static_assert(offsetof(MyCharaMenu_Costume_C_SetCharaCreateParameter, CreateInfo) == 0x000000, "Member 'MyCharaMenu_Costume_C_SetCharaCreateParameter::CreateInfo' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_SetCharaCreateParameter, WorkPartsName2) == 0x000028, "Member 'MyCharaMenu_Costume_C_SetCharaCreateParameter::WorkPartsName2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_SetCharaCreateParameter, WorkPartsName1) == 0x000030, "Member 'MyCharaMenu_Costume_C_SetCharaCreateParameter::WorkPartsName1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_SetCharaCreateParameter, PartsMaterialId) == 0x000040, "Member 'MyCharaMenu_Costume_C_SetCharaCreateParameter::PartsMaterialId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_SetCharaCreateParameter, PartsName) == 0x000044, "Member 'MyCharaMenu_Costume_C_SetCharaCreateParameter::PartsName' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_SetCharaCreateParameter, ColorHSV) == 0x00004C, "Member 'MyCharaMenu_Costume_C_SetCharaCreateParameter::ColorHSV' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_SetCharaCreateParameter, CallFunc_Replace_ReturnValue) == 0x000058, "Member 'MyCharaMenu_Costume_C_SetCharaCreateParameter::CallFunc_Replace_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_SetCharaCreateParameter, CallFunc_Replace_ReturnValue_1) == 0x000068, "Member 'MyCharaMenu_Costume_C_SetCharaCreateParameter::CallFunc_Replace_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_SetCharaCreateParameter, CallFunc_Conv_StringToName_ReturnValue) == 0x000078, "Member 'MyCharaMenu_Costume_C_SetCharaCreateParameter::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_SetCharaCreateParameter, CallFunc_Conv_StringToName_ReturnValue_1) == 0x000080, "Member 'MyCharaMenu_Costume_C_SetCharaCreateParameter::CallFunc_Conv_StringToName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_SetCharaCreateParameter, CallFunc_Conv_NameToString_ReturnValue) == 0x000088, "Member 'MyCharaMenu_Costume_C_SetCharaCreateParameter::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_SetCharaCreateParameter, K2Node_MakeStruct_SBCharaCreateColorHSV) == 0x000098, "Member 'MyCharaMenu_Costume_C_SetCharaCreateParameter::K2Node_MakeStruct_SBCharaCreateColorHSV' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_SetCharaCreateParameter, CallFunc_Conv_StringToName_ReturnValue_2) == 0x0000A4, "Member 'MyCharaMenu_Costume_C_SetCharaCreateParameter::CallFunc_Conv_StringToName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_SetCharaCreateParameter, K2Node_SwitchEnum_CmpSuccess) == 0x0000AC, "Member 'MyCharaMenu_Costume_C_SetCharaCreateParameter::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.CheckCostumeEquipment
// 0x0014 (0x0014 - 0x0000)
struct MyCharaMenu_Costume_C_CheckCostumeEquipment final
{
public:
	ESBCharaEquipType                             EquipType;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EquipFlag;                                         // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsEquipment;                                       // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_760C[0x1];                                     // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PreviewCostumeIndex;                               // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CheckName;                                         // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue_1;          // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_Costume_C_CheckCostumeEquipment) == 0x000004, "Wrong alignment on MyCharaMenu_Costume_C_CheckCostumeEquipment");
static_assert(sizeof(MyCharaMenu_Costume_C_CheckCostumeEquipment) == 0x000014, "Wrong size on MyCharaMenu_Costume_C_CheckCostumeEquipment");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckCostumeEquipment, EquipType) == 0x000000, "Member 'MyCharaMenu_Costume_C_CheckCostumeEquipment::EquipType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckCostumeEquipment, EquipFlag) == 0x000001, "Member 'MyCharaMenu_Costume_C_CheckCostumeEquipment::EquipFlag' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckCostumeEquipment, IsEquipment) == 0x000002, "Member 'MyCharaMenu_Costume_C_CheckCostumeEquipment::IsEquipment' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckCostumeEquipment, PreviewCostumeIndex) == 0x000004, "Member 'MyCharaMenu_Costume_C_CheckCostumeEquipment::PreviewCostumeIndex' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckCostumeEquipment, CheckName) == 0x000008, "Member 'MyCharaMenu_Costume_C_CheckCostumeEquipment::CheckName' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckCostumeEquipment, K2Node_SwitchEnum_CmpSuccess) == 0x000010, "Member 'MyCharaMenu_Costume_C_CheckCostumeEquipment::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckCostumeEquipment, CallFunc_NotEqual_NameName_ReturnValue) == 0x000011, "Member 'MyCharaMenu_Costume_C_CheckCostumeEquipment::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckCostumeEquipment, CallFunc_NotEqual_NameName_ReturnValue_1) == 0x000012, "Member 'MyCharaMenu_Costume_C_CheckCostumeEquipment::CallFunc_NotEqual_NameName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckCostumeEquipment, CallFunc_BooleanAND_ReturnValue) == 0x000013, "Member 'MyCharaMenu_Costume_C_CheckCostumeEquipment::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.GetPreviewCostumeUniqueId
// 0x0050 (0x0050 - 0x0000)
struct MyCharaMenu_Costume_C_GetPreviewCostumeUniqueId final
{
public:
	ESBCharaEquipType                             EquipmentType;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_760D[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 UniqueId;                                          // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         FindIndex;                                         // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_760E[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharaEquipItemInfo                    CallFunc_GetEquipItemInfo_ReturnValue;             // 0x0020(0x0028)(ConstParm)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_Costume_C_GetPreviewCostumeUniqueId) == 0x000008, "Wrong alignment on MyCharaMenu_Costume_C_GetPreviewCostumeUniqueId");
static_assert(sizeof(MyCharaMenu_Costume_C_GetPreviewCostumeUniqueId) == 0x000050, "Wrong size on MyCharaMenu_Costume_C_GetPreviewCostumeUniqueId");
static_assert(offsetof(MyCharaMenu_Costume_C_GetPreviewCostumeUniqueId, EquipmentType) == 0x000000, "Member 'MyCharaMenu_Costume_C_GetPreviewCostumeUniqueId::EquipmentType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_GetPreviewCostumeUniqueId, UniqueId) == 0x000008, "Member 'MyCharaMenu_Costume_C_GetPreviewCostumeUniqueId::UniqueId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_GetPreviewCostumeUniqueId, FindIndex) == 0x000018, "Member 'MyCharaMenu_Costume_C_GetPreviewCostumeUniqueId::FindIndex' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_GetPreviewCostumeUniqueId, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00001C, "Member 'MyCharaMenu_Costume_C_GetPreviewCostumeUniqueId::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_GetPreviewCostumeUniqueId, CallFunc_GetEquipItemInfo_ReturnValue) == 0x000020, "Member 'MyCharaMenu_Costume_C_GetPreviewCostumeUniqueId::CallFunc_GetEquipItemInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_GetPreviewCostumeUniqueId, CallFunc_Array_Find_ReturnValue) == 0x000048, "Member 'MyCharaMenu_Costume_C_GetPreviewCostumeUniqueId::CallFunc_Array_Find_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.IsPreviewMode
// 0x000C (0x000C - 0x0000)
struct MyCharaMenu_Costume_C_IsPreviewMode final
{
public:
	bool                                          Preview;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_760F[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_Costume_C_IsPreviewMode) == 0x000004, "Wrong alignment on MyCharaMenu_Costume_C_IsPreviewMode");
static_assert(sizeof(MyCharaMenu_Costume_C_IsPreviewMode) == 0x00000C, "Wrong size on MyCharaMenu_Costume_C_IsPreviewMode");
static_assert(offsetof(MyCharaMenu_Costume_C_IsPreviewMode, Preview) == 0x000000, "Member 'MyCharaMenu_Costume_C_IsPreviewMode::Preview' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_IsPreviewMode, CallFunc_Array_Length_ReturnValue) == 0x000004, "Member 'MyCharaMenu_Costume_C_IsPreviewMode::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_IsPreviewMode, CallFunc_Greater_IntInt_ReturnValue) == 0x000008, "Member 'MyCharaMenu_Costume_C_IsPreviewMode::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OutputEquipmentCostumeLog
// 0x0060 (0x0060 - 0x0000)
struct MyCharaMenu_Costume_C_OutputEquipmentCostumeLog final
{
public:
	class FString                                 WorkUniqueId;                                      // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7610[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEquipmentItem_ReturnValue;              // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue_1;            // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0027(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEquipmentItem_ReturnValue_1;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7611[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharaEquipItemInfo                    CallFunc_Array_Get_Item;                           // 0x0030(0x0028)()
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_Costume_C_OutputEquipmentCostumeLog) == 0x000008, "Wrong alignment on MyCharaMenu_Costume_C_OutputEquipmentCostumeLog");
static_assert(sizeof(MyCharaMenu_Costume_C_OutputEquipmentCostumeLog) == 0x000060, "Wrong size on MyCharaMenu_Costume_C_OutputEquipmentCostumeLog");
static_assert(offsetof(MyCharaMenu_Costume_C_OutputEquipmentCostumeLog, WorkUniqueId) == 0x000000, "Member 'MyCharaMenu_Costume_C_OutputEquipmentCostumeLog::WorkUniqueId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_OutputEquipmentCostumeLog, Temp_int_Array_Index_Variable) == 0x000010, "Member 'MyCharaMenu_Costume_C_OutputEquipmentCostumeLog::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_OutputEquipmentCostumeLog, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'MyCharaMenu_Costume_C_OutputEquipmentCostumeLog::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_OutputEquipmentCostumeLog, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'MyCharaMenu_Costume_C_OutputEquipmentCostumeLog::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_OutputEquipmentCostumeLog, CallFunc_NotEqual_StrStr_ReturnValue) == 0x00001C, "Member 'MyCharaMenu_Costume_C_OutputEquipmentCostumeLog::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_OutputEquipmentCostumeLog, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'MyCharaMenu_Costume_C_OutputEquipmentCostumeLog::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_OutputEquipmentCostumeLog, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000024, "Member 'MyCharaMenu_Costume_C_OutputEquipmentCostumeLog::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_OutputEquipmentCostumeLog, CallFunc_IsEquipmentItem_ReturnValue) == 0x000025, "Member 'MyCharaMenu_Costume_C_OutputEquipmentCostumeLog::CallFunc_IsEquipmentItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_OutputEquipmentCostumeLog, CallFunc_NotEqual_StrStr_ReturnValue_1) == 0x000026, "Member 'MyCharaMenu_Costume_C_OutputEquipmentCostumeLog::CallFunc_NotEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_OutputEquipmentCostumeLog, CallFunc_BooleanAND_ReturnValue) == 0x000027, "Member 'MyCharaMenu_Costume_C_OutputEquipmentCostumeLog::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_OutputEquipmentCostumeLog, CallFunc_IsEquipmentItem_ReturnValue_1) == 0x000028, "Member 'MyCharaMenu_Costume_C_OutputEquipmentCostumeLog::CallFunc_IsEquipmentItem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_OutputEquipmentCostumeLog, CallFunc_Array_Get_Item) == 0x000030, "Member 'MyCharaMenu_Costume_C_OutputEquipmentCostumeLog::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_OutputEquipmentCostumeLog, CallFunc_Array_Length_ReturnValue_1) == 0x000058, "Member 'MyCharaMenu_Costume_C_OutputEquipmentCostumeLog::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_OutputEquipmentCostumeLog, CallFunc_Less_IntInt_ReturnValue) == 0x00005C, "Member 'MyCharaMenu_Costume_C_OutputEquipmentCostumeLog::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.UpdateEquippedCostumeInfo
// 0x0040 (0x0040 - 0x0000)
struct MyCharaMenu_Costume_C_UpdateEquippedCostumeInfo final
{
public:
	int32                                         EquipmentIndex;                                    // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LoopEnd;                                           // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharaEquipInfo                        WorkEquipInfo;                                     // 0x0008(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7612[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7613[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharaEquipInfo                        CallFunc_GetEquipInfo_ReturnValue;                 // 0x0030(0x0010)()
};
static_assert(alignof(MyCharaMenu_Costume_C_UpdateEquippedCostumeInfo) == 0x000008, "Wrong alignment on MyCharaMenu_Costume_C_UpdateEquippedCostumeInfo");
static_assert(sizeof(MyCharaMenu_Costume_C_UpdateEquippedCostumeInfo) == 0x000040, "Wrong size on MyCharaMenu_Costume_C_UpdateEquippedCostumeInfo");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdateEquippedCostumeInfo, EquipmentIndex) == 0x000000, "Member 'MyCharaMenu_Costume_C_UpdateEquippedCostumeInfo::EquipmentIndex' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdateEquippedCostumeInfo, LoopEnd) == 0x000004, "Member 'MyCharaMenu_Costume_C_UpdateEquippedCostumeInfo::LoopEnd' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdateEquippedCostumeInfo, WorkEquipInfo) == 0x000008, "Member 'MyCharaMenu_Costume_C_UpdateEquippedCostumeInfo::WorkEquipInfo' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdateEquippedCostumeInfo, Temp_int_Variable) == 0x000018, "Member 'MyCharaMenu_Costume_C_UpdateEquippedCostumeInfo::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdateEquippedCostumeInfo, CallFunc_Array_LastIndex_ReturnValue) == 0x00001C, "Member 'MyCharaMenu_Costume_C_UpdateEquippedCostumeInfo::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdateEquippedCostumeInfo, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000020, "Member 'MyCharaMenu_Costume_C_UpdateEquippedCostumeInfo::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdateEquippedCostumeInfo, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000024, "Member 'MyCharaMenu_Costume_C_UpdateEquippedCostumeInfo::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdateEquippedCostumeInfo, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'MyCharaMenu_Costume_C_UpdateEquippedCostumeInfo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdateEquippedCostumeInfo, CallFunc_GetEquipInfo_ReturnValue) == 0x000030, "Member 'MyCharaMenu_Costume_C_UpdateEquippedCostumeInfo::CallFunc_GetEquipInfo_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.CheckCostumeRingEquipment
// 0x0040 (0x0040 - 0x0000)
struct MyCharaMenu_Costume_C_CheckCostumeRingEquipment final
{
public:
	class FString                                 UniqueId;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          Equipment;                                         // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Preview;                                           // 0x0011(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharaEquipType                             EquipType;                                         // 0x0012(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPreview;                                         // 0x0013(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CostumeIndex;                                      // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             RetType;                                           // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEquipment;                                       // 0x0019(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharaEquipType                             Temp_byte_Variable;                                // 0x001A(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharaEquipType                             Temp_byte_Variable_1;                              // 0x001C(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharaEquipType                             Temp_byte_Variable_2;                              // 0x001E(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_2;        // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharaEquipType                             Temp_byte_Variable_3;                              // 0x0020(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_3;        // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7614[0x2];                                     // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue_1;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7615[0x2];                                     // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Find_ReturnValue_2;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_2;          // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7616[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Find_ReturnValue_3;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_3;          // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_Costume_C_CheckCostumeRingEquipment) == 0x000008, "Wrong alignment on MyCharaMenu_Costume_C_CheckCostumeRingEquipment");
static_assert(sizeof(MyCharaMenu_Costume_C_CheckCostumeRingEquipment) == 0x000040, "Wrong size on MyCharaMenu_Costume_C_CheckCostumeRingEquipment");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckCostumeRingEquipment, UniqueId) == 0x000000, "Member 'MyCharaMenu_Costume_C_CheckCostumeRingEquipment::UniqueId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckCostumeRingEquipment, Equipment) == 0x000010, "Member 'MyCharaMenu_Costume_C_CheckCostumeRingEquipment::Equipment' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckCostumeRingEquipment, Preview) == 0x000011, "Member 'MyCharaMenu_Costume_C_CheckCostumeRingEquipment::Preview' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckCostumeRingEquipment, EquipType) == 0x000012, "Member 'MyCharaMenu_Costume_C_CheckCostumeRingEquipment::EquipType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckCostumeRingEquipment, IsPreview) == 0x000013, "Member 'MyCharaMenu_Costume_C_CheckCostumeRingEquipment::IsPreview' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckCostumeRingEquipment, CostumeIndex) == 0x000014, "Member 'MyCharaMenu_Costume_C_CheckCostumeRingEquipment::CostumeIndex' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckCostumeRingEquipment, RetType) == 0x000018, "Member 'MyCharaMenu_Costume_C_CheckCostumeRingEquipment::RetType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckCostumeRingEquipment, IsEquipment) == 0x000019, "Member 'MyCharaMenu_Costume_C_CheckCostumeRingEquipment::IsEquipment' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckCostumeRingEquipment, Temp_byte_Variable) == 0x00001A, "Member 'MyCharaMenu_Costume_C_CheckCostumeRingEquipment::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckCostumeRingEquipment, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00001B, "Member 'MyCharaMenu_Costume_C_CheckCostumeRingEquipment::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckCostumeRingEquipment, Temp_byte_Variable_1) == 0x00001C, "Member 'MyCharaMenu_Costume_C_CheckCostumeRingEquipment::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckCostumeRingEquipment, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x00001D, "Member 'MyCharaMenu_Costume_C_CheckCostumeRingEquipment::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckCostumeRingEquipment, Temp_byte_Variable_2) == 0x00001E, "Member 'MyCharaMenu_Costume_C_CheckCostumeRingEquipment::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckCostumeRingEquipment, CallFunc_GreaterEqual_IntInt_ReturnValue_2) == 0x00001F, "Member 'MyCharaMenu_Costume_C_CheckCostumeRingEquipment::CallFunc_GreaterEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckCostumeRingEquipment, Temp_byte_Variable_3) == 0x000020, "Member 'MyCharaMenu_Costume_C_CheckCostumeRingEquipment::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckCostumeRingEquipment, CallFunc_GreaterEqual_IntInt_ReturnValue_3) == 0x000021, "Member 'MyCharaMenu_Costume_C_CheckCostumeRingEquipment::CallFunc_GreaterEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckCostumeRingEquipment, CallFunc_Array_Find_ReturnValue) == 0x000024, "Member 'MyCharaMenu_Costume_C_CheckCostumeRingEquipment::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckCostumeRingEquipment, CallFunc_Array_Find_ReturnValue_1) == 0x000028, "Member 'MyCharaMenu_Costume_C_CheckCostumeRingEquipment::CallFunc_Array_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckCostumeRingEquipment, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x00002C, "Member 'MyCharaMenu_Costume_C_CheckCostumeRingEquipment::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckCostumeRingEquipment, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x00002D, "Member 'MyCharaMenu_Costume_C_CheckCostumeRingEquipment::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckCostumeRingEquipment, CallFunc_Array_Find_ReturnValue_2) == 0x000030, "Member 'MyCharaMenu_Costume_C_CheckCostumeRingEquipment::CallFunc_Array_Find_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckCostumeRingEquipment, CallFunc_EqualEqual_StrStr_ReturnValue_2) == 0x000034, "Member 'MyCharaMenu_Costume_C_CheckCostumeRingEquipment::CallFunc_EqualEqual_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckCostumeRingEquipment, CallFunc_Array_Find_ReturnValue_3) == 0x000038, "Member 'MyCharaMenu_Costume_C_CheckCostumeRingEquipment::CallFunc_Array_Find_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_CheckCostumeRingEquipment, CallFunc_EqualEqual_StrStr_ReturnValue_3) == 0x00003C, "Member 'MyCharaMenu_Costume_C_CheckCostumeRingEquipment::CallFunc_EqualEqual_StrStr_ReturnValue_3' has a wrong offset!");

// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.UpdatePlayerCharacter_Func
// 0x04A0 (0x04A0 - 0x0000)
struct MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func final
{
public:
	bool                                          TimeDeleteFlag;                                    // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7617[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           OwnItemInfo;                                       // 0x0008(0x0118)(Edit, BlueprintVisible)
	class USBMasterDataManager*                   MasterDataManager;                                 // 0x0120(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           PartsLocation;                                     // 0x0128(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7618[0x7];                                     // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CostumePartsName;                                  // 0x0130(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FCharaEquipItemInfo                    WorkItemInfo;                                      // 0x0140(0x0028)(Edit, BlueprintVisible)
	struct FCharaEquipItemCharaCreateInfo         WorkCreateInfo;                                    // 0x0168(0x0028)(Edit, BlueprintVisible)
	ESBCharaEquipType                             WorkEquipType;                                     // 0x0190(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7619[0x3];                                     // 0x0191(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LoopEnd;                                           // 0x0194(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCharaCreateComponent*                CharaCreateComp;                                   // 0x0198(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x01A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_761A[0x2];                                     // 0x01A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x01B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_761B[0x3];                                     // 0x01B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_761C[0x3];                                     // 0x01BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x01C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x01CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_761D[0x2];                                     // 0x01CE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x01D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECharaPartsLocation                           Temp_byte_Variable;                                // 0x01DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_761E[0x5];                                     // 0x01DB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharaEquipNakedPartsName_OutPartsName; // 0x01E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCharaEquipNakedPartsName_ReturnValue;  // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x01F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_761F[0x2];                                     // 0x01F2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_1;          // 0x01F4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x01FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBDeletedCostumeData                  CallFunc_Array_Get_Item;                           // 0x0200(0x0048)()
	bool                                          CallFunc_SetCharaCostumePartsToNakedByDeletedCostumeData_OutIsCharaPartsSettedToNaked; // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0249(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECharaPartsLocation                           Temp_byte_Variable_1;                              // 0x024A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7620[0x1];                                     // 0x024B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_2;          // 0x024C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_3;          // 0x0254(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           CallFunc_GetCostumePartsLocation_OutPartsLocation; // 0x025C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCostumePartsLocation_ReturnValue;      // 0x025D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x025E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECharaPartsLocation                           K2Node_Select_Default;                             // 0x025F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_2;          // 0x0261(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0262(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0263(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7621[0x4];                                     // 0x0264(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindCostumeMaster_IsExist;             // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7622[0x7];                                     // 0x0271(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CallFunc_BP_FindCostumeMaster_ReturnValue;         // 0x0278(0x0088)()
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x0300(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x0308(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7623[0x7];                                     // 0x0309(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x0310(0x0118)(ConstParm)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_4;          // 0x0428(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           CallFunc_Array_Get_Item_1;                         // 0x0430(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7624[0x3];                                     // 0x0431(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0434(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0438(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0439(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x043A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x043B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7625[0x4];                                     // 0x043C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharaEquipNakedPartsName_OutPartsName_1; // 0x0440(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCharaEquipNakedPartsName_ReturnValue_1; // 0x0450(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7626[0x3];                                     // 0x0451(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_5;          // 0x0454(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_6;          // 0x045C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           CallFunc_GetCostumePartsLocation_OutPartsLocation_1; // 0x0464(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCostumePartsLocation_ReturnValue_1;    // 0x0465(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7627[0x2];                                     // 0x0466(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharaEquipNakedPartsName_OutPartsName_2; // 0x0468(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCharaEquipNakedPartsName_ReturnValue_2; // 0x0478(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0479(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECharaPartsLocation                           Temp_byte_Variable_2;                              // 0x047A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_3;          // 0x047B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_4;          // 0x047C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x047D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x047E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECharaPartsLocation                           Temp_byte_Variable_3;                              // 0x047F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           K2Node_Select_Default_1;                           // 0x0480(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7628[0x3];                                     // 0x0481(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0484(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0488(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBCreationCharacter*                   K2Node_DynamicCast_AsSBCreation_Character;         // 0x0490(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0498(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0499(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func) == 0x000008, "Wrong alignment on MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func");
static_assert(sizeof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func) == 0x0004A0, "Wrong size on MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, TimeDeleteFlag) == 0x000000, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::TimeDeleteFlag' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, OwnItemInfo) == 0x000008, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::OwnItemInfo' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, MasterDataManager) == 0x000120, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::MasterDataManager' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, PartsLocation) == 0x000128, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::PartsLocation' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CostumePartsName) == 0x000130, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CostumePartsName' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, WorkItemInfo) == 0x000140, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::WorkItemInfo' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, WorkCreateInfo) == 0x000168, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::WorkCreateInfo' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, WorkEquipType) == 0x000190, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::WorkEquipType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, LoopEnd) == 0x000194, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::LoopEnd' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CharaCreateComp) == 0x000198, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CharaCreateComp' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0001A0, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, Temp_bool_Variable) == 0x0001A1, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, Temp_int_Loop_Counter_Variable) == 0x0001A4, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_Add_IntInt_ReturnValue) == 0x0001A8, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, Temp_int_Array_Index_Variable) == 0x0001AC, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, Temp_int_Variable) == 0x0001B0, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0001B4, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_Add_IntInt_ReturnValue_1) == 0x0001B8, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_IsValid_ReturnValue) == 0x0001BC, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, Temp_int_Loop_Counter_Variable_1) == 0x0001C0, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_Add_IntInt_ReturnValue_2) == 0x0001C4, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_Array_Length_ReturnValue) == 0x0001C8, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_Less_IntInt_ReturnValue) == 0x0001CC, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_Not_PreBool_ReturnValue) == 0x0001CD, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_Conv_StringToName_ReturnValue) == 0x0001D0, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0001D8, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0001D9, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, Temp_byte_Variable) == 0x0001DA, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_GetCharaEquipNakedPartsName_OutPartsName) == 0x0001E0, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_GetCharaEquipNakedPartsName_OutPartsName' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_GetCharaEquipNakedPartsName_ReturnValue) == 0x0001F0, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_GetCharaEquipNakedPartsName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x0001F1, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_Conv_StringToName_ReturnValue_1) == 0x0001F4, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_Conv_StringToName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, Temp_int_Array_Index_Variable_1) == 0x0001FC, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_Array_Get_Item) == 0x000200, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_SetCharaCostumePartsToNakedByDeletedCostumeData_OutIsCharaPartsSettedToNaked) == 0x000248, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_SetCharaCostumePartsToNakedByDeletedCostumeData_OutIsCharaPartsSettedToNaked' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000249, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, Temp_byte_Variable_1) == 0x00024A, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_Conv_StringToName_ReturnValue_2) == 0x00024C, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_Conv_StringToName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_Conv_StringToName_ReturnValue_3) == 0x000254, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_Conv_StringToName_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_GetCostumePartsLocation_OutPartsLocation) == 0x00025C, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_GetCostumePartsLocation_OutPartsLocation' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_GetCostumePartsLocation_ReturnValue) == 0x00025D, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_GetCostumePartsLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, Temp_bool_Variable_1) == 0x00025E, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, K2Node_Select_Default) == 0x00025F, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x000260, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_NotEqual_ByteByte_ReturnValue_2) == 0x000261, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_NotEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_BooleanAND_ReturnValue) == 0x000262, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_GetMasterDataManager_IsValid) == 0x000263, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_GetMasterDataManager_ReturnValue) == 0x000268, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_BP_FindCostumeMaster_IsExist) == 0x000270, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_BP_FindCostumeMaster_IsExist' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_BP_FindCostumeMaster_ReturnValue) == 0x000278, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_BP_FindCostumeMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_GetEquipmentBag_ReturnValue) == 0x000300, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x000308, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x000310, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_Conv_StringToName_ReturnValue_4) == 0x000428, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_Conv_StringToName_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_Array_Get_Item_1) == 0x000430, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_Array_Length_ReturnValue_1) == 0x000434, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_Less_IntInt_ReturnValue_1) == 0x000438, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, Temp_bool_True_if_break_was_hit_Variable) == 0x000439, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_Not_PreBool_ReturnValue_1) == 0x00043A, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_BooleanAND_ReturnValue_1) == 0x00043B, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_GetCharaEquipNakedPartsName_OutPartsName_1) == 0x000440, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_GetCharaEquipNakedPartsName_OutPartsName_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_GetCharaEquipNakedPartsName_ReturnValue_1) == 0x000450, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_GetCharaEquipNakedPartsName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_Conv_StringToName_ReturnValue_5) == 0x000454, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_Conv_StringToName_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_Conv_StringToName_ReturnValue_6) == 0x00045C, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_Conv_StringToName_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_GetCostumePartsLocation_OutPartsLocation_1) == 0x000464, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_GetCostumePartsLocation_OutPartsLocation_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_GetCostumePartsLocation_ReturnValue_1) == 0x000465, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_GetCostumePartsLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_GetCharaEquipNakedPartsName_OutPartsName_2) == 0x000468, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_GetCharaEquipNakedPartsName_OutPartsName_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_GetCharaEquipNakedPartsName_ReturnValue_2) == 0x000478, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_GetCharaEquipNakedPartsName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_BooleanAND_ReturnValue_2) == 0x000479, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, Temp_byte_Variable_2) == 0x00047A, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_NotEqual_ByteByte_ReturnValue_3) == 0x00047B, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_NotEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_NotEqual_ByteByte_ReturnValue_4) == 0x00047C, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_NotEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_BooleanAND_ReturnValue_3) == 0x00047D, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x00047E, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, Temp_byte_Variable_3) == 0x00047F, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, K2Node_Select_Default_1) == 0x000480, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_Array_LastIndex_ReturnValue) == 0x000484, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000488, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, K2Node_DynamicCast_AsSBCreation_Character) == 0x000490, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::K2Node_DynamicCast_AsSBCreation_Character' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, K2Node_DynamicCast_bSuccess) == 0x000498, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func, CallFunc_IsValid_ReturnValue_1) == 0x000499, "Member 'MyCharaMenu_Costume_C_UpdatePlayerCharacter_Func::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.FindConflictingCompositeWearbyEquipInfo
// 0x0050 (0x0050 - 0x0000)
struct MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo final
{
public:
	ESBCharaEquipType                             EquipType;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            Gender;                                            // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsConflict;                                        // 0x0002(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharaEquipType                             ConflictEquipType;                                 // 0x0003(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         WorkIndex;                                         // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             WorkEquipType;                                     // 0x0008(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7629[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LoopEnd;                                           // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 ItemIdList;                                        // 0x0010(0x0010)(Edit, BlueprintVisible)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_762A[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindCostumeConflictingCompositeWear_OutIsConflictingCompositeWear; // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharaEquipType                             CallFunc_FindCostumeConflictingCompositeWear_OutConflictingCostumeEquipType; // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_762B[0x2];                                     // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_762C[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Find_ReturnValue_1;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x004B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo) == 0x000008, "Wrong alignment on MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo");
static_assert(sizeof(MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo) == 0x000050, "Wrong size on MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo");
static_assert(offsetof(MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo, EquipType) == 0x000000, "Member 'MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo::EquipType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo, Gender) == 0x000001, "Member 'MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo::Gender' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo, IsConflict) == 0x000002, "Member 'MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo::IsConflict' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo, ConflictEquipType) == 0x000003, "Member 'MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo::ConflictEquipType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo, WorkIndex) == 0x000004, "Member 'MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo::WorkIndex' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo, WorkEquipType) == 0x000008, "Member 'MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo::WorkEquipType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo, LoopEnd) == 0x00000C, "Member 'MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo::LoopEnd' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo, ItemIdList) == 0x000010, "Member 'MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo::ItemIdList' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo, CallFunc_MakeLiteralByte_ReturnValue) == 0x000020, "Member 'MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000024, "Member 'MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo, CallFunc_Subtract_IntInt_ReturnValue) == 0x000028, "Member 'MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo, CallFunc_FindCostumeConflictingCompositeWear_OutIsConflictingCompositeWear) == 0x00002C, "Member 'MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo::CallFunc_FindCostumeConflictingCompositeWear_OutIsConflictingCompositeWear' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo, CallFunc_FindCostumeConflictingCompositeWear_OutConflictingCostumeEquipType) == 0x00002D, "Member 'MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo::CallFunc_FindCostumeConflictingCompositeWear_OutConflictingCostumeEquipType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo, CallFunc_Array_Find_ReturnValue) == 0x000030, "Member 'MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000034, "Member 'MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo, CallFunc_Array_Find_ReturnValue_1) == 0x000038, "Member 'MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo::CallFunc_Array_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo, CallFunc_Array_Add_ReturnValue) == 0x00003C, "Member 'MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo, CallFunc_Array_Add_ReturnValue_1) == 0x000040, "Member 'MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo, Temp_int_Variable) == 0x000044, "Member 'MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x000048, "Member 'MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo, CallFunc_Conv_IntToByte_ReturnValue) == 0x000049, "Member 'MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo, CallFunc_GetValidValue_ReturnValue) == 0x00004A, "Member 'MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00004B, "Member 'MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo, CallFunc_Add_IntInt_ReturnValue) == 0x00004C, "Member 'MyCharaMenu_Costume_C_FindConflictingCompositeWearbyEquipInfo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.SetDressOnOffButton
// 0x0002 (0x0002 - 0x0000)
struct MyCharaMenu_Costume_C_SetDressOnOffButton final
{
public:
	bool                                          InIsDressOn;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_Costume_C_SetDressOnOffButton) == 0x000001, "Wrong alignment on MyCharaMenu_Costume_C_SetDressOnOffButton");
static_assert(sizeof(MyCharaMenu_Costume_C_SetDressOnOffButton) == 0x000002, "Wrong size on MyCharaMenu_Costume_C_SetDressOnOffButton");
static_assert(offsetof(MyCharaMenu_Costume_C_SetDressOnOffButton, InIsDressOn) == 0x000000, "Member 'MyCharaMenu_Costume_C_SetDressOnOffButton::InIsDressOn' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_SetDressOnOffButton, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'MyCharaMenu_Costume_C_SetDressOnOffButton::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.ClearPreviewDatas
// 0x03C0 (0x03C0 - 0x0000)
struct MyCharaMenu_Costume_C_ClearPreviewDatas final
{
public:
	struct FSBCharaCreateParameter                NewLocalVar_0;                                     // 0x0000(0x03C0)(Edit, BlueprintVisible)
};
static_assert(alignof(MyCharaMenu_Costume_C_ClearPreviewDatas) == 0x000008, "Wrong alignment on MyCharaMenu_Costume_C_ClearPreviewDatas");
static_assert(sizeof(MyCharaMenu_Costume_C_ClearPreviewDatas) == 0x0003C0, "Wrong size on MyCharaMenu_Costume_C_ClearPreviewDatas");
static_assert(offsetof(MyCharaMenu_Costume_C_ClearPreviewDatas, NewLocalVar_0) == 0x000000, "Member 'MyCharaMenu_Costume_C_ClearPreviewDatas::NewLocalVar_0' has a wrong offset!");

// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.LocationToEquipType
// 0x0004 (0x0004 - 0x0000)
struct MyCharaMenu_Costume_C_LocationToEquipType final
{
public:
	ECharaPartsLocation                           CharaPartsLocation;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             CharaEquipType;                                    // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             EquipType;                                         // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_Costume_C_LocationToEquipType) == 0x000001, "Wrong alignment on MyCharaMenu_Costume_C_LocationToEquipType");
static_assert(sizeof(MyCharaMenu_Costume_C_LocationToEquipType) == 0x000004, "Wrong size on MyCharaMenu_Costume_C_LocationToEquipType");
static_assert(offsetof(MyCharaMenu_Costume_C_LocationToEquipType, CharaPartsLocation) == 0x000000, "Member 'MyCharaMenu_Costume_C_LocationToEquipType::CharaPartsLocation' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_LocationToEquipType, CharaEquipType) == 0x000001, "Member 'MyCharaMenu_Costume_C_LocationToEquipType::CharaEquipType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_LocationToEquipType, EquipType) == 0x000002, "Member 'MyCharaMenu_Costume_C_LocationToEquipType::EquipType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_LocationToEquipType, K2Node_SwitchEnum_CmpSuccess) == 0x000003, "Member 'MyCharaMenu_Costume_C_LocationToEquipType::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function MyCharaMenu_Costume.MyCharaMenu_Costume_C.OpenExpiredMessageWindow
// 0x01C0 (0x01C0 - 0x0000)
struct MyCharaMenu_Costume_C_OpenExpiredMessageWindow final
{
public:
	int32                                         CostumeId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOpen;                                            // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_762D[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSystemMessageManager*                MsgManager;                                        // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 ExpiredCostumeName;                                // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class USBMasterDataManager*                   MasterDataManager;                                 // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_762E[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable;                              // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetSystemMessageManager_IsValid;          // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_762F[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBSystemMessageManager*                CallFunc_GetSystemMessageManager_ReturnValue;      // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0050(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0068(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00A8(0x0010)(ReferenceParm)
	bool                                          CallFunc_BP_FindCostumeMaster_IsExist;             // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7630[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CallFunc_BP_FindCostumeMaster_ReturnValue;         // 0x00C0(0x0088)()
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7631[0x7];                                     // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCostumeText_ReturnValue;               // 0x0150(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7632[0x7];                                     // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default;                             // 0x0170(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0180(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0190(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x01A8(0x0018)()
};
static_assert(alignof(MyCharaMenu_Costume_C_OpenExpiredMessageWindow) == 0x000008, "Wrong alignment on MyCharaMenu_Costume_C_OpenExpiredMessageWindow");
static_assert(sizeof(MyCharaMenu_Costume_C_OpenExpiredMessageWindow) == 0x0001C0, "Wrong size on MyCharaMenu_Costume_C_OpenExpiredMessageWindow");
static_assert(offsetof(MyCharaMenu_Costume_C_OpenExpiredMessageWindow, CostumeId) == 0x000000, "Member 'MyCharaMenu_Costume_C_OpenExpiredMessageWindow::CostumeId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_OpenExpiredMessageWindow, IsOpen) == 0x000004, "Member 'MyCharaMenu_Costume_C_OpenExpiredMessageWindow::IsOpen' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_OpenExpiredMessageWindow, MsgManager) == 0x000008, "Member 'MyCharaMenu_Costume_C_OpenExpiredMessageWindow::MsgManager' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_OpenExpiredMessageWindow, ExpiredCostumeName) == 0x000010, "Member 'MyCharaMenu_Costume_C_OpenExpiredMessageWindow::ExpiredCostumeName' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_OpenExpiredMessageWindow, MasterDataManager) == 0x000020, "Member 'MyCharaMenu_Costume_C_OpenExpiredMessageWindow::MasterDataManager' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_OpenExpiredMessageWindow, Temp_bool_Variable) == 0x000028, "Member 'MyCharaMenu_Costume_C_OpenExpiredMessageWindow::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_OpenExpiredMessageWindow, Temp_string_Variable) == 0x000030, "Member 'MyCharaMenu_Costume_C_OpenExpiredMessageWindow::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_OpenExpiredMessageWindow, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'MyCharaMenu_Costume_C_OpenExpiredMessageWindow::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_OpenExpiredMessageWindow, CallFunc_GetSystemMessageManager_IsValid) == 0x000041, "Member 'MyCharaMenu_Costume_C_OpenExpiredMessageWindow::CallFunc_GetSystemMessageManager_IsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_OpenExpiredMessageWindow, CallFunc_GetSystemMessageManager_ReturnValue) == 0x000048, "Member 'MyCharaMenu_Costume_C_OpenExpiredMessageWindow::CallFunc_GetSystemMessageManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_OpenExpiredMessageWindow, CallFunc_Conv_StringToText_ReturnValue) == 0x000050, "Member 'MyCharaMenu_Costume_C_OpenExpiredMessageWindow::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_OpenExpiredMessageWindow, K2Node_MakeStruct_FormatArgumentData) == 0x000068, "Member 'MyCharaMenu_Costume_C_OpenExpiredMessageWindow::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_OpenExpiredMessageWindow, K2Node_MakeArray_Array) == 0x0000A8, "Member 'MyCharaMenu_Costume_C_OpenExpiredMessageWindow::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_OpenExpiredMessageWindow, CallFunc_BP_FindCostumeMaster_IsExist) == 0x0000B8, "Member 'MyCharaMenu_Costume_C_OpenExpiredMessageWindow::CallFunc_BP_FindCostumeMaster_IsExist' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_OpenExpiredMessageWindow, CallFunc_BP_FindCostumeMaster_ReturnValue) == 0x0000C0, "Member 'MyCharaMenu_Costume_C_OpenExpiredMessageWindow::CallFunc_BP_FindCostumeMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_OpenExpiredMessageWindow, CallFunc_IsValid_ReturnValue_1) == 0x000148, "Member 'MyCharaMenu_Costume_C_OpenExpiredMessageWindow::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_OpenExpiredMessageWindow, CallFunc_GetCostumeText_ReturnValue) == 0x000150, "Member 'MyCharaMenu_Costume_C_OpenExpiredMessageWindow::CallFunc_GetCostumeText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_OpenExpiredMessageWindow, CallFunc_GetMasterDataManager_IsValid) == 0x000160, "Member 'MyCharaMenu_Costume_C_OpenExpiredMessageWindow::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_OpenExpiredMessageWindow, CallFunc_GetMasterDataManager_ReturnValue) == 0x000168, "Member 'MyCharaMenu_Costume_C_OpenExpiredMessageWindow::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_OpenExpiredMessageWindow, K2Node_Select_Default) == 0x000170, "Member 'MyCharaMenu_Costume_C_OpenExpiredMessageWindow::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_OpenExpiredMessageWindow, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000180, "Member 'MyCharaMenu_Costume_C_OpenExpiredMessageWindow::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_OpenExpiredMessageWindow, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000190, "Member 'MyCharaMenu_Costume_C_OpenExpiredMessageWindow::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_Costume_C_OpenExpiredMessageWindow, CallFunc_Format_ReturnValue) == 0x0001A8, "Member 'MyCharaMenu_Costume_C_OpenExpiredMessageWindow::CallFunc_Format_ReturnValue' has a wrong offset!");

}

