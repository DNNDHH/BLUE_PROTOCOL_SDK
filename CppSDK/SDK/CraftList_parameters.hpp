#pragma once

 

// Package: CraftList

#include "Basic.hpp"

#include "CraftRecepiSortType_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "ItemListData_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function CraftList.CraftList_C.SelectRecepi__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct CraftList_C_SelectRecepi__DelegateSignature final
{
public:
	struct FCharacterCraftRecepi                  Recepi;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(CraftList_C_SelectRecepi__DelegateSignature) == 0x000004, "Wrong alignment on CraftList_C_SelectRecepi__DelegateSignature");
static_assert(sizeof(CraftList_C_SelectRecepi__DelegateSignature) == 0x000008, "Wrong size on CraftList_C_SelectRecepi__DelegateSignature");
static_assert(offsetof(CraftList_C_SelectRecepi__DelegateSignature, Recepi) == 0x000000, "Member 'CraftList_C_SelectRecepi__DelegateSignature::Recepi' has a wrong offset!");

// Function CraftList.CraftList_C.ShowNpcCraftBtn__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct CraftList_C_ShowNpcCraftBtn__DelegateSignature final
{
public:
	bool                                          bShow;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CraftList_C_ShowNpcCraftBtn__DelegateSignature) == 0x000001, "Wrong alignment on CraftList_C_ShowNpcCraftBtn__DelegateSignature");
static_assert(sizeof(CraftList_C_ShowNpcCraftBtn__DelegateSignature) == 0x000001, "Wrong size on CraftList_C_ShowNpcCraftBtn__DelegateSignature");
static_assert(offsetof(CraftList_C_ShowNpcCraftBtn__DelegateSignature, bShow) == 0x000000, "Member 'CraftList_C_ShowNpcCraftBtn__DelegateSignature::bShow' has a wrong offset!");

// Function CraftList.CraftList_C.SetCancelLock__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct CraftList_C_SetCancelLock__DelegateSignature final
{
public:
	bool                                          LockInput;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CraftList_C_SetCancelLock__DelegateSignature) == 0x000001, "Wrong alignment on CraftList_C_SetCancelLock__DelegateSignature");
static_assert(sizeof(CraftList_C_SetCancelLock__DelegateSignature) == 0x000001, "Wrong size on CraftList_C_SetCancelLock__DelegateSignature");
static_assert(offsetof(CraftList_C_SetCancelLock__DelegateSignature, LockInput) == 0x000000, "Member 'CraftList_C_SetCancelLock__DelegateSignature::LockInput' has a wrong offset!");

// Function CraftList.CraftList_C.SetColorChangeMoney__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct CraftList_C_SetColorChangeMoney__DelegateSignature final
{
public:
	bool                                          WhiteColor;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CraftList_C_SetColorChangeMoney__DelegateSignature) == 0x000001, "Wrong alignment on CraftList_C_SetColorChangeMoney__DelegateSignature");
static_assert(sizeof(CraftList_C_SetColorChangeMoney__DelegateSignature) == 0x000001, "Wrong size on CraftList_C_SetColorChangeMoney__DelegateSignature");
static_assert(offsetof(CraftList_C_SetColorChangeMoney__DelegateSignature, WhiteColor) == 0x000000, "Member 'CraftList_C_SetColorChangeMoney__DelegateSignature::WhiteColor' has a wrong offset!");

// Function CraftList.CraftList_C.ExecuteUbergraph_CraftList
// 0x09F0 (0x09F0 - 0x0000)
struct CraftList_C_ExecuteUbergraph_CraftList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5266[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FCharacterCraftRecepi>          K2Node_CustomEvent_InputPin;                       // 0x0008(0x0010)(ConstParm, ReferenceParm)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0018(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0040(0x0028)()
	struct FCharacterCraftRecepi                  K2Node_CustomEvent_SelectRecepi;                   // 0x0068(0x0008)(NoDestructor)
	class UCraftRecepiItem_C*                     K2Node_CustomEvent_SelectedItem_1;                 // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindCraftMaster_bIsValid;                 // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5267[0x6];                                     // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftMasterData                       CallFunc_FindCraftMaster_CraftMaster;              // 0x0080(0x0088)()
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindCraftMaster_bIsValid_1;               // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5268[0x6];                                     // 0x010A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftMasterData                       CallFunc_FindCraftMaster_CraftMaster_1;            // 0x0110(0x0088)()
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5269[0x3];                                     // 0x0199(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate;              // 0x019C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x01AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_526A[0x3];                                     // 0x01AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_1;            // 0x01B0(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 K2Node_CustomEvent_SelectedItem;                   // 0x01C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_CustomEvent_SelectionType;                  // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_526B[0x3];                                     // 0x01D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const class FString& SelectedItem, ESelectInfo SelectionType)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x01D4(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_526C[0x4];                                     // 0x01E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_526D[0x7];                                     // 0x01F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerCraftComponent*                CallFunc_GetCraftComponent_ReturnValue;            // 0x0200(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_isRecepiMaterialLocked_OutIsLocked;       // 0x0209(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EDialogResult                                 K2Node_CustomEvent_Result_5;                       // 0x020A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_526E[0x5];                                     // 0x020B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           CallFunc_ShowRedayCheckYesNoDialog_OutIsDialog;    // 0x0210(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_526F[0x7];                                     // 0x0219(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue;                       // 0x0220(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMoney_ReturnValue;                     // 0x0228(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5270[0x4];                                     // 0x022C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_SelectedItem;           // 0x0230(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   K2Node_ComponentBoundEvent_SelectionType;          // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5271[0x3];                                     // 0x0241(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_3;            // 0x0244(0x0010)(ZeroConstructor, NoDestructor)
	ESBWeaponType                                 CallFunc_Map_Find_Value;                           // 0x0254(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0255(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5272[0x2];                                     // 0x0256(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_ComponentBoundEvent_Now;                    // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x025C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCraftable_bIsCraftable;                 // 0x025D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x025E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5273[0x1];                                     // 0x025F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 CallFunc_IsUseToken_UseToken;                      // 0x0260(0x0010)(ReferenceParm)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          CallFunc_Map_Find_Value_1;                         // 0x0278(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0279(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5274[0x6];                                     // 0x027A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerCraftComponent*                CallFunc_GetCraftComponent_ReturnValue_1;          // 0x0280(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCharacterCraftRecepi>          CallFunc_GetPlayerRecepi_ReturnValue;              // 0x0288(0x0010)(ReferenceParm)
	TArray<struct FFilterGroup>                   K2Node_ComponentBoundEvent_Filters;                // 0x0298(0x0010)(ReferenceParm)
	class APawn*                                  CallFunc_GetOwningPlayerPawn_ReturnValue;          // 0x02A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     K2Node_DynamicCast_AsSBPlayer_Character;           // 0x02B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAdminHide_ReturnValue;                  // 0x02B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5275[0x2];                                     // 0x02BA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_CalclateMoney_ReturnValue;                // 0x02BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CalclateMoney_bIsDiscount;                // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x02C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x02C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x02C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCraftable_bIsCraftable_1;               // 0x02C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5276[0x3];                                     // 0x02C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x02C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_2;      // 0x02D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x02D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5277[0x6];                                     // 0x02DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerCraftComponent*                CallFunc_GetCraftComponent_ReturnValue_2;          // 0x02E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerCraftComponent*                CallFunc_GetCraftComponent_ReturnValue_3;          // 0x02E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ErrorCode_1;                    // 0x02F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsSuccess;                      // 0x02F4(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_isCritical_1;                   // 0x02F5(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5278[0x2];                                     // 0x02F6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_ItemUniqueId;                   // 0x02F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_TotalAmount_1;                  // 0x0308(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_SaleAmount_1;                   // 0x030C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_SaleProfits_1;                  // 0x0310(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_ErrorCode;                      // 0x0314(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_isCritical;                     // 0x0318(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5279[0x7];                                     // 0x0319(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         K2Node_CustomEvent_ItemUniqueids;                  // 0x0320(0x0010)(ConstParm, ReferenceParm)
	int32                                         K2Node_CustomEvent_CriticalNum;                    // 0x0330(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_isFail;                         // 0x0334(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_527A[0x3];                                     // 0x0335(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_TotalAmount;                    // 0x0338(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_527B[0x4];                                     // 0x033C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<bool>                                  K2Node_CustomEvent_Criticals;                      // 0x0340(0x0010)(ConstParm, ReferenceParm)
	int32                                         K2Node_CustomEvent_SaleAmount;                     // 0x0350(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_SaleProfits;                    // 0x0354(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0358(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0359(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x035A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_527C[0x5];                                     // 0x035B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue_1;                     // 0x0360(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0368(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_527D[0x3];                                     // 0x0369(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_Selected;                       // 0x036C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0370(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_isItemRecepi_IsItem;                      // 0x0371(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_527E[0x2];                                     // 0x0372(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetMoney_ReturnValue_1;                   // 0x0374(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsMeetDemand_MeetDemand;                  // 0x0378(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_527F[0x7];                                     // 0x0379(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0380(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_4;            // 0x0390(0x0010)(ZeroConstructor, NoDestructor)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x03A0(0x0018)()
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue_2;                     // 0x03B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDialogResult                                 K2Node_CustomEvent_Result_4;                       // 0x03C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x03C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5280[0x2];                                     // 0x03C2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x03C4(0x0010)(ZeroConstructor, NoDestructor)
	ESBClassType                                  CallFunc_GetClassType_ReturnValue;                 // 0x03D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5281[0x3];                                     // 0x03D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UEquipmentDiffDialog_C*                 CallFunc_Create_ReturnValue_3;                     // 0x03D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindCraftMaster_bIsValid_2;               // 0x03E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5282[0x7];                                     // 0x03E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftMasterData                       CallFunc_FindCraftMaster_CraftMaster_2;            // 0x03E8(0x0088)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0470(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDialogResult                                 K2Node_CustomEvent_Result_3;                       // 0x0471(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0472(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5283[0x1];                                     // 0x0473(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;            // 0x0474(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_5284[0x4];                                     // 0x0484(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UProbabilityDisplay_C*                  CallFunc_Create_ReturnValue_4;                     // 0x0488(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 InRetCode)>              K2Node_CreateDelegate_OutputDelegate_7;            // 0x0490(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x04A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	EItemType                                     Temp_byte_Variable_2;                              // 0x04B0(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5285[0x7];                                     // 0x04B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x04B8(0x0018)()
	EItemType                                     Temp_byte_Variable_3;                              // 0x04D0(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5286[0x7];                                     // 0x04D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x04D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x04E8(0x0018)()
	bool                                          Temp_bool_Variable_1;                              // 0x0500(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5287[0x3];                                     // 0x0501(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_CalclateMoney_ReturnValue_1;              // 0x0504(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CalclateMoney_bIsDiscount_1;              // 0x0508(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0509(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5288[0x6];                                     // 0x050A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x0510(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0518(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5289[0x7];                                     // 0x0519(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue_5;                     // 0x0520(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0528(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x052C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EItemType                                     K2Node_Select_Default_1;                           // 0x052D(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_528A[0x2];                                     // 0x052E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetSlackNum_ReturnValue;                  // 0x0530(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_4;                              // 0x0534(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0535(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_528B[0x2];                                     // 0x0536(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue_6;                     // 0x0538(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x0540(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_528C[0x4];                                     // 0x0544(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_3;           // 0x0548(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x0558(0x0018)()
	bool                                          CallFunc_FindWeaponMaster_bIsValid;                // 0x0570(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_528D[0x7];                                     // 0x0571(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_FindWeaponMaster_WeaponMaster;            // 0x0578(0x00B0)()
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0628(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_2;                           // 0x062C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x0630(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x0631(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_528E[0x2];                                     // 0x0632(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetMoney_ReturnValue_2;                   // 0x0634(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0638(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_CalclateMoney_ReturnValue_2;              // 0x0648(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CalclateMoney_bIsDiscount_2;              // 0x064C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_528F[0x3];                                     // 0x064D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0650(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_3;           // 0x0660(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_5;                              // 0x0661(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0662(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5290[0x5];                                     // 0x0663(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0668(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_3;      // 0x0670(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBConfigSaveDataResult                       CallFunc_SaveCommonSaveData_ReturnValue;           // 0x0678(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5291[0x7];                                     // 0x0679(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerRewardBoostComponent*          CallFunc_GetRewardBoostComponent_ReturnValue;      // 0x0680(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InRetCode;                      // 0x0688(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x068C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_3;                           // 0x068D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindCraftMaster_bIsValid_3;               // 0x068E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5292[0x1];                                     // 0x068F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftMasterData                       CallFunc_FindCraftMaster_CraftMaster_3;            // 0x0690(0x0088)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0718(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;                    // 0x0740(0x0028)()
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_8;            // 0x0768(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_9;            // 0x0778(0x0010)(ZeroConstructor, NoDestructor)
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue_7;                     // 0x0788(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x0790(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x0791(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindCharacterEquipmentItem_bIsValid;      // 0x0792(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5293[0x5];                                     // 0x0793(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_FindCharacterEquipmentItem_ReturnValue;   // 0x0798(0x0118)(ConstParm)
	int32                                         CallFunc_GetSelectStorageNo_StorageNo;             // 0x08B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x08B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x08B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5294[0x2];                                     // 0x08B6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EDialogResult Result)>         K2Node_CreateDelegate_OutputDelegate_10;           // 0x08B8(0x0010)(ZeroConstructor, NoDestructor)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x08C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCraftRecepiDesc_C*                     CallFunc_Create_ReturnValue_8;                     // 0x08D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x08D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IfMeetDemand_MeetDemand;                  // 0x08D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x08DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDialogResult                                 K2Node_CustomEvent_Result_2;                       // 0x08DB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x08DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5295[0x3];                                     // 0x08DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue_9;                     // 0x08E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_4;           // 0x08E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x08F8(0x0018)()
	int32                                         Temp_int_Variable;                                 // 0x0910(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0914(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_SetValue_SetedValue;                      // 0x0918(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue_1;            // 0x091C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x0920(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_4;           // 0x0921(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5296[0x2];                                     // 0x0922(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_4;                           // 0x0924(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDialogResult                                 K2Node_CustomEvent_Result_1;                       // 0x0928(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5297[0x3];                                     // 0x0929(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_2;                               // 0x092C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x0930(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5298[0x7];                                     // 0x0931(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_5;           // 0x0938(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x0948(0x0018)()
	int32                                         Temp_int_Variable_3;                               // 0x0960(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasConditionItem_ReturnValue;             // 0x0964(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0965(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5299[0x2];                                     // 0x0966(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_5;                           // 0x0968(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_5;                              // 0x096C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_6;                              // 0x096D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_6;                           // 0x096E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_7;                           // 0x096F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_6;           // 0x0970(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_7;                              // 0x0980(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_529A[0x7];                                     // 0x0981(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x0988(0x0018)()
	EDialogResult                                 K2Node_CustomEvent_Result;                         // 0x09A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_4;            // 0x09A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_6;        // 0x09A2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_5;            // 0x09A3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidLimitedRecepi_ReturnValue;           // 0x09A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_8;                           // 0x09A5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_529B[0x2];                                     // 0x09A6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 ErrorCode, bool IsCritical, TArray<class FString>& ItemUniqueids, int32 CriticalNum, bool IsFail, int32 TotalAmount, TArray<bool>& Criticals, int32 SaleAmount, int32 SaleProfits)> K2Node_CreateDelegate_OutputDelegate_11;           // 0x09A8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked;             // 0x09B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetConfigSaveManager_IsValid_1;           // 0x09B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_529C[0x6];                                     // 0x09BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue_1;       // 0x09C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 ErrorCode, bool IsSuccess, bool IsCritical, const class FString& ItemUniqueId, int32 TotalAmount, int32 SaleAmount, int32 SaleProfits)> K2Node_CreateDelegate_OutputDelegate_12;           // 0x09C8(0x0010)(ZeroConstructor, NoDestructor)
	ESBItemSortType                               CallFunc_ConvertSaveType_SaveType;                 // 0x09D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_529D[0x7];                                     // 0x09D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue_1;             // 0x09E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftList_C_ExecuteUbergraph_CraftList) == 0x000008, "Wrong alignment on CraftList_C_ExecuteUbergraph_CraftList");
static_assert(sizeof(CraftList_C_ExecuteUbergraph_CraftList) == 0x0009F0, "Wrong size on CraftList_C_ExecuteUbergraph_CraftList");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, EntryPoint) == 0x000000, "Member 'CraftList_C_ExecuteUbergraph_CraftList::EntryPoint' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_CustomEvent_InputPin) == 0x000008, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_CustomEvent_InputPin' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_MakeStruct_SlateColor) == 0x000018, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_MakeStruct_SlateColor_1) == 0x000040, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_CustomEvent_SelectRecepi) == 0x000068, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_CustomEvent_SelectRecepi' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_CustomEvent_SelectedItem_1) == 0x000070, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_CustomEvent_SelectedItem_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_IsValid_ReturnValue) == 0x000078, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_FindCraftMaster_bIsValid) == 0x000079, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_FindCraftMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_FindCraftMaster_CraftMaster) == 0x000080, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_FindCraftMaster_CraftMaster' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_Not_PreBool_ReturnValue) == 0x000108, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_FindCraftMaster_bIsValid_1) == 0x000109, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_FindCraftMaster_bIsValid_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_FindCraftMaster_CraftMaster_1) == 0x000110, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_FindCraftMaster_CraftMaster_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_IsValid_ReturnValue_1) == 0x000198, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_CreateDelegate_OutputDelegate) == 0x00019C, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_IsValid_ReturnValue_2) == 0x0001AC, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_CreateDelegate_OutputDelegate_1) == 0x0001B0, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_CustomEvent_SelectedItem) == 0x0001C0, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_CustomEvent_SelectedItem' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_CustomEvent_SelectionType) == 0x0001D0, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_CustomEvent_SelectionType' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_CreateDelegate_OutputDelegate_2) == 0x0001D4, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_GetPlayerController_ReturnValue) == 0x0001E8, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x0001F0, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_DynamicCast_bSuccess) == 0x0001F8, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_GetCraftComponent_ReturnValue) == 0x000200, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_GetCraftComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_MakeLiteralByte_ReturnValue) == 0x000208, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_isRecepiMaterialLocked_OutIsLocked) == 0x000209, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_isRecepiMaterialLocked_OutIsLocked' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_CustomEvent_Result_5) == 0x00020A, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_CustomEvent_Result_5' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_ShowRedayCheckYesNoDialog_OutIsDialog) == 0x000210, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_ShowRedayCheckYesNoDialog_OutIsDialog' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000218, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_Create_ReturnValue) == 0x000220, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_GetMoney_ReturnValue) == 0x000228, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_GetMoney_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_ComponentBoundEvent_SelectedItem) == 0x000230, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_ComponentBoundEvent_SelectedItem' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_ComponentBoundEvent_SelectionType) == 0x000240, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_ComponentBoundEvent_SelectionType' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_CreateDelegate_OutputDelegate_3) == 0x000244, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_Map_Find_Value) == 0x000254, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_Map_Find_ReturnValue) == 0x000255, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_ComponentBoundEvent_Now) == 0x000258, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_ComponentBoundEvent_Now' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_Greater_IntInt_ReturnValue) == 0x00025C, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_IsCraftable_bIsCraftable) == 0x00025D, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_IsCraftable_bIsCraftable' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_IsValid_ReturnValue_3) == 0x00025E, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_IsUseToken_UseToken) == 0x000260, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_IsUseToken_UseToken' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_GetSBPlayerController_ReturnValue) == 0x000270, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_Map_Find_Value_1) == 0x000278, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_Map_Find_ReturnValue_1) == 0x000279, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_GetCraftComponent_ReturnValue_1) == 0x000280, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_GetCraftComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_GetPlayerRecepi_ReturnValue) == 0x000288, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_GetPlayerRecepi_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_ComponentBoundEvent_Filters) == 0x000298, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_ComponentBoundEvent_Filters' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_GetOwningPlayerPawn_ReturnValue) == 0x0002A8, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_GetOwningPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_DynamicCast_AsSBPlayer_Character) == 0x0002B0, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_DynamicCast_AsSBPlayer_Character' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_DynamicCast_bSuccess_1) == 0x0002B8, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_IsAdminHide_ReturnValue) == 0x0002B9, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_IsAdminHide_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_CalclateMoney_ReturnValue) == 0x0002BC, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_CalclateMoney_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_CalclateMoney_bIsDiscount) == 0x0002C0, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_CalclateMoney_bIsDiscount' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_Not_PreBool_ReturnValue_1) == 0x0002C1, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0002C2, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_BooleanAND_ReturnValue) == 0x0002C3, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_IsCraftable_bIsCraftable_1) == 0x0002C4, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_IsCraftable_bIsCraftable_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x0002C8, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_GetSBPlayerController_ReturnValue_2) == 0x0002D0, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_GetSBPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_IsValid_ReturnValue_4) == 0x0002D8, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_IsValid_ReturnValue_5) == 0x0002D9, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_GetCraftComponent_ReturnValue_2) == 0x0002E0, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_GetCraftComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_GetCraftComponent_ReturnValue_3) == 0x0002E8, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_GetCraftComponent_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_CustomEvent_ErrorCode_1) == 0x0002F0, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_CustomEvent_ErrorCode_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_CustomEvent_IsSuccess) == 0x0002F4, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_CustomEvent_IsSuccess' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_CustomEvent_isCritical_1) == 0x0002F5, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_CustomEvent_isCritical_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_CustomEvent_ItemUniqueId) == 0x0002F8, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_CustomEvent_ItemUniqueId' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_CustomEvent_TotalAmount_1) == 0x000308, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_CustomEvent_TotalAmount_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_CustomEvent_SaleAmount_1) == 0x00030C, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_CustomEvent_SaleAmount_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_CustomEvent_SaleProfits_1) == 0x000310, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_CustomEvent_SaleProfits_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_CustomEvent_ErrorCode) == 0x000314, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_CustomEvent_ErrorCode' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_CustomEvent_isCritical) == 0x000318, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_CustomEvent_isCritical' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_CustomEvent_ItemUniqueids) == 0x000320, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_CustomEvent_ItemUniqueids' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_CustomEvent_CriticalNum) == 0x000330, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_CustomEvent_CriticalNum' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_CustomEvent_isFail) == 0x000334, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_CustomEvent_isFail' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_CustomEvent_TotalAmount) == 0x000338, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_CustomEvent_TotalAmount' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_CustomEvent_Criticals) == 0x000340, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_CustomEvent_Criticals' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_CustomEvent_SaleAmount) == 0x000350, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_CustomEvent_SaleAmount' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_CustomEvent_SaleProfits) == 0x000354, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_CustomEvent_SaleProfits' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, Temp_byte_Variable) == 0x000358, "Member 'CraftList_C_ExecuteUbergraph_CraftList::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, Temp_byte_Variable_1) == 0x000359, "Member 'CraftList_C_ExecuteUbergraph_CraftList::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, Temp_bool_Variable) == 0x00035A, "Member 'CraftList_C_ExecuteUbergraph_CraftList::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_Create_ReturnValue_1) == 0x000360, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_Select_Default) == 0x000368, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_CustomEvent_Selected) == 0x00036C, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_CustomEvent_Selected' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000370, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_isItemRecepi_IsItem) == 0x000371, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_isItemRecepi_IsItem' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_GetMoney_ReturnValue_1) == 0x000374, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_GetMoney_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_IsMeetDemand_MeetDemand) == 0x000378, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_IsMeetDemand_MeetDemand' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_GetTextFromAsset_ReturnValue) == 0x000380, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_CreateDelegate_OutputDelegate_4) == 0x000390, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_Conv_StringToText_ReturnValue) == 0x0003A0, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_Create_ReturnValue_2) == 0x0003B8, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_CustomEvent_Result_4) == 0x0003C0, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_CustomEvent_Result_4' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0003C1, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_CreateDelegate_OutputDelegate_5) == 0x0003C4, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_GetClassType_ReturnValue) == 0x0003D4, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_GetClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_Create_ReturnValue_3) == 0x0003D8, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_Create_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_FindCraftMaster_bIsValid_2) == 0x0003E0, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_FindCraftMaster_bIsValid_2' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_FindCraftMaster_CraftMaster_2) == 0x0003E8, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_FindCraftMaster_CraftMaster_2' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000470, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_CustomEvent_Result_3) == 0x000471, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_CustomEvent_Result_3' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000472, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_CreateDelegate_OutputDelegate_6) == 0x000474, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_Create_ReturnValue_4) == 0x000488, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_Create_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_CreateDelegate_OutputDelegate_7) == 0x000490, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x0004A0, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, Temp_byte_Variable_2) == 0x0004B0, "Member 'CraftList_C_ExecuteUbergraph_CraftList::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0004B8, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, Temp_byte_Variable_3) == 0x0004D0, "Member 'CraftList_C_ExecuteUbergraph_CraftList::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x0004D8, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0004E8, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, Temp_bool_Variable_1) == 0x000500, "Member 'CraftList_C_ExecuteUbergraph_CraftList::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_CalclateMoney_ReturnValue_1) == 0x000504, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_CalclateMoney_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_CalclateMoney_bIsDiscount_1) == 0x000508, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_CalclateMoney_bIsDiscount_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000509, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_GetStorage_ReturnValue) == 0x000510, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_BooleanAND_ReturnValue_1) == 0x000518, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_Create_ReturnValue_5) == 0x000520, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_Create_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_Add_IntInt_ReturnValue) == 0x000528, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, Temp_bool_Variable_2) == 0x00052C, "Member 'CraftList_C_ExecuteUbergraph_CraftList::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_Select_Default_1) == 0x00052D, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_GetSlackNum_ReturnValue) == 0x000530, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_GetSlackNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, Temp_byte_Variable_4) == 0x000534, "Member 'CraftList_C_ExecuteUbergraph_CraftList::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000535, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_Create_ReturnValue_6) == 0x000538, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_Create_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_SelectInt_ReturnValue) == 0x000540, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_GetTextFromAsset_ReturnValue_3) == 0x000548, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_GetTextFromAsset_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_Conv_StringToText_ReturnValue_3) == 0x000558, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_FindWeaponMaster_bIsValid) == 0x000570, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_FindWeaponMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_FindWeaponMaster_WeaponMaster) == 0x000578, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_FindWeaponMaster_WeaponMaster' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_Multiply_IntInt_ReturnValue) == 0x000628, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_Select_Default_2) == 0x00062C, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x000630, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_LessEqual_IntInt_ReturnValue_2) == 0x000631, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_LessEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_GetMoney_ReturnValue_2) == 0x000634, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_GetMoney_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_GetCharacterId_ReturnValue) == 0x000638, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_CalclateMoney_ReturnValue_2) == 0x000648, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_CalclateMoney_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_CalclateMoney_bIsDiscount_2) == 0x00064C, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_CalclateMoney_bIsDiscount_2' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_GetPlayerId_ReturnValue) == 0x000650, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_LessEqual_IntInt_ReturnValue_3) == 0x000660, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_LessEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, Temp_byte_Variable_5) == 0x000661, "Member 'CraftList_C_ExecuteUbergraph_CraftList::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_GetConfigSaveManager_IsValid) == 0x000662, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000668, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_GetSBPlayerController_ReturnValue_3) == 0x000670, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_GetSBPlayerController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_SaveCommonSaveData_ReturnValue) == 0x000678, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_SaveCommonSaveData_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_GetRewardBoostComponent_ReturnValue) == 0x000680, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_GetRewardBoostComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_CustomEvent_InRetCode) == 0x000688, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_CustomEvent_InRetCode' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, Temp_bool_Variable_3) == 0x00068C, "Member 'CraftList_C_ExecuteUbergraph_CraftList::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_Select_Default_3) == 0x00068D, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_FindCraftMaster_bIsValid_3) == 0x00068E, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_FindCraftMaster_bIsValid_3' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_FindCraftMaster_CraftMaster_3) == 0x000690, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_FindCraftMaster_CraftMaster_3' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_MakeStruct_SlateColor_2) == 0x000718, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_MakeStruct_SlateColor_3) == 0x000740, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_MakeStruct_SlateColor_3' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_CreateDelegate_OutputDelegate_8) == 0x000768, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_CreateDelegate_OutputDelegate_9) == 0x000778, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_Create_ReturnValue_7) == 0x000788, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_Create_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_IsValid_ReturnValue_6) == 0x000790, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_IsValid_ReturnValue_7) == 0x000791, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_FindCharacterEquipmentItem_bIsValid) == 0x000792, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_FindCharacterEquipmentItem_bIsValid' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_FindCharacterEquipmentItem_ReturnValue) == 0x000798, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_FindCharacterEquipmentItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_GetSelectStorageNo_StorageNo) == 0x0008B0, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_GetSelectStorageNo_StorageNo' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_IsValid_ReturnValue_8) == 0x0008B4, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_IsValid_ReturnValue_9) == 0x0008B5, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_CreateDelegate_OutputDelegate_10) == 0x0008B8, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_AddChild_ReturnValue) == 0x0008C8, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_Create_ReturnValue_8) == 0x0008D0, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_Create_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x0008D8, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_IfMeetDemand_MeetDemand) == 0x0008D9, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_IfMeetDemand_MeetDemand' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x0008DA, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_CustomEvent_Result_2) == 0x0008DB, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_CustomEvent_Result_2' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x0008DC, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_Create_ReturnValue_9) == 0x0008E0, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_Create_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_GetTextFromAsset_ReturnValue_4) == 0x0008E8, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_GetTextFromAsset_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_Conv_StringToText_ReturnValue_4) == 0x0008F8, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, Temp_int_Variable) == 0x000910, "Member 'CraftList_C_ExecuteUbergraph_CraftList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, Temp_int_Variable_1) == 0x000914, "Member 'CraftList_C_ExecuteUbergraph_CraftList::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_SetValue_SetedValue) == 0x000918, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_SetValue_SetedValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_Multiply_IntInt_ReturnValue_1) == 0x00091C, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_Multiply_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, Temp_bool_Variable_4) == 0x000920, "Member 'CraftList_C_ExecuteUbergraph_CraftList::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_LessEqual_IntInt_ReturnValue_4) == 0x000921, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_LessEqual_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_Select_Default_4) == 0x000924, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_CustomEvent_Result_1) == 0x000928, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_CustomEvent_Result_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, Temp_int_Variable_2) == 0x00092C, "Member 'CraftList_C_ExecuteUbergraph_CraftList::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_EqualEqual_ByteByte_ReturnValue_5) == 0x000930, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_EqualEqual_ByteByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_GetTextFromAsset_ReturnValue_5) == 0x000938, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_GetTextFromAsset_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_Conv_StringToText_ReturnValue_5) == 0x000948, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, Temp_int_Variable_3) == 0x000960, "Member 'CraftList_C_ExecuteUbergraph_CraftList::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_HasConditionItem_ReturnValue) == 0x000964, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_HasConditionItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_Not_PreBool_ReturnValue_2) == 0x000965, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_Select_Default_5) == 0x000968, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, Temp_bool_Variable_5) == 0x00096C, "Member 'CraftList_C_ExecuteUbergraph_CraftList::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, Temp_bool_Variable_6) == 0x00096D, "Member 'CraftList_C_ExecuteUbergraph_CraftList::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_Select_Default_6) == 0x00096E, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_Select_Default_6' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_Select_Default_7) == 0x00096F, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_Select_Default_7' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_GetTextFromAsset_ReturnValue_6) == 0x000970, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_GetTextFromAsset_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, Temp_bool_Variable_7) == 0x000980, "Member 'CraftList_C_ExecuteUbergraph_CraftList::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_Conv_StringToText_ReturnValue_6) == 0x000988, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_CustomEvent_Result) == 0x0009A0, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_MakeLiteralByte_ReturnValue_4) == 0x0009A1, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_MakeLiteralByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_EqualEqual_ByteByte_ReturnValue_6) == 0x0009A2, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_EqualEqual_ByteByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_MakeLiteralByte_ReturnValue_5) == 0x0009A3, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_MakeLiteralByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_ValidLimitedRecepi_ReturnValue) == 0x0009A4, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_ValidLimitedRecepi_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_Select_Default_8) == 0x0009A5, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_Select_Default_8' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_CreateDelegate_OutputDelegate_11) == 0x0009A8, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_ComponentBoundEvent_bIsChecked) == 0x0009B8, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_ComponentBoundEvent_bIsChecked' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_GetConfigSaveManager_IsValid_1) == 0x0009B9, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_GetConfigSaveManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_GetConfigSaveManager_ReturnValue_1) == 0x0009C0, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_GetConfigSaveManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, K2Node_CreateDelegate_OutputDelegate_12) == 0x0009C8, "Member 'CraftList_C_ExecuteUbergraph_CraftList::K2Node_CreateDelegate_OutputDelegate_12' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_ConvertSaveType_SaveType) == 0x0009D8, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_ConvertSaveType_SaveType' has a wrong offset!");
static_assert(offsetof(CraftList_C_ExecuteUbergraph_CraftList, CallFunc_GetCharacterId_ReturnValue_1) == 0x0009E0, "Member 'CraftList_C_ExecuteUbergraph_CraftList::CallFunc_GetCharacterId_ReturnValue_1' has a wrong offset!");

// Function CraftList.CraftList_C.BndEvt__CraftList_CB_Craftable_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct CraftList_C_BndEvt__CraftList_CB_Craftable_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CraftList_C_BndEvt__CraftList_CB_Craftable_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on CraftList_C_BndEvt__CraftList_CB_Craftable_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(CraftList_C_BndEvt__CraftList_CB_Craftable_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on CraftList_C_BndEvt__CraftList_CB_Craftable_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(CraftList_C_BndEvt__CraftList_CB_Craftable_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'CraftList_C_BndEvt__CraftList_CB_Craftable_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function CraftList.CraftList_C.OnConditionCreated
// 0x0001 (0x0001 - 0x0000)
struct CraftList_C_OnConditionCreated final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftList_C_OnConditionCreated) == 0x000001, "Wrong alignment on CraftList_C_OnConditionCreated");
static_assert(sizeof(CraftList_C_OnConditionCreated) == 0x000001, "Wrong size on CraftList_C_OnConditionCreated");
static_assert(offsetof(CraftList_C_OnConditionCreated, Result) == 0x000000, "Member 'CraftList_C_OnConditionCreated::Result' has a wrong offset!");

// Function CraftList.CraftList_C.OnOverflowAccepted
// 0x0001 (0x0001 - 0x0000)
struct CraftList_C_OnOverflowAccepted final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftList_C_OnOverflowAccepted) == 0x000001, "Wrong alignment on CraftList_C_OnOverflowAccepted");
static_assert(sizeof(CraftList_C_OnOverflowAccepted) == 0x000001, "Wrong size on CraftList_C_OnOverflowAccepted");
static_assert(offsetof(CraftList_C_OnOverflowAccepted, Result) == 0x000000, "Member 'CraftList_C_OnOverflowAccepted::Result' has a wrong offset!");

// Function CraftList.CraftList_C.OnDialogClosed
// 0x0001 (0x0001 - 0x0000)
struct CraftList_C_OnDialogClosed final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftList_C_OnDialogClosed) == 0x000001, "Wrong alignment on CraftList_C_OnDialogClosed");
static_assert(sizeof(CraftList_C_OnDialogClosed) == 0x000001, "Wrong size on CraftList_C_OnDialogClosed");
static_assert(offsetof(CraftList_C_OnDialogClosed, Result) == 0x000000, "Member 'CraftList_C_OnDialogClosed::Result' has a wrong offset!");

// Function CraftList.CraftList_C.OnCompletGetRewardBoost
// 0x0004 (0x0004 - 0x0000)
struct CraftList_C_OnCompletGetRewardBoost final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftList_C_OnCompletGetRewardBoost) == 0x000004, "Wrong alignment on CraftList_C_OnCompletGetRewardBoost");
static_assert(sizeof(CraftList_C_OnCompletGetRewardBoost) == 0x000004, "Wrong size on CraftList_C_OnCompletGetRewardBoost");
static_assert(offsetof(CraftList_C_OnCompletGetRewardBoost, InRetCode) == 0x000000, "Member 'CraftList_C_OnCompletGetRewardBoost::InRetCode' has a wrong offset!");

// Function CraftList.CraftList_C.OnCloseClassCheck
// 0x0001 (0x0001 - 0x0000)
struct CraftList_C_OnCloseClassCheck final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftList_C_OnCloseClassCheck) == 0x000001, "Wrong alignment on CraftList_C_OnCloseClassCheck");
static_assert(sizeof(CraftList_C_OnCloseClassCheck) == 0x000001, "Wrong size on CraftList_C_OnCloseClassCheck");
static_assert(offsetof(CraftList_C_OnCloseClassCheck, Result) == 0x000000, "Member 'CraftList_C_OnCloseClassCheck::Result' has a wrong offset!");

// Function CraftList.CraftList_C.OnTokenDemanded
// 0x0001 (0x0001 - 0x0000)
struct CraftList_C_OnTokenDemanded final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftList_C_OnTokenDemanded) == 0x000001, "Wrong alignment on CraftList_C_OnTokenDemanded");
static_assert(sizeof(CraftList_C_OnTokenDemanded) == 0x000001, "Wrong size on CraftList_C_OnTokenDemanded");
static_assert(offsetof(CraftList_C_OnTokenDemanded, Result) == 0x000000, "Member 'CraftList_C_OnTokenDemanded::Result' has a wrong offset!");

// Function CraftList.CraftList_C.OnSelected
// 0x0004 (0x0004 - 0x0000)
struct CraftList_C_OnSelected final
{
public:
	int32                                         Selected;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftList_C_OnSelected) == 0x000004, "Wrong alignment on CraftList_C_OnSelected");
static_assert(sizeof(CraftList_C_OnSelected) == 0x000004, "Wrong size on CraftList_C_OnSelected");
static_assert(offsetof(CraftList_C_OnSelected, Selected) == 0x000000, "Member 'CraftList_C_OnSelected::Selected' has a wrong offset!");

// Function CraftList.CraftList_C.OnCompl_Multi
// 0x0040 (0x0040 - 0x0000)
struct CraftList_C_OnCompl_Multi final
{
public:
	int32                                         ErrorCode;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCritical;                                        // 0x0004(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_529E[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         ItemUniqueids;                                     // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         CriticalNum;                                       // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFail;                                            // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_529F[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TotalAmount;                                       // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52A0[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<bool>                                  Criticals;                                         // 0x0028(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         SaleAmount;                                        // 0x0038(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SaleProfits;                                       // 0x003C(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftList_C_OnCompl_Multi) == 0x000008, "Wrong alignment on CraftList_C_OnCompl_Multi");
static_assert(sizeof(CraftList_C_OnCompl_Multi) == 0x000040, "Wrong size on CraftList_C_OnCompl_Multi");
static_assert(offsetof(CraftList_C_OnCompl_Multi, ErrorCode) == 0x000000, "Member 'CraftList_C_OnCompl_Multi::ErrorCode' has a wrong offset!");
static_assert(offsetof(CraftList_C_OnCompl_Multi, IsCritical) == 0x000004, "Member 'CraftList_C_OnCompl_Multi::IsCritical' has a wrong offset!");
static_assert(offsetof(CraftList_C_OnCompl_Multi, ItemUniqueids) == 0x000008, "Member 'CraftList_C_OnCompl_Multi::ItemUniqueids' has a wrong offset!");
static_assert(offsetof(CraftList_C_OnCompl_Multi, CriticalNum) == 0x000018, "Member 'CraftList_C_OnCompl_Multi::CriticalNum' has a wrong offset!");
static_assert(offsetof(CraftList_C_OnCompl_Multi, IsFail) == 0x00001C, "Member 'CraftList_C_OnCompl_Multi::IsFail' has a wrong offset!");
static_assert(offsetof(CraftList_C_OnCompl_Multi, TotalAmount) == 0x000020, "Member 'CraftList_C_OnCompl_Multi::TotalAmount' has a wrong offset!");
static_assert(offsetof(CraftList_C_OnCompl_Multi, Criticals) == 0x000028, "Member 'CraftList_C_OnCompl_Multi::Criticals' has a wrong offset!");
static_assert(offsetof(CraftList_C_OnCompl_Multi, SaleAmount) == 0x000038, "Member 'CraftList_C_OnCompl_Multi::SaleAmount' has a wrong offset!");
static_assert(offsetof(CraftList_C_OnCompl_Multi, SaleProfits) == 0x00003C, "Member 'CraftList_C_OnCompl_Multi::SaleProfits' has a wrong offset!");

// Function CraftList.CraftList_C.OnCompl_PlayerRequest
// 0x0028 (0x0028 - 0x0000)
struct CraftList_C_OnCompl_PlayerRequest final
{
public:
	int32                                         ErrorCode;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSuccess;                                         // 0x0004(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsCritical;                                        // 0x0005(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52A1[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ItemUniqueId;                                      // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         TotalAmount;                                       // 0x0018(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SaleAmount;                                        // 0x001C(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SaleProfits;                                       // 0x0020(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftList_C_OnCompl_PlayerRequest) == 0x000008, "Wrong alignment on CraftList_C_OnCompl_PlayerRequest");
static_assert(sizeof(CraftList_C_OnCompl_PlayerRequest) == 0x000028, "Wrong size on CraftList_C_OnCompl_PlayerRequest");
static_assert(offsetof(CraftList_C_OnCompl_PlayerRequest, ErrorCode) == 0x000000, "Member 'CraftList_C_OnCompl_PlayerRequest::ErrorCode' has a wrong offset!");
static_assert(offsetof(CraftList_C_OnCompl_PlayerRequest, IsSuccess) == 0x000004, "Member 'CraftList_C_OnCompl_PlayerRequest::IsSuccess' has a wrong offset!");
static_assert(offsetof(CraftList_C_OnCompl_PlayerRequest, IsCritical) == 0x000005, "Member 'CraftList_C_OnCompl_PlayerRequest::IsCritical' has a wrong offset!");
static_assert(offsetof(CraftList_C_OnCompl_PlayerRequest, ItemUniqueId) == 0x000008, "Member 'CraftList_C_OnCompl_PlayerRequest::ItemUniqueId' has a wrong offset!");
static_assert(offsetof(CraftList_C_OnCompl_PlayerRequest, TotalAmount) == 0x000018, "Member 'CraftList_C_OnCompl_PlayerRequest::TotalAmount' has a wrong offset!");
static_assert(offsetof(CraftList_C_OnCompl_PlayerRequest, SaleAmount) == 0x00001C, "Member 'CraftList_C_OnCompl_PlayerRequest::SaleAmount' has a wrong offset!");
static_assert(offsetof(CraftList_C_OnCompl_PlayerRequest, SaleProfits) == 0x000020, "Member 'CraftList_C_OnCompl_PlayerRequest::SaleProfits' has a wrong offset!");

// Function CraftList.CraftList_C.BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct CraftList_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature final
{
public:
	TArray<struct FFilterGroup>                   Param_Filters;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(CraftList_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature) == 0x000008, "Wrong alignment on CraftList_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature");
static_assert(sizeof(CraftList_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature) == 0x000010, "Wrong size on CraftList_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature");
static_assert(offsetof(CraftList_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature, Param_Filters) == 0x000000, "Member 'CraftList_C_BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature::Param_Filters' has a wrong offset!");

// Function CraftList.CraftList_C.BndEvt__MultipleCraftWidget_K2Node_ComponentBoundEvent_1_OnCreateNumChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct CraftList_C_BndEvt__MultipleCraftWidget_K2Node_ComponentBoundEvent_1_OnCreateNumChanged__DelegateSignature final
{
public:
	int32                                         Now;                                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftList_C_BndEvt__MultipleCraftWidget_K2Node_ComponentBoundEvent_1_OnCreateNumChanged__DelegateSignature) == 0x000004, "Wrong alignment on CraftList_C_BndEvt__MultipleCraftWidget_K2Node_ComponentBoundEvent_1_OnCreateNumChanged__DelegateSignature");
static_assert(sizeof(CraftList_C_BndEvt__MultipleCraftWidget_K2Node_ComponentBoundEvent_1_OnCreateNumChanged__DelegateSignature) == 0x000004, "Wrong size on CraftList_C_BndEvt__MultipleCraftWidget_K2Node_ComponentBoundEvent_1_OnCreateNumChanged__DelegateSignature");
static_assert(offsetof(CraftList_C_BndEvt__MultipleCraftWidget_K2Node_ComponentBoundEvent_1_OnCreateNumChanged__DelegateSignature, Now) == 0x000000, "Member 'CraftList_C_BndEvt__MultipleCraftWidget_K2Node_ComponentBoundEvent_1_OnCreateNumChanged__DelegateSignature::Now' has a wrong offset!");

// Function CraftList.CraftList_C.BndEvt__CategoryDropDown_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct CraftList_C_BndEvt__CategoryDropDown_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature final
{
public:
	class FString                                 Param_SelectedItem;                                // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftList_C_BndEvt__CategoryDropDown_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on CraftList_C_BndEvt__CategoryDropDown_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature");
static_assert(sizeof(CraftList_C_BndEvt__CategoryDropDown_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature) == 0x000018, "Wrong size on CraftList_C_BndEvt__CategoryDropDown_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature");
static_assert(offsetof(CraftList_C_BndEvt__CategoryDropDown_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature, Param_SelectedItem) == 0x000000, "Member 'CraftList_C_BndEvt__CategoryDropDown_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature::Param_SelectedItem' has a wrong offset!");
static_assert(offsetof(CraftList_C_BndEvt__CategoryDropDown_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature, SelectionType) == 0x000010, "Member 'CraftList_C_BndEvt__CategoryDropDown_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature::SelectionType' has a wrong offset!");

// Function CraftList.CraftList_C.EndEasyRedayCheckYesNoDialog
// 0x0001 (0x0001 - 0x0000)
struct CraftList_C_EndEasyRedayCheckYesNoDialog final
{
public:
	EDialogResult                                 Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftList_C_EndEasyRedayCheckYesNoDialog) == 0x000001, "Wrong alignment on CraftList_C_EndEasyRedayCheckYesNoDialog");
static_assert(sizeof(CraftList_C_EndEasyRedayCheckYesNoDialog) == 0x000001, "Wrong size on CraftList_C_EndEasyRedayCheckYesNoDialog");
static_assert(offsetof(CraftList_C_EndEasyRedayCheckYesNoDialog, Result) == 0x000000, "Member 'CraftList_C_EndEasyRedayCheckYesNoDialog::Result' has a wrong offset!");

// Function CraftList.CraftList_C.OnSelectDifficulty
// 0x0018 (0x0018 - 0x0000)
struct CraftList_C_OnSelectDifficulty final
{
public:
	class FString                                 Param_SelectedItem;                                // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESelectInfo                                   SelectionType;                                     // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftList_C_OnSelectDifficulty) == 0x000008, "Wrong alignment on CraftList_C_OnSelectDifficulty");
static_assert(sizeof(CraftList_C_OnSelectDifficulty) == 0x000018, "Wrong size on CraftList_C_OnSelectDifficulty");
static_assert(offsetof(CraftList_C_OnSelectDifficulty, Param_SelectedItem) == 0x000000, "Member 'CraftList_C_OnSelectDifficulty::Param_SelectedItem' has a wrong offset!");
static_assert(offsetof(CraftList_C_OnSelectDifficulty, SelectionType) == 0x000010, "Member 'CraftList_C_OnSelectDifficulty::SelectionType' has a wrong offset!");

// Function CraftList.CraftList_C.OnSelectRecepi
// 0x0010 (0x0010 - 0x0000)
struct CraftList_C_OnSelectRecepi final
{
public:
	struct FCharacterCraftRecepi                  Param_SelectRecepi;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class UCraftRecepiItem_C*                     Param_SelectedItem;                                // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftList_C_OnSelectRecepi) == 0x000008, "Wrong alignment on CraftList_C_OnSelectRecepi");
static_assert(sizeof(CraftList_C_OnSelectRecepi) == 0x000010, "Wrong size on CraftList_C_OnSelectRecepi");
static_assert(offsetof(CraftList_C_OnSelectRecepi, Param_SelectRecepi) == 0x000000, "Member 'CraftList_C_OnSelectRecepi::Param_SelectRecepi' has a wrong offset!");
static_assert(offsetof(CraftList_C_OnSelectRecepi, Param_SelectedItem) == 0x000008, "Member 'CraftList_C_OnSelectRecepi::Param_SelectedItem' has a wrong offset!");

// Function CraftList.CraftList_C.InitList
// 0x0010 (0x0010 - 0x0000)
struct CraftList_C_InitList final
{
public:
	TArray<struct FCharacterCraftRecepi>          InputPin;                                          // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(CraftList_C_InitList) == 0x000008, "Wrong alignment on CraftList_C_InitList");
static_assert(sizeof(CraftList_C_InitList) == 0x000010, "Wrong size on CraftList_C_InitList");
static_assert(offsetof(CraftList_C_InitList, InputPin) == 0x000000, "Member 'CraftList_C_InitList::InputPin' has a wrong offset!");

// Function CraftList.CraftList_C.SetupItemList
// 0x0001 (0x0001 - 0x0000)
struct CraftList_C_SetupItemList final
{
public:
	bool                                          Param_IsWeaponShowed;                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CraftList_C_SetupItemList) == 0x000001, "Wrong alignment on CraftList_C_SetupItemList");
static_assert(sizeof(CraftList_C_SetupItemList) == 0x000001, "Wrong size on CraftList_C_SetupItemList");
static_assert(offsetof(CraftList_C_SetupItemList, Param_IsWeaponShowed) == 0x000000, "Member 'CraftList_C_SetupItemList::Param_IsWeaponShowed' has a wrong offset!");

// Function CraftList.CraftList_C.CreateSortType
// 0x0058 (0x0058 - 0x0000)
struct CraftList_C_CreateSortType final
{
public:
	TArray<int32>                                 SkipIndexes;                                       // 0x0000(0x0010)(Edit, BlueprintVisible)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52A2[0x1];                                     // 0x0013(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52A3[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 K2Node_MakeArray_Array;                            // 0x0038(0x0010)(ReferenceParm)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBItemSortType                               CallFunc_GetRecentSortType_ReturnValue;            // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x004B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          CallFunc_ConvertSortType_UseType;                  // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_4;            // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_5;            // 0x004E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          K2Node_Select_Default;                             // 0x004F(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CraftList_C_CreateSortType) == 0x000008, "Wrong alignment on CraftList_C_CreateSortType");
static_assert(sizeof(CraftList_C_CreateSortType) == 0x000058, "Wrong size on CraftList_C_CreateSortType");
static_assert(offsetof(CraftList_C_CreateSortType, SkipIndexes) == 0x000000, "Member 'CraftList_C_CreateSortType::SkipIndexes' has a wrong offset!");
static_assert(offsetof(CraftList_C_CreateSortType, CallFunc_MakeLiteralByte_ReturnValue) == 0x000010, "Member 'CraftList_C_CreateSortType::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_CreateSortType, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000011, "Member 'CraftList_C_CreateSortType::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_CreateSortType, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000012, "Member 'CraftList_C_CreateSortType::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CraftList_C_CreateSortType, Temp_int_Variable) == 0x000014, "Member 'CraftList_C_CreateSortType::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CraftList_C_CreateSortType, Temp_int_Variable_1) == 0x000018, "Member 'CraftList_C_CreateSortType::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_CreateSortType, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'CraftList_C_CreateSortType::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_CreateSortType, CallFunc_GetTextFromAsset_ReturnValue) == 0x000020, "Member 'CraftList_C_CreateSortType::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_CreateSortType, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000030, "Member 'CraftList_C_CreateSortType::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_CreateSortType, CallFunc_Add_IntInt_ReturnValue_1) == 0x000034, "Member 'CraftList_C_CreateSortType::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_CreateSortType, K2Node_MakeArray_Array) == 0x000038, "Member 'CraftList_C_CreateSortType::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CraftList_C_CreateSortType, CallFunc_Array_Contains_ReturnValue) == 0x000048, "Member 'CraftList_C_CreateSortType::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_CreateSortType, CallFunc_Not_PreBool_ReturnValue) == 0x000049, "Member 'CraftList_C_CreateSortType::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_CreateSortType, CallFunc_GetRecentSortType_ReturnValue) == 0x00004A, "Member 'CraftList_C_CreateSortType::CallFunc_GetRecentSortType_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_CreateSortType, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x00004B, "Member 'CraftList_C_CreateSortType::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CraftList_C_CreateSortType, CallFunc_ConvertSortType_UseType) == 0x00004C, "Member 'CraftList_C_CreateSortType::CallFunc_ConvertSortType_UseType' has a wrong offset!");
static_assert(offsetof(CraftList_C_CreateSortType, CallFunc_MakeLiteralByte_ReturnValue_4) == 0x00004D, "Member 'CraftList_C_CreateSortType::CallFunc_MakeLiteralByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CraftList_C_CreateSortType, CallFunc_MakeLiteralByte_ReturnValue_5) == 0x00004E, "Member 'CraftList_C_CreateSortType::CallFunc_MakeLiteralByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CraftList_C_CreateSortType, K2Node_Select_Default) == 0x00004F, "Member 'CraftList_C_CreateSortType::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CraftList_C_CreateSortType, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000050, "Member 'CraftList_C_CreateSortType::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function CraftList.CraftList_C.FilterItems
// 0x01C0 (0x01C0 - 0x0000)
struct CraftList_C_FilterItems final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_4;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_5;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_6;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52A4[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52A5[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52A6[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCraftableFilterCraftMachine_ReturnValue; // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_7;                              // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_8;                              // 0x004B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52A7[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52A8[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemListData                          CallFunc_Array_Get_Item;                           // 0x0060(0x0090)(HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanXOR_ReturnValue;                   // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00F2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00F3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetWeaponMasterData_IsExists;             // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52A9[0x3];                                     // 0x00F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_GetWeaponMasterData_ReturnValue;          // 0x00F8(0x00B0)()
	bool                                          K2Node_Select_Default;                             // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x01A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x01AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52AA[0x1];                                     // 0x01AB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharacterCraftRecepi                  K2Node_MakeStruct_CharacterCraftRecepi;            // 0x01AC(0x0008)(NoDestructor)
	bool                                          K2Node_Select_Default_1;                           // 0x01B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCraftableRecepi_ReturnValue;            // 0x01B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default_2;                           // 0x01B6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default_3;                           // 0x01B7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x01B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_4;                           // 0x01BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftList_C_FilterItems) == 0x000008, "Wrong alignment on CraftList_C_FilterItems");
static_assert(sizeof(CraftList_C_FilterItems) == 0x0001C0, "Wrong size on CraftList_C_FilterItems");
static_assert(offsetof(CraftList_C_FilterItems, Temp_bool_Variable) == 0x000000, "Member 'CraftList_C_FilterItems::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterItems, Temp_bool_Variable_1) == 0x000001, "Member 'CraftList_C_FilterItems::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterItems, Temp_bool_Variable_2) == 0x000002, "Member 'CraftList_C_FilterItems::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterItems, Temp_bool_Variable_3) == 0x000003, "Member 'CraftList_C_FilterItems::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterItems, Temp_bool_Variable_4) == 0x000004, "Member 'CraftList_C_FilterItems::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterItems, Temp_byte_Variable) == 0x000005, "Member 'CraftList_C_FilterItems::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterItems, Temp_byte_Variable_1) == 0x000006, "Member 'CraftList_C_FilterItems::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterItems, Temp_bool_Variable_5) == 0x000007, "Member 'CraftList_C_FilterItems::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterItems, Temp_bool_Variable_6) == 0x000008, "Member 'CraftList_C_FilterItems::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterItems, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'CraftList_C_FilterItems::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterItems, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'CraftList_C_FilterItems::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterItems, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'CraftList_C_FilterItems::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterItems, CallFunc_GetCharacterId_ReturnValue) == 0x000018, "Member 'CraftList_C_FilterItems::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterItems, CallFunc_GetConfigSaveManager_IsValid) == 0x000028, "Member 'CraftList_C_FilterItems::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterItems, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000030, "Member 'CraftList_C_FilterItems::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterItems, CallFunc_GetMasterDataManager_IsValid) == 0x000038, "Member 'CraftList_C_FilterItems::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterItems, CallFunc_GetMasterDataManager_ReturnValue) == 0x000040, "Member 'CraftList_C_FilterItems::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterItems, CallFunc_IsCraftableFilterCraftMachine_ReturnValue) == 0x000048, "Member 'CraftList_C_FilterItems::CallFunc_IsCraftableFilterCraftMachine_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterItems, Temp_bool_Variable_7) == 0x000049, "Member 'CraftList_C_FilterItems::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterItems, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00004A, "Member 'CraftList_C_FilterItems::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterItems, Temp_bool_Variable_8) == 0x00004B, "Member 'CraftList_C_FilterItems::Temp_bool_Variable_8' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterItems, CallFunc_Greater_IntInt_ReturnValue) == 0x00004C, "Member 'CraftList_C_FilterItems::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterItems, CallFunc_GetChildAt_ReturnValue) == 0x000050, "Member 'CraftList_C_FilterItems::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterItems, CallFunc_Array_Length_ReturnValue) == 0x000058, "Member 'CraftList_C_FilterItems::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterItems, CallFunc_Array_Get_Item) == 0x000060, "Member 'CraftList_C_FilterItems::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterItems, CallFunc_Less_IntInt_ReturnValue) == 0x0000F0, "Member 'CraftList_C_FilterItems::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterItems, CallFunc_BooleanXOR_ReturnValue) == 0x0000F1, "Member 'CraftList_C_FilterItems::CallFunc_BooleanXOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterItems, CallFunc_Not_PreBool_ReturnValue) == 0x0000F2, "Member 'CraftList_C_FilterItems::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterItems, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000F3, "Member 'CraftList_C_FilterItems::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterItems, CallFunc_GetWeaponMasterData_IsExists) == 0x0000F4, "Member 'CraftList_C_FilterItems::CallFunc_GetWeaponMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterItems, CallFunc_GetWeaponMasterData_ReturnValue) == 0x0000F8, "Member 'CraftList_C_FilterItems::CallFunc_GetWeaponMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterItems, K2Node_Select_Default) == 0x0001A8, "Member 'CraftList_C_FilterItems::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterItems, CallFunc_BooleanAND_ReturnValue) == 0x0001A9, "Member 'CraftList_C_FilterItems::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterItems, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0001AA, "Member 'CraftList_C_FilterItems::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterItems, K2Node_MakeStruct_CharacterCraftRecepi) == 0x0001AC, "Member 'CraftList_C_FilterItems::K2Node_MakeStruct_CharacterCraftRecepi' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterItems, K2Node_Select_Default_1) == 0x0001B4, "Member 'CraftList_C_FilterItems::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterItems, CallFunc_IsCraftableRecepi_ReturnValue) == 0x0001B5, "Member 'CraftList_C_FilterItems::CallFunc_IsCraftableRecepi_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterItems, K2Node_Select_Default_2) == 0x0001B6, "Member 'CraftList_C_FilterItems::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterItems, K2Node_Select_Default_3) == 0x0001B7, "Member 'CraftList_C_FilterItems::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterItems, CallFunc_BooleanAND_ReturnValue_1) == 0x0001B8, "Member 'CraftList_C_FilterItems::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterItems, CallFunc_BooleanAND_ReturnValue_2) == 0x0001B9, "Member 'CraftList_C_FilterItems::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterItems, K2Node_Select_Default_4) == 0x0001BA, "Member 'CraftList_C_FilterItems::K2Node_Select_Default_4' has a wrong offset!");

// Function CraftList.CraftList_C.isRecepiMaterialLocked
// 0x0018 (0x0018 - 0x0000)
struct CraftList_C_IsRecepiMaterialLocked final
{
public:
	bool                                          OutIsLocked;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsExect;                                           // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52AB[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_isCraftRecepiMaterialLocked_ReturnValue;  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CraftList_C_IsRecepiMaterialLocked) == 0x000008, "Wrong alignment on CraftList_C_IsRecepiMaterialLocked");
static_assert(sizeof(CraftList_C_IsRecepiMaterialLocked) == 0x000018, "Wrong size on CraftList_C_IsRecepiMaterialLocked");
static_assert(offsetof(CraftList_C_IsRecepiMaterialLocked, OutIsLocked) == 0x000000, "Member 'CraftList_C_IsRecepiMaterialLocked::OutIsLocked' has a wrong offset!");
static_assert(offsetof(CraftList_C_IsRecepiMaterialLocked, IsExect) == 0x000001, "Member 'CraftList_C_IsRecepiMaterialLocked::IsExect' has a wrong offset!");
static_assert(offsetof(CraftList_C_IsRecepiMaterialLocked, CallFunc_GetMasterDataManager_IsValid) == 0x000002, "Member 'CraftList_C_IsRecepiMaterialLocked::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CraftList_C_IsRecepiMaterialLocked, CallFunc_GetMasterDataManager_ReturnValue) == 0x000008, "Member 'CraftList_C_IsRecepiMaterialLocked::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_IsRecepiMaterialLocked, CallFunc_isCraftRecepiMaterialLocked_ReturnValue) == 0x000010, "Member 'CraftList_C_IsRecepiMaterialLocked::CallFunc_isCraftRecepiMaterialLocked_ReturnValue' has a wrong offset!");

// Function CraftList.CraftList_C.ShowRedayCheckYesNoDialog
// 0x0038 (0x0038 - 0x0000)
struct CraftList_C_ShowRedayCheckYesNoDialog final
{
public:
	class UBP_Dialog_C*                           OutIsDialog;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UBP_Dialog_C*                           CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(CraftList_C_ShowRedayCheckYesNoDialog) == 0x000008, "Wrong alignment on CraftList_C_ShowRedayCheckYesNoDialog");
static_assert(sizeof(CraftList_C_ShowRedayCheckYesNoDialog) == 0x000038, "Wrong size on CraftList_C_ShowRedayCheckYesNoDialog");
static_assert(offsetof(CraftList_C_ShowRedayCheckYesNoDialog, OutIsDialog) == 0x000000, "Member 'CraftList_C_ShowRedayCheckYesNoDialog::OutIsDialog' has a wrong offset!");
static_assert(offsetof(CraftList_C_ShowRedayCheckYesNoDialog, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000008, "Member 'CraftList_C_ShowRedayCheckYesNoDialog::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_ShowRedayCheckYesNoDialog, CallFunc_Create_ReturnValue) == 0x000018, "Member 'CraftList_C_ShowRedayCheckYesNoDialog::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_ShowRedayCheckYesNoDialog, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'CraftList_C_ShowRedayCheckYesNoDialog::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function CraftList.CraftList_C.On_DifficultyDropDown_GenerateWidget_0
// 0x0038 (0x0038 - 0x0000)
struct CraftList_C_On_DifficultyDropDown_GenerateWidget_0 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnComboBoxItem1_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(CraftList_C_On_DifficultyDropDown_GenerateWidget_0) == 0x000008, "Wrong alignment on CraftList_C_On_DifficultyDropDown_GenerateWidget_0");
static_assert(sizeof(CraftList_C_On_DifficultyDropDown_GenerateWidget_0) == 0x000038, "Wrong size on CraftList_C_On_DifficultyDropDown_GenerateWidget_0");
static_assert(offsetof(CraftList_C_On_DifficultyDropDown_GenerateWidget_0, Item) == 0x000000, "Member 'CraftList_C_On_DifficultyDropDown_GenerateWidget_0::Item' has a wrong offset!");
static_assert(offsetof(CraftList_C_On_DifficultyDropDown_GenerateWidget_0, ReturnValue) == 0x000010, "Member 'CraftList_C_On_DifficultyDropDown_GenerateWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_On_DifficultyDropDown_GenerateWidget_0, CallFunc_Create_ReturnValue) == 0x000018, "Member 'CraftList_C_On_DifficultyDropDown_GenerateWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_On_DifficultyDropDown_GenerateWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'CraftList_C_On_DifficultyDropDown_GenerateWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function CraftList.CraftList_C.On_CategoryDropDown_GenerateWidget_0
// 0x0038 (0x0038 - 0x0000)
struct CraftList_C_On_CategoryDropDown_GenerateWidget_0 final
{
public:
	class FString                                 Item;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UWidget*                                ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCmnComboBoxItem1_C*                    CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(CraftList_C_On_CategoryDropDown_GenerateWidget_0) == 0x000008, "Wrong alignment on CraftList_C_On_CategoryDropDown_GenerateWidget_0");
static_assert(sizeof(CraftList_C_On_CategoryDropDown_GenerateWidget_0) == 0x000038, "Wrong size on CraftList_C_On_CategoryDropDown_GenerateWidget_0");
static_assert(offsetof(CraftList_C_On_CategoryDropDown_GenerateWidget_0, Item) == 0x000000, "Member 'CraftList_C_On_CategoryDropDown_GenerateWidget_0::Item' has a wrong offset!");
static_assert(offsetof(CraftList_C_On_CategoryDropDown_GenerateWidget_0, ReturnValue) == 0x000010, "Member 'CraftList_C_On_CategoryDropDown_GenerateWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_On_CategoryDropDown_GenerateWidget_0, CallFunc_Create_ReturnValue) == 0x000018, "Member 'CraftList_C_On_CategoryDropDown_GenerateWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_On_CategoryDropDown_GenerateWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'CraftList_C_On_CategoryDropDown_GenerateWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function CraftList.CraftList_C.SetupCategoryList
// 0x01D8 (0x01D8 - 0x0000)
struct CraftList_C_SetupCategoryList final
{
public:
	bool                                          bIsWeapon1;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bIsWeapon;                                         // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52AC[0x1];                                     // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52AD[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable;                              // 0x0018(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52AE[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         CallFunc_Map_Keys_Keys;                            // 0x0030(0x0010)(ReferenceParm)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52AF[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Array_Get_Item;                           // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52B0[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52B1[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemListData                          CallFunc_Array_Get_Item_1;                         // 0x0078(0x0090)(HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindWeaponMaster_bIsValid;                // 0x010A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52B2[0x5];                                     // 0x010B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_FindWeaponMaster_WeaponMaster;            // 0x0110(0x00B0)()
	class FString                                 CallFunc_GetWeaponTypeText_ReturnValue;            // 0x01C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Contains_ReturnValue;                 // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CraftList_C_SetupCategoryList) == 0x000008, "Wrong alignment on CraftList_C_SetupCategoryList");
static_assert(sizeof(CraftList_C_SetupCategoryList) == 0x0001D8, "Wrong size on CraftList_C_SetupCategoryList");
static_assert(offsetof(CraftList_C_SetupCategoryList, bIsWeapon1) == 0x000000, "Member 'CraftList_C_SetupCategoryList::bIsWeapon1' has a wrong offset!");
static_assert(offsetof(CraftList_C_SetupCategoryList, bIsWeapon) == 0x000001, "Member 'CraftList_C_SetupCategoryList::bIsWeapon' has a wrong offset!");
static_assert(offsetof(CraftList_C_SetupCategoryList, CallFunc_MakeLiteralByte_ReturnValue) == 0x000002, "Member 'CraftList_C_SetupCategoryList::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_SetupCategoryList, Temp_int_Array_Index_Variable) == 0x000004, "Member 'CraftList_C_SetupCategoryList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CraftList_C_SetupCategoryList, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000008, "Member 'CraftList_C_SetupCategoryList::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_SetupCategoryList, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'CraftList_C_SetupCategoryList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CraftList_C_SetupCategoryList, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'CraftList_C_SetupCategoryList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_SetupCategoryList, Temp_int_Array_Index_Variable_1) == 0x000014, "Member 'CraftList_C_SetupCategoryList::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_SetupCategoryList, Temp_string_Variable) == 0x000018, "Member 'CraftList_C_SetupCategoryList::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(CraftList_C_SetupCategoryList, Temp_int_Loop_Counter_Variable_1) == 0x000028, "Member 'CraftList_C_SetupCategoryList::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_SetupCategoryList, CallFunc_Map_Keys_Keys) == 0x000030, "Member 'CraftList_C_SetupCategoryList::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(CraftList_C_SetupCategoryList, CallFunc_Add_IntInt_ReturnValue_1) == 0x000040, "Member 'CraftList_C_SetupCategoryList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_SetupCategoryList, CallFunc_Array_Get_Item) == 0x000048, "Member 'CraftList_C_SetupCategoryList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CraftList_C_SetupCategoryList, CallFunc_Array_Length_ReturnValue) == 0x000058, "Member 'CraftList_C_SetupCategoryList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_SetupCategoryList, CallFunc_Less_IntInt_ReturnValue) == 0x00005C, "Member 'CraftList_C_SetupCategoryList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_SetupCategoryList, CallFunc_GetTextFromAsset_ReturnValue) == 0x000060, "Member 'CraftList_C_SetupCategoryList::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_SetupCategoryList, CallFunc_Array_Length_ReturnValue_1) == 0x000070, "Member 'CraftList_C_SetupCategoryList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_SetupCategoryList, CallFunc_Array_Get_Item_1) == 0x000078, "Member 'CraftList_C_SetupCategoryList::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_SetupCategoryList, CallFunc_Less_IntInt_ReturnValue_1) == 0x000108, "Member 'CraftList_C_SetupCategoryList::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_SetupCategoryList, CallFunc_EqualEqual_BoolBool_ReturnValue) == 0x000109, "Member 'CraftList_C_SetupCategoryList::CallFunc_EqualEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_SetupCategoryList, CallFunc_FindWeaponMaster_bIsValid) == 0x00010A, "Member 'CraftList_C_SetupCategoryList::CallFunc_FindWeaponMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(CraftList_C_SetupCategoryList, CallFunc_FindWeaponMaster_WeaponMaster) == 0x000110, "Member 'CraftList_C_SetupCategoryList::CallFunc_FindWeaponMaster_WeaponMaster' has a wrong offset!");
static_assert(offsetof(CraftList_C_SetupCategoryList, CallFunc_GetWeaponTypeText_ReturnValue) == 0x0001C0, "Member 'CraftList_C_SetupCategoryList::CallFunc_GetWeaponTypeText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_SetupCategoryList, CallFunc_Map_Contains_ReturnValue) == 0x0001D0, "Member 'CraftList_C_SetupCategoryList::CallFunc_Map_Contains_ReturnValue' has a wrong offset!");

// Function CraftList.CraftList_C.GenerateSortedIndexes
// 0x0088 (0x0088 - 0x0000)
struct CraftList_C_GenerateSortedIndexes final
{
public:
	TArray<struct FCharacterCraftRecepi>          Resepis;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<int32>                                 Indexes;                                           // 0x0010(0x0010)(Parm, OutParm)
	ESBSortType                                   Sorting;                                           // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52B3[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 Param_Index;                                       // 0x0028(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52B4[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52B5[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52B6[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 CallFunc_SortAdventurerRank_ReturnValue;           // 0x0058(0x0010)(ReferenceParm)
	TArray<int32>                                 CallFunc_SortMaxItemLevel_ReturnValue;             // 0x0068(0x0010)(ReferenceParm)
	TArray<int32>                                 CallFunc_SortRecepiId_ReturnValue;                 // 0x0078(0x0010)(ReferenceParm)
};
static_assert(alignof(CraftList_C_GenerateSortedIndexes) == 0x000008, "Wrong alignment on CraftList_C_GenerateSortedIndexes");
static_assert(sizeof(CraftList_C_GenerateSortedIndexes) == 0x000088, "Wrong size on CraftList_C_GenerateSortedIndexes");
static_assert(offsetof(CraftList_C_GenerateSortedIndexes, Resepis) == 0x000000, "Member 'CraftList_C_GenerateSortedIndexes::Resepis' has a wrong offset!");
static_assert(offsetof(CraftList_C_GenerateSortedIndexes, Indexes) == 0x000010, "Member 'CraftList_C_GenerateSortedIndexes::Indexes' has a wrong offset!");
static_assert(offsetof(CraftList_C_GenerateSortedIndexes, Sorting) == 0x000020, "Member 'CraftList_C_GenerateSortedIndexes::Sorting' has a wrong offset!");
static_assert(offsetof(CraftList_C_GenerateSortedIndexes, Param_Index) == 0x000028, "Member 'CraftList_C_GenerateSortedIndexes::Param_Index' has a wrong offset!");
static_assert(offsetof(CraftList_C_GenerateSortedIndexes, Temp_int_Array_Index_Variable) == 0x000038, "Member 'CraftList_C_GenerateSortedIndexes::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CraftList_C_GenerateSortedIndexes, CallFunc_Array_Length_ReturnValue) == 0x00003C, "Member 'CraftList_C_GenerateSortedIndexes::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_GenerateSortedIndexes, Temp_int_Loop_Counter_Variable) == 0x000040, "Member 'CraftList_C_GenerateSortedIndexes::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CraftList_C_GenerateSortedIndexes, CallFunc_Less_IntInt_ReturnValue) == 0x000044, "Member 'CraftList_C_GenerateSortedIndexes::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_GenerateSortedIndexes, CallFunc_Add_IntInt_ReturnValue) == 0x000048, "Member 'CraftList_C_GenerateSortedIndexes::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_GenerateSortedIndexes, K2Node_SwitchEnum_CmpSuccess) == 0x00004C, "Member 'CraftList_C_GenerateSortedIndexes::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(CraftList_C_GenerateSortedIndexes, CallFunc_Array_Add_ReturnValue) == 0x000050, "Member 'CraftList_C_GenerateSortedIndexes::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_GenerateSortedIndexes, CallFunc_SortAdventurerRank_ReturnValue) == 0x000058, "Member 'CraftList_C_GenerateSortedIndexes::CallFunc_SortAdventurerRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_GenerateSortedIndexes, CallFunc_SortMaxItemLevel_ReturnValue) == 0x000068, "Member 'CraftList_C_GenerateSortedIndexes::CallFunc_SortMaxItemLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_GenerateSortedIndexes, CallFunc_SortRecepiId_ReturnValue) == 0x000078, "Member 'CraftList_C_GenerateSortedIndexes::CallFunc_SortRecepiId_ReturnValue' has a wrong offset!");

// Function CraftList.CraftList_C.GenerateLists
// 0x01E0 (0x01E0 - 0x0000)
struct CraftList_C_GenerateLists final
{
public:
	TArray<struct FCharacterCraftRecepi>          InputPin;                                          // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          HasWeapon;                                         // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52B7[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 CallFunc_GenerateSortedIndexes_Indexes;            // 0x0018(0x0010)(ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item;                           // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindCraftMaster_bIsValid;                 // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52B8[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftMasterData                       CallFunc_FindCraftMaster_CraftMaster;              // 0x0040(0x0088)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsEventTermActive_ReturnValue;            // 0x00CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00CB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52B9[0x4];                                     // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FItemListData                          K2Node_MakeStruct_ItemListData;                    // 0x00E0(0x0090)(HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0170(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52BA[0x4];                                     // 0x0184(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0188(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52BB[0x7];                                     // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FCharacterCraftRecepi& SelectRecepi, class UCraftRecepiItem_C* SelectedItem)> K2Node_CreateDelegate_OutputDelegate;              // 0x01A8(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsExistCraft_ReturnValue;                 // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x01B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x01BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52BC[0x5];                                     // 0x01BB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UCraftRecepiItem_C*                     CallFunc_Create_ReturnValue;                       // 0x01C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52BD[0x3];                                     // 0x01C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x01CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default;                             // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52BE[0x7];                                     // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x01D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftList_C_GenerateLists) == 0x000008, "Wrong alignment on CraftList_C_GenerateLists");
static_assert(sizeof(CraftList_C_GenerateLists) == 0x0001E0, "Wrong size on CraftList_C_GenerateLists");
static_assert(offsetof(CraftList_C_GenerateLists, InputPin) == 0x000000, "Member 'CraftList_C_GenerateLists::InputPin' has a wrong offset!");
static_assert(offsetof(CraftList_C_GenerateLists, HasWeapon) == 0x000010, "Member 'CraftList_C_GenerateLists::HasWeapon' has a wrong offset!");
static_assert(offsetof(CraftList_C_GenerateLists, CallFunc_GenerateSortedIndexes_Indexes) == 0x000018, "Member 'CraftList_C_GenerateLists::CallFunc_GenerateSortedIndexes_Indexes' has a wrong offset!");
static_assert(offsetof(CraftList_C_GenerateLists, Temp_int_Array_Index_Variable) == 0x000028, "Member 'CraftList_C_GenerateLists::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CraftList_C_GenerateLists, CallFunc_Array_Length_ReturnValue) == 0x00002C, "Member 'CraftList_C_GenerateLists::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_GenerateLists, CallFunc_Array_Get_Item) == 0x000030, "Member 'CraftList_C_GenerateLists::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CraftList_C_GenerateLists, Temp_int_Loop_Counter_Variable) == 0x000034, "Member 'CraftList_C_GenerateLists::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CraftList_C_GenerateLists, CallFunc_FindCraftMaster_bIsValid) == 0x000038, "Member 'CraftList_C_GenerateLists::CallFunc_FindCraftMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(CraftList_C_GenerateLists, CallFunc_FindCraftMaster_CraftMaster) == 0x000040, "Member 'CraftList_C_GenerateLists::CallFunc_FindCraftMaster_CraftMaster' has a wrong offset!");
static_assert(offsetof(CraftList_C_GenerateLists, CallFunc_Less_IntInt_ReturnValue) == 0x0000C8, "Member 'CraftList_C_GenerateLists::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_GenerateLists, CallFunc_IsEmpty_ReturnValue) == 0x0000C9, "Member 'CraftList_C_GenerateLists::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_GenerateLists, CallFunc_IsEventTermActive_ReturnValue) == 0x0000CA, "Member 'CraftList_C_GenerateLists::CallFunc_IsEventTermActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_GenerateLists, CallFunc_Not_PreBool_ReturnValue) == 0x0000CB, "Member 'CraftList_C_GenerateLists::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_GenerateLists, CallFunc_Conv_IntToString_ReturnValue) == 0x0000D0, "Member 'CraftList_C_GenerateLists::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_GenerateLists, K2Node_MakeStruct_ItemListData) == 0x0000E0, "Member 'CraftList_C_GenerateLists::K2Node_MakeStruct_ItemListData' has a wrong offset!");
static_assert(offsetof(CraftList_C_GenerateLists, CallFunc_Concat_StrStr_ReturnValue) == 0x000170, "Member 'CraftList_C_GenerateLists::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_GenerateLists, CallFunc_Add_IntInt_ReturnValue) == 0x000180, "Member 'CraftList_C_GenerateLists::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_GenerateLists, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000188, "Member 'CraftList_C_GenerateLists::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_GenerateLists, CallFunc_GetMasterDataManager_IsValid) == 0x000198, "Member 'CraftList_C_GenerateLists::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CraftList_C_GenerateLists, CallFunc_GetMasterDataManager_ReturnValue) == 0x0001A0, "Member 'CraftList_C_GenerateLists::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_GenerateLists, K2Node_CreateDelegate_OutputDelegate) == 0x0001A8, "Member 'CraftList_C_GenerateLists::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CraftList_C_GenerateLists, CallFunc_IsExistCraft_ReturnValue) == 0x0001B8, "Member 'CraftList_C_GenerateLists::CallFunc_IsExistCraft_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_GenerateLists, CallFunc_BooleanAND_ReturnValue) == 0x0001B9, "Member 'CraftList_C_GenerateLists::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_GenerateLists, CallFunc_BooleanOR_ReturnValue) == 0x0001BA, "Member 'CraftList_C_GenerateLists::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_GenerateLists, CallFunc_Create_ReturnValue) == 0x0001C0, "Member 'CraftList_C_GenerateLists::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_GenerateLists, Temp_bool_Variable) == 0x0001C8, "Member 'CraftList_C_GenerateLists::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CraftList_C_GenerateLists, CallFunc_Array_Add_ReturnValue) == 0x0001CC, "Member 'CraftList_C_GenerateLists::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_GenerateLists, K2Node_Select_Default) == 0x0001D0, "Member 'CraftList_C_GenerateLists::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CraftList_C_GenerateLists, CallFunc_AddChild_ReturnValue) == 0x0001D8, "Member 'CraftList_C_GenerateLists::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function CraftList.CraftList_C.FilterLists
// 0x01D8 (0x01D8 - 0x0000)
struct CraftList_C_FilterLists final
{
public:
	TArray<struct FFilterGroup>                   Array;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ESlateVisibility                              Visible;                                           // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52BF[0x2];                                     // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52C0[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFilterGroup                           CallFunc_Array_Get_Item;                           // 0x0040(0x0010)()
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52C1[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCraftableFilterCraftMachine_ReturnValue; // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x0063(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemListData                          CallFunc_Array_Get_Item_1;                         // 0x0078(0x0090)(HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52C2[0x2];                                     // 0x010A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharacterCraftRecepi                  K2Node_MakeStruct_CharacterCraftRecepi;            // 0x010C(0x0008)(NoDestructor)
	bool                                          CallFunc_FindWeaponMaster_bIsValid;                // 0x0114(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52C3[0x3];                                     // 0x0115(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_FindWeaponMaster_WeaponMaster;            // 0x0118(0x00B0)()
	bool                                          CallFunc_IsCraftableRecepi_ReturnValue;            // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x01C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EItemFilterType                               CallFunc_Attribute2ItemFilter_ReturnValue;         // 0x01CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x01CB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x01CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x01CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x01CE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               CallFunc_Class2ItemFilter_ReturnValue;             // 0x01CF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_Contains_ReturnValue_1;             // 0x01D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x01D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x01D3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x01D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x01D5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftList_C_FilterLists) == 0x000008, "Wrong alignment on CraftList_C_FilterLists");
static_assert(sizeof(CraftList_C_FilterLists) == 0x0001D8, "Wrong size on CraftList_C_FilterLists");
static_assert(offsetof(CraftList_C_FilterLists, Array) == 0x000000, "Member 'CraftList_C_FilterLists::Array' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterLists, Visible) == 0x000010, "Member 'CraftList_C_FilterLists::Visible' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterLists, Temp_bool_Variable) == 0x000011, "Member 'CraftList_C_FilterLists::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterLists, CallFunc_Array_Length_ReturnValue) == 0x000014, "Member 'CraftList_C_FilterLists::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterLists, Temp_byte_Variable) == 0x000018, "Member 'CraftList_C_FilterLists::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterLists, Temp_byte_Variable_1) == 0x000019, "Member 'CraftList_C_FilterLists::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterLists, Temp_bool_Variable_1) == 0x00001A, "Member 'CraftList_C_FilterLists::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterLists, Temp_byte_Variable_2) == 0x00001B, "Member 'CraftList_C_FilterLists::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterLists, Temp_int_Array_Index_Variable) == 0x00001C, "Member 'CraftList_C_FilterLists::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterLists, Temp_int_Loop_Counter_Variable) == 0x000020, "Member 'CraftList_C_FilterLists::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterLists, CallFunc_Less_IntInt_ReturnValue) == 0x000024, "Member 'CraftList_C_FilterLists::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterLists, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'CraftList_C_FilterLists::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterLists, Temp_int_Array_Index_Variable_1) == 0x00002C, "Member 'CraftList_C_FilterLists::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterLists, CallFunc_GetCharacterId_ReturnValue) == 0x000030, "Member 'CraftList_C_FilterLists::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterLists, CallFunc_Array_Get_Item) == 0x000040, "Member 'CraftList_C_FilterLists::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterLists, CallFunc_Array_Length_ReturnValue_1) == 0x000050, "Member 'CraftList_C_FilterLists::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterLists, CallFunc_GetConfigSaveManager_IsValid) == 0x000054, "Member 'CraftList_C_FilterLists::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterLists, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000058, "Member 'CraftList_C_FilterLists::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterLists, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000060, "Member 'CraftList_C_FilterLists::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterLists, CallFunc_IsCraftableFilterCraftMachine_ReturnValue) == 0x000061, "Member 'CraftList_C_FilterLists::CallFunc_IsCraftableFilterCraftMachine_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterLists, Temp_bool_Variable_2) == 0x000062, "Member 'CraftList_C_FilterLists::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterLists, Temp_bool_Variable_3) == 0x000063, "Member 'CraftList_C_FilterLists::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterLists, Temp_int_Loop_Counter_Variable_1) == 0x000064, "Member 'CraftList_C_FilterLists::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterLists, CallFunc_GetChildAt_ReturnValue) == 0x000068, "Member 'CraftList_C_FilterLists::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterLists, CallFunc_Add_IntInt_ReturnValue_1) == 0x000070, "Member 'CraftList_C_FilterLists::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterLists, CallFunc_Array_Length_ReturnValue_2) == 0x000074, "Member 'CraftList_C_FilterLists::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterLists, CallFunc_Array_Get_Item_1) == 0x000078, "Member 'CraftList_C_FilterLists::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterLists, CallFunc_Less_IntInt_ReturnValue_1) == 0x000108, "Member 'CraftList_C_FilterLists::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterLists, CallFunc_EqualEqual_BoolBool_ReturnValue) == 0x000109, "Member 'CraftList_C_FilterLists::CallFunc_EqualEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterLists, K2Node_MakeStruct_CharacterCraftRecepi) == 0x00010C, "Member 'CraftList_C_FilterLists::K2Node_MakeStruct_CharacterCraftRecepi' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterLists, CallFunc_FindWeaponMaster_bIsValid) == 0x000114, "Member 'CraftList_C_FilterLists::CallFunc_FindWeaponMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterLists, CallFunc_FindWeaponMaster_WeaponMaster) == 0x000118, "Member 'CraftList_C_FilterLists::CallFunc_FindWeaponMaster_WeaponMaster' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterLists, CallFunc_IsCraftableRecepi_ReturnValue) == 0x0001C8, "Member 'CraftList_C_FilterLists::CallFunc_IsCraftableRecepi_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterLists, K2Node_Select_Default) == 0x0001C9, "Member 'CraftList_C_FilterLists::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterLists, CallFunc_Attribute2ItemFilter_ReturnValue) == 0x0001CA, "Member 'CraftList_C_FilterLists::CallFunc_Attribute2ItemFilter_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterLists, CallFunc_BooleanAND_ReturnValue) == 0x0001CB, "Member 'CraftList_C_FilterLists::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterLists, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0001CC, "Member 'CraftList_C_FilterLists::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterLists, CallFunc_Array_Contains_ReturnValue) == 0x0001CD, "Member 'CraftList_C_FilterLists::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterLists, K2Node_Select_Default_1) == 0x0001CE, "Member 'CraftList_C_FilterLists::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterLists, CallFunc_Class2ItemFilter_ReturnValue) == 0x0001CF, "Member 'CraftList_C_FilterLists::CallFunc_Class2ItemFilter_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterLists, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x0001D0, "Member 'CraftList_C_FilterLists::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterLists, CallFunc_Array_Contains_ReturnValue_1) == 0x0001D1, "Member 'CraftList_C_FilterLists::CallFunc_Array_Contains_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterLists, CallFunc_BooleanOR_ReturnValue) == 0x0001D2, "Member 'CraftList_C_FilterLists::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterLists, CallFunc_BooleanAND_ReturnValue_1) == 0x0001D3, "Member 'CraftList_C_FilterLists::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterLists, CallFunc_BooleanAND_ReturnValue_2) == 0x0001D4, "Member 'CraftList_C_FilterLists::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CraftList_C_FilterLists, K2Node_Select_Default_2) == 0x0001D5, "Member 'CraftList_C_FilterLists::K2Node_Select_Default_2' has a wrong offset!");

// Function CraftList.CraftList_C.ConvertSortType
// 0x0020 (0x0020 - 0x0000)
struct CraftList_C_ConvertSortType final
{
public:
	ESBItemSortType                               SaveType;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          UseType;                                           // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_2;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_3;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_4;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_5;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_6;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_7;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_8;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_9;                              // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_10;                             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_11;                             // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_12;                             // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_13;                             // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_14;                             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_15;                             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_16;                             // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_17;                             // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_18;                             // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_19;                             // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_20;                             // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_21;                             // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_22;                             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_23;                             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_24;                             // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_25;                             // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_26;                             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_27;                             // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable_28;                             // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          K2Node_Select_Default;                             // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftList_C_ConvertSortType) == 0x000001, "Wrong alignment on CraftList_C_ConvertSortType");
static_assert(sizeof(CraftList_C_ConvertSortType) == 0x000020, "Wrong size on CraftList_C_ConvertSortType");
static_assert(offsetof(CraftList_C_ConvertSortType, SaveType) == 0x000000, "Member 'CraftList_C_ConvertSortType::SaveType' has a wrong offset!");
static_assert(offsetof(CraftList_C_ConvertSortType, UseType) == 0x000001, "Member 'CraftList_C_ConvertSortType::UseType' has a wrong offset!");
static_assert(offsetof(CraftList_C_ConvertSortType, Temp_byte_Variable) == 0x000002, "Member 'CraftList_C_ConvertSortType::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CraftList_C_ConvertSortType, Temp_byte_Variable_1) == 0x000003, "Member 'CraftList_C_ConvertSortType::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_ConvertSortType, Temp_byte_Variable_2) == 0x000004, "Member 'CraftList_C_ConvertSortType::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(CraftList_C_ConvertSortType, Temp_byte_Variable_3) == 0x000005, "Member 'CraftList_C_ConvertSortType::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(CraftList_C_ConvertSortType, Temp_byte_Variable_4) == 0x000006, "Member 'CraftList_C_ConvertSortType::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(CraftList_C_ConvertSortType, Temp_byte_Variable_5) == 0x000007, "Member 'CraftList_C_ConvertSortType::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(CraftList_C_ConvertSortType, Temp_byte_Variable_6) == 0x000008, "Member 'CraftList_C_ConvertSortType::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(CraftList_C_ConvertSortType, Temp_byte_Variable_7) == 0x000009, "Member 'CraftList_C_ConvertSortType::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(CraftList_C_ConvertSortType, Temp_byte_Variable_8) == 0x00000A, "Member 'CraftList_C_ConvertSortType::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(CraftList_C_ConvertSortType, Temp_byte_Variable_9) == 0x00000B, "Member 'CraftList_C_ConvertSortType::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(CraftList_C_ConvertSortType, Temp_byte_Variable_10) == 0x00000C, "Member 'CraftList_C_ConvertSortType::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(CraftList_C_ConvertSortType, Temp_byte_Variable_11) == 0x00000D, "Member 'CraftList_C_ConvertSortType::Temp_byte_Variable_11' has a wrong offset!");
static_assert(offsetof(CraftList_C_ConvertSortType, Temp_byte_Variable_12) == 0x00000E, "Member 'CraftList_C_ConvertSortType::Temp_byte_Variable_12' has a wrong offset!");
static_assert(offsetof(CraftList_C_ConvertSortType, Temp_byte_Variable_13) == 0x00000F, "Member 'CraftList_C_ConvertSortType::Temp_byte_Variable_13' has a wrong offset!");
static_assert(offsetof(CraftList_C_ConvertSortType, Temp_byte_Variable_14) == 0x000010, "Member 'CraftList_C_ConvertSortType::Temp_byte_Variable_14' has a wrong offset!");
static_assert(offsetof(CraftList_C_ConvertSortType, Temp_byte_Variable_15) == 0x000011, "Member 'CraftList_C_ConvertSortType::Temp_byte_Variable_15' has a wrong offset!");
static_assert(offsetof(CraftList_C_ConvertSortType, Temp_byte_Variable_16) == 0x000012, "Member 'CraftList_C_ConvertSortType::Temp_byte_Variable_16' has a wrong offset!");
static_assert(offsetof(CraftList_C_ConvertSortType, Temp_byte_Variable_17) == 0x000013, "Member 'CraftList_C_ConvertSortType::Temp_byte_Variable_17' has a wrong offset!");
static_assert(offsetof(CraftList_C_ConvertSortType, Temp_byte_Variable_18) == 0x000014, "Member 'CraftList_C_ConvertSortType::Temp_byte_Variable_18' has a wrong offset!");
static_assert(offsetof(CraftList_C_ConvertSortType, Temp_byte_Variable_19) == 0x000015, "Member 'CraftList_C_ConvertSortType::Temp_byte_Variable_19' has a wrong offset!");
static_assert(offsetof(CraftList_C_ConvertSortType, Temp_byte_Variable_20) == 0x000016, "Member 'CraftList_C_ConvertSortType::Temp_byte_Variable_20' has a wrong offset!");
static_assert(offsetof(CraftList_C_ConvertSortType, Temp_byte_Variable_21) == 0x000017, "Member 'CraftList_C_ConvertSortType::Temp_byte_Variable_21' has a wrong offset!");
static_assert(offsetof(CraftList_C_ConvertSortType, Temp_byte_Variable_22) == 0x000018, "Member 'CraftList_C_ConvertSortType::Temp_byte_Variable_22' has a wrong offset!");
static_assert(offsetof(CraftList_C_ConvertSortType, Temp_byte_Variable_23) == 0x000019, "Member 'CraftList_C_ConvertSortType::Temp_byte_Variable_23' has a wrong offset!");
static_assert(offsetof(CraftList_C_ConvertSortType, Temp_byte_Variable_24) == 0x00001A, "Member 'CraftList_C_ConvertSortType::Temp_byte_Variable_24' has a wrong offset!");
static_assert(offsetof(CraftList_C_ConvertSortType, Temp_byte_Variable_25) == 0x00001B, "Member 'CraftList_C_ConvertSortType::Temp_byte_Variable_25' has a wrong offset!");
static_assert(offsetof(CraftList_C_ConvertSortType, Temp_byte_Variable_26) == 0x00001C, "Member 'CraftList_C_ConvertSortType::Temp_byte_Variable_26' has a wrong offset!");
static_assert(offsetof(CraftList_C_ConvertSortType, Temp_byte_Variable_27) == 0x00001D, "Member 'CraftList_C_ConvertSortType::Temp_byte_Variable_27' has a wrong offset!");
static_assert(offsetof(CraftList_C_ConvertSortType, Temp_byte_Variable_28) == 0x00001E, "Member 'CraftList_C_ConvertSortType::Temp_byte_Variable_28' has a wrong offset!");
static_assert(offsetof(CraftList_C_ConvertSortType, K2Node_Select_Default) == 0x00001F, "Member 'CraftList_C_ConvertSortType::K2Node_Select_Default' has a wrong offset!");

// Function CraftList.CraftList_C.ConvertSaveType
// 0x000A (0x000A - 0x0000)
struct CraftList_C_ConvertSaveType final
{
public:
	ECraftRecepiSortType                          UseType;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               SaveType;                                          // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_2;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_3;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_4;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_5;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               Temp_byte_Variable_6;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               K2Node_Select_Default;                             // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftList_C_ConvertSaveType) == 0x000001, "Wrong alignment on CraftList_C_ConvertSaveType");
static_assert(sizeof(CraftList_C_ConvertSaveType) == 0x00000A, "Wrong size on CraftList_C_ConvertSaveType");
static_assert(offsetof(CraftList_C_ConvertSaveType, UseType) == 0x000000, "Member 'CraftList_C_ConvertSaveType::UseType' has a wrong offset!");
static_assert(offsetof(CraftList_C_ConvertSaveType, SaveType) == 0x000001, "Member 'CraftList_C_ConvertSaveType::SaveType' has a wrong offset!");
static_assert(offsetof(CraftList_C_ConvertSaveType, Temp_byte_Variable) == 0x000002, "Member 'CraftList_C_ConvertSaveType::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CraftList_C_ConvertSaveType, Temp_byte_Variable_1) == 0x000003, "Member 'CraftList_C_ConvertSaveType::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_ConvertSaveType, Temp_byte_Variable_2) == 0x000004, "Member 'CraftList_C_ConvertSaveType::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(CraftList_C_ConvertSaveType, Temp_byte_Variable_3) == 0x000005, "Member 'CraftList_C_ConvertSaveType::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(CraftList_C_ConvertSaveType, Temp_byte_Variable_4) == 0x000006, "Member 'CraftList_C_ConvertSaveType::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(CraftList_C_ConvertSaveType, Temp_byte_Variable_5) == 0x000007, "Member 'CraftList_C_ConvertSaveType::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(CraftList_C_ConvertSaveType, Temp_byte_Variable_6) == 0x000008, "Member 'CraftList_C_ConvertSaveType::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(CraftList_C_ConvertSaveType, K2Node_Select_Default) == 0x000009, "Member 'CraftList_C_ConvertSaveType::K2Node_Select_Default' has a wrong offset!");

// Function CraftList.CraftList_C.GetLastCraftStorage
// 0x0004 (0x0004 - 0x0000)
struct CraftList_C_GetLastCraftStorage final
{
public:
	int32                                         Param_StorageType;                                 // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftList_C_GetLastCraftStorage) == 0x000004, "Wrong alignment on CraftList_C_GetLastCraftStorage");
static_assert(sizeof(CraftList_C_GetLastCraftStorage) == 0x000004, "Wrong size on CraftList_C_GetLastCraftStorage");
static_assert(offsetof(CraftList_C_GetLastCraftStorage, Param_StorageType) == 0x000000, "Member 'CraftList_C_GetLastCraftStorage::Param_StorageType' has a wrong offset!");

// Function CraftList.CraftList_C.GetCraftNum
// 0x0004 (0x0004 - 0x0000)
struct CraftList_C_GetCraftNum final
{
public:
	int32                                         Num;                                               // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftList_C_GetCraftNum) == 0x000004, "Wrong alignment on CraftList_C_GetCraftNum");
static_assert(sizeof(CraftList_C_GetCraftNum) == 0x000004, "Wrong size on CraftList_C_GetCraftNum");
static_assert(offsetof(CraftList_C_GetCraftNum, Num) == 0x000000, "Member 'CraftList_C_GetCraftNum::Num' has a wrong offset!");

// Function CraftList.CraftList_C.SetWeaponShow
// 0x0010 (0x0010 - 0x0000)
struct CraftList_C_SetWeaponShow final
{
public:
	bool                                          Param_IsWeaponShowed;                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52C4[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftList_C_SetWeaponShow) == 0x000008, "Wrong alignment on CraftList_C_SetWeaponShow");
static_assert(sizeof(CraftList_C_SetWeaponShow) == 0x000010, "Wrong size on CraftList_C_SetWeaponShow");
static_assert(offsetof(CraftList_C_SetWeaponShow, Param_IsWeaponShowed) == 0x000000, "Member 'CraftList_C_SetWeaponShow::Param_IsWeaponShowed' has a wrong offset!");
static_assert(offsetof(CraftList_C_SetWeaponShow, Temp_bool_Variable) == 0x000001, "Member 'CraftList_C_SetWeaponShow::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CraftList_C_SetWeaponShow, K2Node_Select_Default) == 0x000008, "Member 'CraftList_C_SetWeaponShow::K2Node_Select_Default' has a wrong offset!");

// Function CraftList.CraftList_C.UpdateRatio
// 0x02B0 (0x02B0 - 0x0000)
struct CraftList_C_UpdateRatio final
{
public:
	int32                                         RecepiId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TokenRates;                                        // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCraftMasterData                       RecepiData;                                        // 0x0008(0x0088)(Edit, BlueprintVisible)
	bool                                          Temp_bool_Variable;                                // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindCraftMaster_bIsValid;                 // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52C5[0x6];                                     // 0x0092(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftMasterData                       CallFunc_FindCraftMaster_CraftMaster;              // 0x0098(0x0088)()
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable;                               // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0132(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52C6[0x1];                                     // 0x0133(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52C7[0x3];                                     // 0x013D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0148(0x0028)()
	TArray<int32>                                 CallFunc_IsUseToken_UseToken;                      // 0x0170(0x0010)(ReferenceParm)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0180(0x0028)()
	int32                                         CallFunc_Array_Get_Item;                           // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTokenRatio_ReturnValue;                // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52C8[0x3];                                     // 0x01B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52C9[0x4];                                     // 0x01BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerRewardBoostComponent*          CallFunc_GetRewardBoostComponent_ReturnValue;      // 0x01C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x01D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_GetCraftSuccessRateBonus_SuccessRateBonus; // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCraftSuccessRateBonus_ReturnValue;     // 0x01E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52CA[0x3];                                     // 0x01E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x01E8(0x0018)()
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52CB[0x3];                                     // 0x0201(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0204(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_Select_Default;                             // 0x0208(0x0028)()
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0234(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x0238(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default_1;                           // 0x023C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMin_ReturnValue;                         // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52CC[0x4];                                     // 0x0244(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0248(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0288(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0298(0x0018)()
};
static_assert(alignof(CraftList_C_UpdateRatio) == 0x000008, "Wrong alignment on CraftList_C_UpdateRatio");
static_assert(sizeof(CraftList_C_UpdateRatio) == 0x0002B0, "Wrong size on CraftList_C_UpdateRatio");
static_assert(offsetof(CraftList_C_UpdateRatio, RecepiId) == 0x000000, "Member 'CraftList_C_UpdateRatio::RecepiId' has a wrong offset!");
static_assert(offsetof(CraftList_C_UpdateRatio, TokenRates) == 0x000004, "Member 'CraftList_C_UpdateRatio::TokenRates' has a wrong offset!");
static_assert(offsetof(CraftList_C_UpdateRatio, RecepiData) == 0x000008, "Member 'CraftList_C_UpdateRatio::RecepiData' has a wrong offset!");
static_assert(offsetof(CraftList_C_UpdateRatio, Temp_bool_Variable) == 0x000090, "Member 'CraftList_C_UpdateRatio::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CraftList_C_UpdateRatio, CallFunc_FindCraftMaster_bIsValid) == 0x000091, "Member 'CraftList_C_UpdateRatio::CallFunc_FindCraftMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(CraftList_C_UpdateRatio, CallFunc_FindCraftMaster_CraftMaster) == 0x000098, "Member 'CraftList_C_UpdateRatio::CallFunc_FindCraftMaster_CraftMaster' has a wrong offset!");
static_assert(offsetof(CraftList_C_UpdateRatio, Temp_int_Array_Index_Variable) == 0x000120, "Member 'CraftList_C_UpdateRatio::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CraftList_C_UpdateRatio, Temp_int_Loop_Counter_Variable) == 0x000124, "Member 'CraftList_C_UpdateRatio::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CraftList_C_UpdateRatio, CallFunc_Add_IntInt_ReturnValue) == 0x000128, "Member 'CraftList_C_UpdateRatio::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_UpdateRatio, Temp_float_Variable) == 0x00012C, "Member 'CraftList_C_UpdateRatio::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(CraftList_C_UpdateRatio, CallFunc_Greater_IntInt_ReturnValue) == 0x000130, "Member 'CraftList_C_UpdateRatio::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_UpdateRatio, Temp_bool_Variable_1) == 0x000131, "Member 'CraftList_C_UpdateRatio::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_UpdateRatio, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000132, "Member 'CraftList_C_UpdateRatio::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_UpdateRatio, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000134, "Member 'CraftList_C_UpdateRatio::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_UpdateRatio, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000138, "Member 'CraftList_C_UpdateRatio::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_UpdateRatio, CallFunc_GetMasterDataManager_IsValid) == 0x00013C, "Member 'CraftList_C_UpdateRatio::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CraftList_C_UpdateRatio, CallFunc_GetMasterDataManager_ReturnValue) == 0x000140, "Member 'CraftList_C_UpdateRatio::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_UpdateRatio, K2Node_MakeStruct_SlateColor) == 0x000148, "Member 'CraftList_C_UpdateRatio::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(CraftList_C_UpdateRatio, CallFunc_IsUseToken_UseToken) == 0x000170, "Member 'CraftList_C_UpdateRatio::CallFunc_IsUseToken_UseToken' has a wrong offset!");
static_assert(offsetof(CraftList_C_UpdateRatio, K2Node_MakeStruct_SlateColor_1) == 0x000180, "Member 'CraftList_C_UpdateRatio::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_UpdateRatio, CallFunc_Array_Get_Item) == 0x0001A8, "Member 'CraftList_C_UpdateRatio::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CraftList_C_UpdateRatio, CallFunc_Array_Length_ReturnValue) == 0x0001AC, "Member 'CraftList_C_UpdateRatio::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_UpdateRatio, CallFunc_GetTokenRatio_ReturnValue) == 0x0001B0, "Member 'CraftList_C_UpdateRatio::CallFunc_GetTokenRatio_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_UpdateRatio, CallFunc_Less_IntInt_ReturnValue) == 0x0001B4, "Member 'CraftList_C_UpdateRatio::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_UpdateRatio, CallFunc_Add_IntInt_ReturnValue_1) == 0x0001B8, "Member 'CraftList_C_UpdateRatio::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_UpdateRatio, CallFunc_GetSBPlayerController_ReturnValue) == 0x0001C0, "Member 'CraftList_C_UpdateRatio::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_UpdateRatio, CallFunc_GetRewardBoostComponent_ReturnValue) == 0x0001C8, "Member 'CraftList_C_UpdateRatio::CallFunc_GetRewardBoostComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_UpdateRatio, CallFunc_GetTextFromAsset_ReturnValue) == 0x0001D0, "Member 'CraftList_C_UpdateRatio::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_UpdateRatio, CallFunc_GetCraftSuccessRateBonus_SuccessRateBonus) == 0x0001E0, "Member 'CraftList_C_UpdateRatio::CallFunc_GetCraftSuccessRateBonus_SuccessRateBonus' has a wrong offset!");
static_assert(offsetof(CraftList_C_UpdateRatio, CallFunc_GetCraftSuccessRateBonus_ReturnValue) == 0x0001E4, "Member 'CraftList_C_UpdateRatio::CallFunc_GetCraftSuccessRateBonus_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_UpdateRatio, CallFunc_Conv_StringToText_ReturnValue) == 0x0001E8, "Member 'CraftList_C_UpdateRatio::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_UpdateRatio, CallFunc_BooleanOR_ReturnValue) == 0x000200, "Member 'CraftList_C_UpdateRatio::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_UpdateRatio, CallFunc_Add_FloatFloat_ReturnValue) == 0x000204, "Member 'CraftList_C_UpdateRatio::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_UpdateRatio, K2Node_Select_Default) == 0x000208, "Member 'CraftList_C_UpdateRatio::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CraftList_C_UpdateRatio, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000230, "Member 'CraftList_C_UpdateRatio::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_UpdateRatio, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000234, "Member 'CraftList_C_UpdateRatio::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_UpdateRatio, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x000238, "Member 'CraftList_C_UpdateRatio::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_UpdateRatio, K2Node_Select_Default_1) == 0x00023C, "Member 'CraftList_C_UpdateRatio::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(CraftList_C_UpdateRatio, CallFunc_FMin_ReturnValue) == 0x000240, "Member 'CraftList_C_UpdateRatio::CallFunc_FMin_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_UpdateRatio, K2Node_MakeStruct_FormatArgumentData) == 0x000248, "Member 'CraftList_C_UpdateRatio::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(CraftList_C_UpdateRatio, K2Node_MakeArray_Array) == 0x000288, "Member 'CraftList_C_UpdateRatio::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CraftList_C_UpdateRatio, CallFunc_Format_ReturnValue) == 0x000298, "Member 'CraftList_C_UpdateRatio::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function CraftList.CraftList_C.InitCheckBox
// 0x0028 (0x0028 - 0x0000)
struct CraftList_C_InitCheckBox final
{
public:
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetConfigSaveManager_IsValid;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52CD[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBConfigureSaveManager*                CallFunc_GetConfigSaveManager_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCraftableFilterCraftMachine_ReturnValue; // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CraftList_C_InitCheckBox) == 0x000008, "Wrong alignment on CraftList_C_InitCheckBox");
static_assert(sizeof(CraftList_C_InitCheckBox) == 0x000028, "Wrong size on CraftList_C_InitCheckBox");
static_assert(offsetof(CraftList_C_InitCheckBox, CallFunc_GetCharacterId_ReturnValue) == 0x000000, "Member 'CraftList_C_InitCheckBox::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_InitCheckBox, CallFunc_GetConfigSaveManager_IsValid) == 0x000010, "Member 'CraftList_C_InitCheckBox::CallFunc_GetConfigSaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(CraftList_C_InitCheckBox, CallFunc_GetConfigSaveManager_ReturnValue) == 0x000018, "Member 'CraftList_C_InitCheckBox::CallFunc_GetConfigSaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftList_C_InitCheckBox, CallFunc_IsCraftableFilterCraftMachine_ReturnValue) == 0x000020, "Member 'CraftList_C_InitCheckBox::CallFunc_IsCraftableFilterCraftMachine_ReturnValue' has a wrong offset!");

}

