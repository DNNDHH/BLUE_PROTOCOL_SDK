#pragma once

 

// Package: ShopMenuDetailsSwitcher

#include "Basic.hpp"

#include "E_SBDetailsZoomIn_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "E_ItemDetailTypes_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.OnShow__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct ShopMenuDetailsSwitcher_C_OnShow__DelegateSignature final
{
public:
	bool                                          bShow;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShopMenuDetailsSwitcher_C_OnShow__DelegateSignature) == 0x000001, "Wrong alignment on ShopMenuDetailsSwitcher_C_OnShow__DelegateSignature");
static_assert(sizeof(ShopMenuDetailsSwitcher_C_OnShow__DelegateSignature) == 0x000001, "Wrong size on ShopMenuDetailsSwitcher_C_OnShow__DelegateSignature");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_OnShow__DelegateSignature, bShow) == 0x000000, "Member 'ShopMenuDetailsSwitcher_C_OnShow__DelegateSignature::bShow' has a wrong offset!");

// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.OnClickZoomIn__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct ShopMenuDetailsSwitcher_C_OnClickZoomIn__DelegateSignature final
{
public:
	E_SBDetailsZoomIn                             Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsSwitcher_C_OnClickZoomIn__DelegateSignature) == 0x000001, "Wrong alignment on ShopMenuDetailsSwitcher_C_OnClickZoomIn__DelegateSignature");
static_assert(sizeof(ShopMenuDetailsSwitcher_C_OnClickZoomIn__DelegateSignature) == 0x000001, "Wrong size on ShopMenuDetailsSwitcher_C_OnClickZoomIn__DelegateSignature");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_OnClickZoomIn__DelegateSignature, Type) == 0x000000, "Member 'ShopMenuDetailsSwitcher_C_OnClickZoomIn__DelegateSignature::Type' has a wrong offset!");

// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ExecuteUbergraph_ShopMenuDetailsSwitcher
// 0x0770 (0x0770 - 0x0000)
struct ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9369[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_936A[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array_1;                          // 0x0050(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item_1;                         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_936B[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_1;        // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_936C[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue_1;             // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_936D[0x6];                                     // 0x0092(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCurrentLevelName_ReturnValue;          // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCurrentLevelName_ReturnValue_1;        // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                         Pad_936E[0x8];                                     // 0x00B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_Find_Map_Spawn_Location_for_Item_Detail_Capture_OutTransform; // 0x00C0(0x0030)(IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_Find_Map_Spawn_Location_for_Item_Detail_Capture_OutTransform_1; // 0x00F0(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1; // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_WeaponForCapture_Studio_C*          CallFunc_FinishSpawningActor_ReturnValue;          // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MannequinForCapture_Studio_C*       CallFunc_FinishSpawningActor_ReturnValue_1;        // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item_2;                         // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_936F[0x7];                                     // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_MannequinForCapture_Studio_C*       K2Node_DynamicCast_AsBP_Mannequin_for_Capture_Studio; // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9370[0x2];                                     // 0x0162(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item_3;                         // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9371[0x4];                                     // 0x0174(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_WeaponForCapture_Studio_C*          K2Node_DynamicCast_AsBP_Weapon_for_Capture_Studio; // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0181(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x0182(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9372[0x1];                                     // 0x0183(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            K2Node_CustomEvent_InWidget;                       // 0x0188(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue_1;                    // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9373[0x3];                                     // 0x0199(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UUserWidget* InWidget)>  K2Node_CreateDelegate_OutputDelegate;              // 0x019C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(bool IsMaleCostumeSelected)>   K2Node_CreateDelegate_OutputDelegate_1;            // 0x01AC(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_9374[0x4];                                     // 0x01BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array_2;                          // 0x01C0(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item_4;                         // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_Array_Get_Item_5;                         // 0x01D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue_2;        // 0x01E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue_2;             // 0x01E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9375[0x3];                                     // 0x01F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9376[0x3];                                     // 0x0201(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0204(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsMaleCostumeSelected;          // 0x020C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bAnimation;                     // 0x020D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetCurrentItemDetailType_bValid;          // 0x020E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	E_ItemDetailTypes                             CallFunc_GetCurrentItemDetailType_DetailType;      // 0x020F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9377[0x4];                                     // 0x0214(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_Array_Get_Item_6;                         // 0x0218(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9378[0x7];                                     // 0x0221(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCurrentLevelName_ReturnValue_2;        // 0x0228(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	uint8                                         Pad_9379[0x8];                                     // 0x0238(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_Find_Map_Spawn_Location_for_Item_Detail_Capture_OutTransform_2; // 0x0240(0x0030)(IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_2;             // 0x0270(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_937A[0x4];                                     // 0x0274(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2; // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_Array_Get_Item_7;                         // 0x0280(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_937B[0x7];                                     // 0x0289(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UShopMenuDetailsCostume_C*              K2Node_DynamicCast_AsShop_Menu_Details_Costume;    // 0x0290(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0299(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_937C[0x6];                                     // 0x029A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ImagineForCapture_Studio_C*         CallFunc_FinishSpawningActor_ReturnValue_2;        // 0x02A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x02A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_937D[0x4];                                     // 0x02AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCurrentLevelName_ReturnValue_3;        // 0x02B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_Find_Map_Spawn_Location_for_Item_Detail_Capture_OutTransform_3; // 0x02C0(0x0030)(IsPlainOldData, NoDestructor)
	class ABP_PlayerSceneCapture2D_Studio_C*      CallFunc_SpawnPlayerCaptureStudio_ReturnValue;     // 0x02F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3; // 0x02F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MountImagineForCapture_Studio_C*    CallFunc_FinishSpawningActor_ReturnValue_3;        // 0x0300(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_3;                  // 0x0308(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_4;                  // 0x030C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0310(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetWeaponStickerInfoByItemId_OutIsWeaponSticker; // 0x0311(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_937E[0x2];                                     // 0x0312(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAppearanceWeaponSticker               CallFunc_GetWeaponStickerInfoByItemId_OutWeaponStickerInfo; // 0x0314(0x0010)(NoDestructor)
	E_SBDetailsZoomIn                             K2Node_CustomEvent_Type;                           // 0x0324(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_937F[0x3];                                     // 0x0325(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0328(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Variable_2;                               // 0x0338(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9380[0x4];                                     // 0x033C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0340(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0348(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0349(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9381[0x2];                                     // 0x034A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x034C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0350(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9382[0x3];                                     // 0x0351(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(E_SBDetailsZoomIn Type)>       K2Node_CreateDelegate_OutputDelegate_3;            // 0x0354(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Variable_3;                               // 0x0364(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x0368(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x036C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_2;             // 0x0370(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue_1;              // 0x0371(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_3;             // 0x0372(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_2;                    // 0x0373(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1; // 0x0374(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9383[0x3];                                     // 0x0375(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_3;             // 0x0378(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9384[0x4];                                     // 0x037C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UShopMenuDetailsWeapon_C*               CallFunc_Create_ReturnValue;                       // 0x0380(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UShopMenuDetailsItem_C*                 CallFunc_Create_ReturnValue_1;                     // 0x0388(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UShopMenuDetailsCostume_C*              CallFunc_Create_ReturnValue_2;                     // 0x0390(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UShopMenuDetailsImagineBattle_C*        CallFunc_Create_ReturnValue_3;                     // 0x0398(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UUserWidget* InWidget)>  K2Node_CreateDelegate_OutputDelegate_4;            // 0x03A0(0x0010)(ZeroConstructor, NoDestructor)
	class UShopMenuDetailsImagineInner_C*         CallFunc_Create_ReturnValue_4;                     // 0x03B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UShopMenuDetailsImagineMount_C*         CallFunc_Create_ReturnValue_5;                     // 0x03B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UShopMenuDetailsCurrency_C*             CallFunc_Create_ReturnValue_6;                     // 0x03C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_5;                  // 0x03C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9385[0x4];                                     // 0x03CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UOverlaySlot*                           CallFunc_AddChildToOverlay_ReturnValue;            // 0x03D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UShopMenuDetailsStamp_C*                CallFunc_Create_ReturnValue_7;                     // 0x03D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UShopMenuDetailsJesture_C*              CallFunc_Create_ReturnValue_8;                     // 0x03E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_6;                  // 0x03E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9386[0x4];                                     // 0x03EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UOverlaySlot*                           CallFunc_AddChildToOverlay_ReturnValue_1;          // 0x03F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_7;                  // 0x03F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9387[0x4];                                     // 0x03FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UOverlaySlot*                           CallFunc_AddChildToOverlay_ReturnValue_2;          // 0x0400(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_8;                  // 0x0408(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9388[0x4];                                     // 0x040C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UOverlaySlot*                           CallFunc_AddChildToOverlay_ReturnValue_3;          // 0x0410(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_9;                  // 0x0418(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9389[0x4];                                     // 0x041C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UOverlaySlot*                           CallFunc_AddChildToOverlay_ReturnValue_4;          // 0x0420(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_10;                 // 0x0428(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_938A[0x4];                                     // 0x042C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UOverlaySlot*                           CallFunc_AddChildToOverlay_ReturnValue_5;          // 0x0430(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UShopMenuDetailsAchievement_C*          CallFunc_Create_ReturnValue_9;                     // 0x0438(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UShopMenuDetailsTacticalAbility_C*      CallFunc_Create_ReturnValue_10;                    // 0x0440(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_11;                 // 0x0448(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_938B[0x4];                                     // 0x044C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UOverlaySlot*                           CallFunc_AddChildToOverlay_ReturnValue_6;          // 0x0450(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_12;                 // 0x0458(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_938C[0x4];                                     // 0x045C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UOverlaySlot*                           CallFunc_AddChildToOverlay_ReturnValue_7;          // 0x0460(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool IsMaleCostumeSelected)>   K2Node_CreateDelegate_OutputDelegate_5;            // 0x0468(0x0010)(ZeroConstructor, NoDestructor)
	class UShopMenuDetailsFusionItem_C*           CallFunc_Create_ReturnValue_11;                    // 0x0478(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0480(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_938D[0x3];                                     // 0x0481(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_13;                 // 0x0484(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_4;             // 0x0488(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_938E[0x4];                                     // 0x048C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UOverlaySlot*                           CallFunc_AddChildToOverlay_ReturnValue_8;          // 0x0490(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_Array_Get_Item_8;                         // 0x0498(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UShopMenuDetailsFusionItem_C*           K2Node_DynamicCast_AsShop_Menu_Details_Fusion_Item; // 0x04A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x04A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_938F[0x7];                                     // 0x04A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UShopMenuDetailsTacticalAbility_C*      K2Node_DynamicCast_AsShop_Menu_Details_Tactical_Ability; // 0x04B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x04B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x04B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x04BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9390[0x5];                                     // 0x04BB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UShopMenuDetailsAchievement_C*          K2Node_DynamicCast_AsShop_Menu_Details_Achievement; // 0x04C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x04C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9391[0x7];                                     // 0x04C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UShopMenuDetailsJesture_C*              K2Node_DynamicCast_AsShop_Menu_Details_Jesture;    // 0x04D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_6;                     // 0x04D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x04D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_9;                    // 0x04DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9392[0x5];                                     // 0x04DB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UShopMenuDetailsStamp_C*                K2Node_DynamicCast_AsShop_Menu_Details_Stamp;      // 0x04E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_7;                     // 0x04E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9393[0x7];                                     // 0x04E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UShopMenuDetailsCurrency_C*             K2Node_DynamicCast_AsShop_Menu_Details_Currency;   // 0x04F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_8;                     // 0x04F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_10;                   // 0x04F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_11;                   // 0x04FA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9394[0x5];                                     // 0x04FB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UShopMenuDetailsImagineMount_C*         K2Node_DynamicCast_AsShop_Menu_Details_Imagine_Mount; // 0x0500(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_9;                     // 0x0508(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9395[0x7];                                     // 0x0509(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UShopMenuDetailsImagineInner_C*         K2Node_DynamicCast_AsShop_Menu_Details_Imagine_Inner; // 0x0510(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_10;                    // 0x0518(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_12;                   // 0x0519(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_13;                   // 0x051A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9396[0x5];                                     // 0x051B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UShopMenuDetailsImagineBattle_C*        K2Node_DynamicCast_AsShop_Menu_Details_Imagine_Battle; // 0x0520(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_11;                    // 0x0528(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9397[0x7];                                     // 0x0529(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UShopMenuDetailsCostume_C*              K2Node_DynamicCast_AsShop_Menu_Details_Costume_1;  // 0x0530(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_12;                    // 0x0538(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_14;                   // 0x0539(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_15;                   // 0x053A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9398[0x5];                                     // 0x053B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UShopMenuDetailsWeapon_C*               K2Node_DynamicCast_AsShop_Menu_Details_Weapon;     // 0x0540(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_13;                    // 0x0548(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9399[0x7];                                     // 0x0549(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UShopMenuDetailsItem_C*                 K2Node_DynamicCast_AsShop_Menu_Details_Item;       // 0x0550(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_14;                    // 0x0558(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_16;                   // 0x0559(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_17;                   // 0x055A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_18;                   // 0x055B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Variable_5;                               // 0x055C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_6;                               // 0x0560(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_5;                 // 0x0564(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_4;             // 0x0568(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue_2;              // 0x0569(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_5;             // 0x056A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_3;                    // 0x056B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue_2; // 0x056C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_939A[0x3];                                     // 0x056D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_5;             // 0x0570(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_14;                 // 0x0574(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_15;                 // 0x0578(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_16;                 // 0x057C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOverlaySlot*                           CallFunc_AddChildToOverlay_ReturnValue_9;          // 0x0580(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOverlaySlot*                           CallFunc_AddChildToOverlay_ReturnValue_10;         // 0x0588(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0590(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_939B[0x4];                                     // 0x0594(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UOverlaySlot*                           CallFunc_AddChildToOverlay_ReturnValue_11;         // 0x0598(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x05A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_939C[0x3];                                     // 0x05A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(ESBRewardItemType RewardType, int32 ItemIndex)> K2Node_CreateDelegate_OutputDelegate_6;            // 0x05A4(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(E_SBDetailsZoomIn Type)>       K2Node_CreateDelegate_OutputDelegate_7;            // 0x05B4(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_8;            // 0x05C4(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(ESBRewardItemType RewardType, int32 ItemIndex)> K2Node_CreateDelegate_OutputDelegate_9;            // 0x05D4(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_10;           // 0x05E4(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(E_SBDetailsZoomIn Type)>       K2Node_CreateDelegate_OutputDelegate_11;           // 0x05F4(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_1;             // 0x0604(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0608(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_939D[0x3];                                     // 0x0609(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_12;           // 0x060C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(E_SBDetailsZoomIn Type)>       K2Node_CreateDelegate_OutputDelegate_13;           // 0x061C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_14;           // 0x062C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(E_SBDetailsZoomIn Type)>       K2Node_CreateDelegate_OutputDelegate_15;           // 0x063C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_2;             // 0x064C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x0650(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_939E[0x7];                                     // 0x0651(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCurrentLevelName_ReturnValue_4;        // 0x0658(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item_9;                         // 0x0668(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0670(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_19;                   // 0x0674(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_4;                // 0x0675(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0676(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_939F[0x1];                                     // 0x0677(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_NameToText_ReturnValue;              // 0x0678(0x0018)()
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0690(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93A0[0x7];                                     // 0x0691(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0698(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_3;                          // 0x06D8(0x0010)(ReferenceParm)
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x06E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93A1[0x7];                                     // 0x06E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x06F0(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0708(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0718(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue_2;                    // 0x0720(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93A2[0x3];                                     // 0x0721(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               K2Node_CustomEvent_Rotation;                       // 0x0724(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0730(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93A3[0x7];                                     // 0x0731(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item_10;                        // 0x0738(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_LayoutType_1;                   // 0x0740(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_20;                   // 0x0748(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93A4[0x7];                                     // 0x0749(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_CaptureStudioBase_C*                K2Node_DynamicCast_AsBP_Capture_Studio_Base;       // 0x0750(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_15;                    // 0x0758(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93A5[0x3];                                     // 0x0759(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_LayoutType;                     // 0x075C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchName_CmpSuccess_1;                    // 0x0764(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0765(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x0766(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0767(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher) == 0x000010, "Wrong alignment on ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher");
static_assert(sizeof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher) == 0x000770, "Wrong size on ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, EntryPoint) == 0x000000, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::EntryPoint' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, Temp_int_Array_Index_Variable) == 0x000004, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, Temp_int_Array_Index_Variable_1) == 0x000008, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_MakeArray_Array) == 0x000010, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Array_Get_Item) == 0x000020, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000030, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_GetDisplayName_ReturnValue) == 0x000038, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_IsEmpty_ReturnValue) == 0x000048, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_MakeArray_Array_1) == 0x000050, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Array_Get_Item_1) == 0x000060, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, Temp_int_Variable) == 0x000068, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_K2_GetRootComponent_ReturnValue_1) == 0x000070, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_K2_GetRootComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Conv_IntToByte_ReturnValue) == 0x000078, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_GetDisplayName_ReturnValue_1) == 0x000080, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_GetDisplayName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_GetValidValue_ReturnValue) == 0x000090, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_SwitchEnum_CmpSuccess) == 0x000091, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_GetCurrentLevelName_ReturnValue) == 0x000098, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_GetCurrentLevelName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_GetCurrentLevelName_ReturnValue_1) == 0x0000A8, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_GetCurrentLevelName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Find_Map_Spawn_Location_for_Item_Detail_Capture_OutTransform) == 0x0000C0, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Find_Map_Spawn_Location_for_Item_Detail_Capture_OutTransform' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Find_Map_Spawn_Location_for_Item_Detail_Capture_OutTransform_1) == 0x0000F0, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Find_Map_Spawn_Location_for_Item_Detail_Capture_OutTransform_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000120, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1) == 0x000128, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_FinishSpawningActor_ReturnValue) == 0x000130, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_FinishSpawningActor_ReturnValue_1) == 0x000138, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_FinishSpawningActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Array_Add_ReturnValue) == 0x000140, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Array_Add_ReturnValue_1) == 0x000144, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Array_Get_Item_2) == 0x000148, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_IsValid_ReturnValue) == 0x000150, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_DynamicCast_AsBP_Mannequin_for_Capture_Studio) == 0x000158, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_DynamicCast_AsBP_Mannequin_for_Capture_Studio' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_DynamicCast_bSuccess) == 0x000160, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_IsValid_ReturnValue_1) == 0x000161, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, Temp_int_Variable_1) == 0x000164, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Array_Get_Item_3) == 0x000168, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Add_IntInt_ReturnValue_1) == 0x000170, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_DynamicCast_AsBP_Weapon_for_Capture_Studio) == 0x000178, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_DynamicCast_AsBP_Weapon_for_Capture_Studio' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_DynamicCast_bSuccess_1) == 0x000180, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000181, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x000182, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000184, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_CustomEvent_InWidget) == 0x000188, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_CustomEvent_InWidget' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, Temp_int_Loop_Counter_Variable_1) == 0x000190, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Add_IntInt_ReturnValue_2) == 0x000194, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_IsEmpty_ReturnValue_1) == 0x000198, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_IsEmpty_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_CreateDelegate_OutputDelegate) == 0x00019C, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_CreateDelegate_OutputDelegate_1) == 0x0001AC, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_MakeArray_Array_2) == 0x0001C0, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Array_Get_Item_4) == 0x0001D0, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Array_Get_Item_5) == 0x0001D8, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Array_Get_Item_5' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_K2_GetRootComponent_ReturnValue_2) == 0x0001E0, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_K2_GetRootComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_GetDisplayName_ReturnValue_2) == 0x0001E8, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_GetDisplayName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_IsValid_ReturnValue_2) == 0x0001F8, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Array_Length_ReturnValue) == 0x0001FC, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Less_IntInt_ReturnValue) == 0x000200, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_GetChildrenCount_ReturnValue) == 0x000204, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Subtract_IntInt_ReturnValue) == 0x000208, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_CustomEvent_IsMaleCostumeSelected) == 0x00020C, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_CustomEvent_IsMaleCostumeSelected' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_CustomEvent_bAnimation) == 0x00020D, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_CustomEvent_bAnimation' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_GetCurrentItemDetailType_bValid) == 0x00020E, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_GetCurrentItemDetailType_bValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_GetCurrentItemDetailType_DetailType) == 0x00020F, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_GetCurrentItemDetailType_DetailType' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Conv_ByteToInt_ReturnValue_1) == 0x000210, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Conv_ByteToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Array_Get_Item_6) == 0x000218, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Array_Get_Item_6' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_MakeLiteralByte_ReturnValue) == 0x000220, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_GetCurrentLevelName_ReturnValue_2) == 0x000228, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_GetCurrentLevelName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Find_Map_Spawn_Location_for_Item_Detail_Capture_OutTransform_2) == 0x000240, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Find_Map_Spawn_Location_for_Item_Detail_Capture_OutTransform_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Conv_ByteToInt_ReturnValue_2) == 0x000270, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Conv_ByteToInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2) == 0x000278, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Array_Get_Item_7) == 0x000280, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Array_Get_Item_7' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_IsValid_ReturnValue_3) == 0x000288, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_DynamicCast_AsShop_Menu_Details_Costume) == 0x000290, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_DynamicCast_AsShop_Menu_Details_Costume' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_DynamicCast_bSuccess_2) == 0x000298, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_IsValid_ReturnValue_4) == 0x000299, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_FinishSpawningActor_ReturnValue_2) == 0x0002A0, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_FinishSpawningActor_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Array_Add_ReturnValue_2) == 0x0002A8, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_GetCurrentLevelName_ReturnValue_3) == 0x0002B0, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_GetCurrentLevelName_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Find_Map_Spawn_Location_for_Item_Detail_Capture_OutTransform_3) == 0x0002C0, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Find_Map_Spawn_Location_for_Item_Detail_Capture_OutTransform_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_SpawnPlayerCaptureStudio_ReturnValue) == 0x0002F0, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_SpawnPlayerCaptureStudio_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3) == 0x0002F8, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_FinishSpawningActor_ReturnValue_3) == 0x000300, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_FinishSpawningActor_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Array_Add_ReturnValue_3) == 0x000308, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Array_Add_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Array_Add_ReturnValue_4) == 0x00030C, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Array_Add_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_SwitchEnum_CmpSuccess_1) == 0x000310, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_GetWeaponStickerInfoByItemId_OutIsWeaponSticker) == 0x000311, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_GetWeaponStickerInfoByItemId_OutIsWeaponSticker' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_GetWeaponStickerInfoByItemId_OutWeaponStickerInfo) == 0x000314, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_GetWeaponStickerInfoByItemId_OutWeaponStickerInfo' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_CustomEvent_Type) == 0x000324, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_CustomEvent_Type' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_CreateDelegate_OutputDelegate_2) == 0x000328, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, Temp_int_Variable_2) == 0x000338, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_GetChildAt_ReturnValue) == 0x000340, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_IsValid_ReturnValue_5) == 0x000348, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000349, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Add_IntInt_ReturnValue_3) == 0x00034C, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, Temp_bool_Variable) == 0x000350, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_CreateDelegate_OutputDelegate_3) == 0x000354, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, Temp_int_Variable_3) == 0x000364, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, Temp_int_Variable_4) == 0x000368, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Add_IntInt_ReturnValue_4) == 0x00036C, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Conv_IntToByte_ReturnValue_2) == 0x000370, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Conv_IntToByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_GetValidValue_ReturnValue_1) == 0x000371, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_GetValidValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Conv_IntToByte_ReturnValue_3) == 0x000372, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Conv_IntToByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_SwitchEnum_CmpSuccess_2) == 0x000373, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_SwitchEnum_CmpSuccess_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1) == 0x000374, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Conv_ByteToInt_ReturnValue_3) == 0x000378, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Conv_ByteToInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Create_ReturnValue) == 0x000380, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Create_ReturnValue_1) == 0x000388, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Create_ReturnValue_2) == 0x000390, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Create_ReturnValue_3) == 0x000398, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Create_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_CreateDelegate_OutputDelegate_4) == 0x0003A0, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Create_ReturnValue_4) == 0x0003B0, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Create_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Create_ReturnValue_5) == 0x0003B8, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Create_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Create_ReturnValue_6) == 0x0003C0, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Create_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Array_Add_ReturnValue_5) == 0x0003C8, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Array_Add_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_AddChildToOverlay_ReturnValue) == 0x0003D0, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_AddChildToOverlay_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Create_ReturnValue_7) == 0x0003D8, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Create_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Create_ReturnValue_8) == 0x0003E0, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Create_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Array_Add_ReturnValue_6) == 0x0003E8, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Array_Add_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_AddChildToOverlay_ReturnValue_1) == 0x0003F0, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_AddChildToOverlay_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Array_Add_ReturnValue_7) == 0x0003F8, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Array_Add_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_AddChildToOverlay_ReturnValue_2) == 0x000400, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_AddChildToOverlay_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Array_Add_ReturnValue_8) == 0x000408, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Array_Add_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_AddChildToOverlay_ReturnValue_3) == 0x000410, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_AddChildToOverlay_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Array_Add_ReturnValue_9) == 0x000418, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Array_Add_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_AddChildToOverlay_ReturnValue_4) == 0x000420, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_AddChildToOverlay_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Array_Add_ReturnValue_10) == 0x000428, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Array_Add_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_AddChildToOverlay_ReturnValue_5) == 0x000430, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_AddChildToOverlay_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Create_ReturnValue_9) == 0x000438, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Create_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Create_ReturnValue_10) == 0x000440, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Create_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Array_Add_ReturnValue_11) == 0x000448, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Array_Add_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_AddChildToOverlay_ReturnValue_6) == 0x000450, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_AddChildToOverlay_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Array_Add_ReturnValue_12) == 0x000458, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Array_Add_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_AddChildToOverlay_ReturnValue_7) == 0x000460, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_AddChildToOverlay_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_CreateDelegate_OutputDelegate_5) == 0x000468, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Create_ReturnValue_11) == 0x000478, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Create_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000480, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Array_Add_ReturnValue_13) == 0x000484, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Array_Add_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Conv_ByteToInt_ReturnValue_4) == 0x000488, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Conv_ByteToInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_AddChildToOverlay_ReturnValue_8) == 0x000490, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_AddChildToOverlay_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Array_Get_Item_8) == 0x000498, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Array_Get_Item_8' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_DynamicCast_AsShop_Menu_Details_Fusion_Item) == 0x0004A0, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_DynamicCast_AsShop_Menu_Details_Fusion_Item' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_DynamicCast_bSuccess_3) == 0x0004A8, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_DynamicCast_AsShop_Menu_Details_Tactical_Ability) == 0x0004B0, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_DynamicCast_AsShop_Menu_Details_Tactical_Ability' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_DynamicCast_bSuccess_4) == 0x0004B8, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_IsValid_ReturnValue_6) == 0x0004B9, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_IsValid_ReturnValue_7) == 0x0004BA, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_DynamicCast_AsShop_Menu_Details_Achievement) == 0x0004C0, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_DynamicCast_AsShop_Menu_Details_Achievement' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_DynamicCast_bSuccess_5) == 0x0004C8, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_DynamicCast_AsShop_Menu_Details_Jesture) == 0x0004D0, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_DynamicCast_AsShop_Menu_Details_Jesture' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_DynamicCast_bSuccess_6) == 0x0004D8, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_IsValid_ReturnValue_8) == 0x0004D9, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_IsValid_ReturnValue_9) == 0x0004DA, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_IsValid_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_DynamicCast_AsShop_Menu_Details_Stamp) == 0x0004E0, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_DynamicCast_AsShop_Menu_Details_Stamp' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_DynamicCast_bSuccess_7) == 0x0004E8, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_DynamicCast_bSuccess_7' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_DynamicCast_AsShop_Menu_Details_Currency) == 0x0004F0, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_DynamicCast_AsShop_Menu_Details_Currency' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_DynamicCast_bSuccess_8) == 0x0004F8, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_DynamicCast_bSuccess_8' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_IsValid_ReturnValue_10) == 0x0004F9, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_IsValid_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_IsValid_ReturnValue_11) == 0x0004FA, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_IsValid_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_DynamicCast_AsShop_Menu_Details_Imagine_Mount) == 0x000500, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_DynamicCast_AsShop_Menu_Details_Imagine_Mount' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_DynamicCast_bSuccess_9) == 0x000508, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_DynamicCast_bSuccess_9' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_DynamicCast_AsShop_Menu_Details_Imagine_Inner) == 0x000510, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_DynamicCast_AsShop_Menu_Details_Imagine_Inner' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_DynamicCast_bSuccess_10) == 0x000518, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_DynamicCast_bSuccess_10' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_IsValid_ReturnValue_12) == 0x000519, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_IsValid_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_IsValid_ReturnValue_13) == 0x00051A, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_IsValid_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_DynamicCast_AsShop_Menu_Details_Imagine_Battle) == 0x000520, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_DynamicCast_AsShop_Menu_Details_Imagine_Battle' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_DynamicCast_bSuccess_11) == 0x000528, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_DynamicCast_bSuccess_11' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_DynamicCast_AsShop_Menu_Details_Costume_1) == 0x000530, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_DynamicCast_AsShop_Menu_Details_Costume_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_DynamicCast_bSuccess_12) == 0x000538, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_DynamicCast_bSuccess_12' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_IsValid_ReturnValue_14) == 0x000539, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_IsValid_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_IsValid_ReturnValue_15) == 0x00053A, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_IsValid_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_DynamicCast_AsShop_Menu_Details_Weapon) == 0x000540, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_DynamicCast_AsShop_Menu_Details_Weapon' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_DynamicCast_bSuccess_13) == 0x000548, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_DynamicCast_bSuccess_13' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_DynamicCast_AsShop_Menu_Details_Item) == 0x000550, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_DynamicCast_AsShop_Menu_Details_Item' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_DynamicCast_bSuccess_14) == 0x000558, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_DynamicCast_bSuccess_14' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_IsValid_ReturnValue_16) == 0x000559, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_IsValid_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_IsValid_ReturnValue_17) == 0x00055A, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_IsValid_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_IsValid_ReturnValue_18) == 0x00055B, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_IsValid_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, Temp_int_Variable_5) == 0x00055C, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, Temp_int_Variable_6) == 0x000560, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Add_IntInt_ReturnValue_5) == 0x000564, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Add_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Conv_IntToByte_ReturnValue_4) == 0x000568, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Conv_IntToByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_GetValidValue_ReturnValue_2) == 0x000569, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_GetValidValue_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Conv_IntToByte_ReturnValue_5) == 0x00056A, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Conv_IntToByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_SwitchEnum_CmpSuccess_3) == 0x00056B, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_SwitchEnum_CmpSuccess_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_GetEnumeratorValueFromIndex_ReturnValue_2) == 0x00056C, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_GetEnumeratorValueFromIndex_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Conv_ByteToInt_ReturnValue_5) == 0x000570, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Conv_ByteToInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Array_Add_ReturnValue_14) == 0x000574, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Array_Add_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Array_Add_ReturnValue_15) == 0x000578, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Array_Add_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Array_Add_ReturnValue_16) == 0x00057C, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Array_Add_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_AddChildToOverlay_ReturnValue_9) == 0x000580, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_AddChildToOverlay_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_AddChildToOverlay_ReturnValue_10) == 0x000588, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_AddChildToOverlay_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_MakeLiteralInt_ReturnValue) == 0x000590, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_AddChildToOverlay_ReturnValue_11) == 0x000598, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_AddChildToOverlay_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Less_IntInt_ReturnValue_1) == 0x0005A0, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_CreateDelegate_OutputDelegate_6) == 0x0005A4, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_CreateDelegate_OutputDelegate_7) == 0x0005B4, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_CreateDelegate_OutputDelegate_8) == 0x0005C4, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_CreateDelegate_OutputDelegate_9) == 0x0005D4, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_CreateDelegate_OutputDelegate_10) == 0x0005E4, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_CreateDelegate_OutputDelegate_11) == 0x0005F4, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_MakeLiteralInt_ReturnValue_1) == 0x000604, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_MakeLiteralInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Less_IntInt_ReturnValue_2) == 0x000608, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_CreateDelegate_OutputDelegate_12) == 0x00060C, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_CreateDelegate_OutputDelegate_12' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_CreateDelegate_OutputDelegate_13) == 0x00061C, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_CreateDelegate_OutputDelegate_13' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_CreateDelegate_OutputDelegate_14) == 0x00062C, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_CreateDelegate_OutputDelegate_14' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_CreateDelegate_OutputDelegate_15) == 0x00063C, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_CreateDelegate_OutputDelegate_15' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_MakeLiteralInt_ReturnValue_2) == 0x00064C, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_MakeLiteralInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Less_IntInt_ReturnValue_3) == 0x000650, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_GetCurrentLevelName_ReturnValue_4) == 0x000658, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_GetCurrentLevelName_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Array_Get_Item_9) == 0x000668, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Array_Get_Item_9' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Array_Length_ReturnValue_1) == 0x000670, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_IsValid_ReturnValue_19) == 0x000674, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_IsValid_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Less_IntInt_ReturnValue_4) == 0x000675, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Less_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_Event_IsDesignTime) == 0x000676, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Conv_NameToText_ReturnValue) == 0x000678, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Conv_NameToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_BooleanAND_ReturnValue) == 0x000690, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_MakeStruct_FormatArgumentData) == 0x000698, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_MakeArray_Array_3) == 0x0006D8, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_SwitchName_CmpSuccess) == 0x0006E8, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_SwitchName_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Format_ReturnValue) == 0x0006F0, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Conv_TextToString_ReturnValue) == 0x000708, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000718, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_IsEmpty_ReturnValue_2) == 0x000720, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_IsEmpty_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_CustomEvent_Rotation) == 0x000724, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_CustomEvent_Rotation' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000730, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_Array_Get_Item_10) == 0x000738, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_Array_Get_Item_10' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_CustomEvent_LayoutType_1) == 0x000740, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_CustomEvent_LayoutType_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_IsValid_ReturnValue_20) == 0x000748, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_IsValid_ReturnValue_20' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_DynamicCast_AsBP_Capture_Studio_Base) == 0x000750, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_DynamicCast_AsBP_Capture_Studio_Base' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_DynamicCast_bSuccess_15) == 0x000758, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_DynamicCast_bSuccess_15' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_CustomEvent_LayoutType) == 0x00075C, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_CustomEvent_LayoutType' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_SwitchName_CmpSuccess_1) == 0x000764, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_SwitchName_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000765, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, K2Node_Select_Default) == 0x000766, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher, CallFunc_BooleanAND_ReturnValue_1) == 0x000767, "Member 'ShopMenuDetailsSwitcher_C_ExecuteUbergraph_ShopMenuDetailsSwitcher::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.UpdateDesignAndData
// 0x0008 (0x0008 - 0x0000)
struct ShopMenuDetailsSwitcher_C_UpdateDesignAndData final
{
public:
	class FName                                   Param_LayoutType;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsSwitcher_C_UpdateDesignAndData) == 0x000004, "Wrong alignment on ShopMenuDetailsSwitcher_C_UpdateDesignAndData");
static_assert(sizeof(ShopMenuDetailsSwitcher_C_UpdateDesignAndData) == 0x000008, "Wrong size on ShopMenuDetailsSwitcher_C_UpdateDesignAndData");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_UpdateDesignAndData, Param_LayoutType) == 0x000000, "Member 'ShopMenuDetailsSwitcher_C_UpdateDesignAndData::Param_LayoutType' has a wrong offset!");

// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.Init
// 0x0008 (0x0008 - 0x0000)
struct ShopMenuDetailsSwitcher_C_Init final
{
public:
	class FName                                   Param_LayoutType;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsSwitcher_C_Init) == 0x000004, "Wrong alignment on ShopMenuDetailsSwitcher_C_Init");
static_assert(sizeof(ShopMenuDetailsSwitcher_C_Init) == 0x000008, "Wrong size on ShopMenuDetailsSwitcher_C_Init");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_Init, Param_LayoutType) == 0x000000, "Member 'ShopMenuDetailsSwitcher_C_Init::Param_LayoutType' has a wrong offset!");

// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.SetExternalDirectionalLightRotation
// 0x000C (0x000C - 0x0000)
struct ShopMenuDetailsSwitcher_C_SetExternalDirectionalLightRotation final
{
public:
	struct FRotator                               Rotation;                                          // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShopMenuDetailsSwitcher_C_SetExternalDirectionalLightRotation) == 0x000004, "Wrong alignment on ShopMenuDetailsSwitcher_C_SetExternalDirectionalLightRotation");
static_assert(sizeof(ShopMenuDetailsSwitcher_C_SetExternalDirectionalLightRotation) == 0x00000C, "Wrong size on ShopMenuDetailsSwitcher_C_SetExternalDirectionalLightRotation");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_SetExternalDirectionalLightRotation, Rotation) == 0x000000, "Member 'ShopMenuDetailsSwitcher_C_SetExternalDirectionalLightRotation::Rotation' has a wrong offset!");

// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct ShopMenuDetailsSwitcher_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShopMenuDetailsSwitcher_C_PreConstruct) == 0x000001, "Wrong alignment on ShopMenuDetailsSwitcher_C_PreConstruct");
static_assert(sizeof(ShopMenuDetailsSwitcher_C_PreConstruct) == 0x000001, "Wrong size on ShopMenuDetailsSwitcher_C_PreConstruct");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'ShopMenuDetailsSwitcher_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.OnClickZoomInEvent
// 0x0001 (0x0001 - 0x0000)
struct ShopMenuDetailsSwitcher_C_OnClickZoomInEvent final
{
public:
	E_SBDetailsZoomIn                             Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsSwitcher_C_OnClickZoomInEvent) == 0x000001, "Wrong alignment on ShopMenuDetailsSwitcher_C_OnClickZoomInEvent");
static_assert(sizeof(ShopMenuDetailsSwitcher_C_OnClickZoomInEvent) == 0x000001, "Wrong size on ShopMenuDetailsSwitcher_C_OnClickZoomInEvent");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_OnClickZoomInEvent, Type) == 0x000000, "Member 'ShopMenuDetailsSwitcher_C_OnClickZoomInEvent::Type' has a wrong offset!");

// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.CloseItemDetail
// 0x0001 (0x0001 - 0x0000)
struct ShopMenuDetailsSwitcher_C_CloseItemDetail final
{
public:
	bool                                          bAnimation;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShopMenuDetailsSwitcher_C_CloseItemDetail) == 0x000001, "Wrong alignment on ShopMenuDetailsSwitcher_C_CloseItemDetail");
static_assert(sizeof(ShopMenuDetailsSwitcher_C_CloseItemDetail) == 0x000001, "Wrong size on ShopMenuDetailsSwitcher_C_CloseItemDetail");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_CloseItemDetail, bAnimation) == 0x000000, "Member 'ShopMenuDetailsSwitcher_C_CloseItemDetail::bAnimation' has a wrong offset!");

// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.OnSelectCostumeType_Event
// 0x0001 (0x0001 - 0x0000)
struct ShopMenuDetailsSwitcher_C_OnSelectCostumeType_Event final
{
public:
	bool                                          IsMaleCostumeSelected;                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShopMenuDetailsSwitcher_C_OnSelectCostumeType_Event) == 0x000001, "Wrong alignment on ShopMenuDetailsSwitcher_C_OnSelectCostumeType_Event");
static_assert(sizeof(ShopMenuDetailsSwitcher_C_OnSelectCostumeType_Event) == 0x000001, "Wrong size on ShopMenuDetailsSwitcher_C_OnSelectCostumeType_Event");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_OnSelectCostumeType_Event, IsMaleCostumeSelected) == 0x000000, "Member 'ShopMenuDetailsSwitcher_C_OnSelectCostumeType_Event::IsMaleCostumeSelected' has a wrong offset!");

// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.OnEndCloseDetailAnimation_Event
// 0x0008 (0x0008 - 0x0000)
struct ShopMenuDetailsSwitcher_C_OnEndCloseDetailAnimation_Event final
{
public:
	class UUserWidget*                            InWidget;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsSwitcher_C_OnEndCloseDetailAnimation_Event) == 0x000008, "Wrong alignment on ShopMenuDetailsSwitcher_C_OnEndCloseDetailAnimation_Event");
static_assert(sizeof(ShopMenuDetailsSwitcher_C_OnEndCloseDetailAnimation_Event) == 0x000008, "Wrong size on ShopMenuDetailsSwitcher_C_OnEndCloseDetailAnimation_Event");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_OnEndCloseDetailAnimation_Event, InWidget) == 0x000000, "Member 'ShopMenuDetailsSwitcher_C_OnEndCloseDetailAnimation_Event::InWidget' has a wrong offset!");

// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.InitItemDetails
// 0x0070 (0x0070 - 0x0000)
struct ShopMenuDetailsSwitcher_C_InitItemDetails final
{
public:
	class FString                                 InCurrMapName;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UUserWidget*                            TmpDetailWidget;                                   // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_93A6[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93A7[0x2];                                     // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UShopMenuDetailsCostume_C*              K2Node_DynamicCast_AsShop_Menu_Details_Costume;    // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93A8[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UShopMenuDetailsWeapon_C*               K2Node_DynamicCast_AsShop_Menu_Details_Weapon;     // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93A9[0x5];                                     // 0x0053(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UShopMenuDetailsItem_C*                 K2Node_DynamicCast_AsShop_Menu_Details_Item;       // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93AA[0x1];                                     // 0x0063(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_Array_Get_Item;                           // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsSwitcher_C_InitItemDetails) == 0x000008, "Wrong alignment on ShopMenuDetailsSwitcher_C_InitItemDetails");
static_assert(sizeof(ShopMenuDetailsSwitcher_C_InitItemDetails) == 0x000070, "Wrong size on ShopMenuDetailsSwitcher_C_InitItemDetails");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_InitItemDetails, InCurrMapName) == 0x000000, "Member 'ShopMenuDetailsSwitcher_C_InitItemDetails::InCurrMapName' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_InitItemDetails, TmpDetailWidget) == 0x000010, "Member 'ShopMenuDetailsSwitcher_C_InitItemDetails::TmpDetailWidget' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_InitItemDetails, Temp_int_Variable) == 0x000018, "Member 'ShopMenuDetailsSwitcher_C_InitItemDetails::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_InitItemDetails, Temp_int_Variable_1) == 0x00001C, "Member 'ShopMenuDetailsSwitcher_C_InitItemDetails::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_InitItemDetails, CallFunc_Conv_IntToByte_ReturnValue) == 0x000020, "Member 'ShopMenuDetailsSwitcher_C_InitItemDetails::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_InitItemDetails, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'ShopMenuDetailsSwitcher_C_InitItemDetails::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_InitItemDetails, CallFunc_GetValidValue_ReturnValue) == 0x000028, "Member 'ShopMenuDetailsSwitcher_C_InitItemDetails::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_InitItemDetails, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000029, "Member 'ShopMenuDetailsSwitcher_C_InitItemDetails::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_InitItemDetails, K2Node_SwitchEnum_CmpSuccess) == 0x00002A, "Member 'ShopMenuDetailsSwitcher_C_InitItemDetails::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_InitItemDetails, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x00002B, "Member 'ShopMenuDetailsSwitcher_C_InitItemDetails::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_InitItemDetails, CallFunc_Conv_ByteToInt_ReturnValue) == 0x00002C, "Member 'ShopMenuDetailsSwitcher_C_InitItemDetails::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_InitItemDetails, CallFunc_MakeLiteralInt_ReturnValue) == 0x000030, "Member 'ShopMenuDetailsSwitcher_C_InitItemDetails::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_InitItemDetails, CallFunc_IsValid_ReturnValue) == 0x000034, "Member 'ShopMenuDetailsSwitcher_C_InitItemDetails::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_InitItemDetails, CallFunc_Less_IntInt_ReturnValue) == 0x000035, "Member 'ShopMenuDetailsSwitcher_C_InitItemDetails::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_InitItemDetails, K2Node_DynamicCast_AsShop_Menu_Details_Costume) == 0x000038, "Member 'ShopMenuDetailsSwitcher_C_InitItemDetails::K2Node_DynamicCast_AsShop_Menu_Details_Costume' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_InitItemDetails, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'ShopMenuDetailsSwitcher_C_InitItemDetails::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_InitItemDetails, K2Node_DynamicCast_AsShop_Menu_Details_Weapon) == 0x000048, "Member 'ShopMenuDetailsSwitcher_C_InitItemDetails::K2Node_DynamicCast_AsShop_Menu_Details_Weapon' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_InitItemDetails, K2Node_DynamicCast_bSuccess_1) == 0x000050, "Member 'ShopMenuDetailsSwitcher_C_InitItemDetails::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_InitItemDetails, CallFunc_IsValid_ReturnValue_1) == 0x000051, "Member 'ShopMenuDetailsSwitcher_C_InitItemDetails::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_InitItemDetails, CallFunc_IsValid_ReturnValue_2) == 0x000052, "Member 'ShopMenuDetailsSwitcher_C_InitItemDetails::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_InitItemDetails, K2Node_DynamicCast_AsShop_Menu_Details_Item) == 0x000058, "Member 'ShopMenuDetailsSwitcher_C_InitItemDetails::K2Node_DynamicCast_AsShop_Menu_Details_Item' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_InitItemDetails, K2Node_DynamicCast_bSuccess_2) == 0x000060, "Member 'ShopMenuDetailsSwitcher_C_InitItemDetails::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_InitItemDetails, CallFunc_MakeLiteralByte_ReturnValue) == 0x000061, "Member 'ShopMenuDetailsSwitcher_C_InitItemDetails::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_InitItemDetails, CallFunc_IsValid_ReturnValue_3) == 0x000062, "Member 'ShopMenuDetailsSwitcher_C_InitItemDetails::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_InitItemDetails, CallFunc_Conv_ByteToInt_ReturnValue_1) == 0x000064, "Member 'ShopMenuDetailsSwitcher_C_InitItemDetails::CallFunc_Conv_ByteToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_InitItemDetails, CallFunc_Array_Get_Item) == 0x000068, "Member 'ShopMenuDetailsSwitcher_C_InitItemDetails::CallFunc_Array_Get_Item' has a wrong offset!");

// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ShowItemDetails
// 0x00B8 (0x00B8 - 0x0000)
struct ShopMenuDetailsSwitcher_C_ShowItemDetails final
{
public:
	int32                                         InItemIndex;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     InItemType;                                        // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_93AB[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Param_Amount;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_AmountMin;                                   // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Param_UniqueId;                                    // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          Param_bShowProduct;                                // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ItemTypeToDetailType_bValid;              // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	E_ItemDetailTypes                             CallFunc_ItemTypeToDetailType_DetailType;          // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindCostumeMaster_bIsValid;               // 0x0027(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSBMasterCostume                       CallFunc_FindCostumeMaster_CostumeMaster;          // 0x0028(0x0088)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShopMenuDetailsSwitcher_C_ShowItemDetails) == 0x000008, "Wrong alignment on ShopMenuDetailsSwitcher_C_ShowItemDetails");
static_assert(sizeof(ShopMenuDetailsSwitcher_C_ShowItemDetails) == 0x0000B8, "Wrong size on ShopMenuDetailsSwitcher_C_ShowItemDetails");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails, InItemIndex) == 0x000000, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails::InItemIndex' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails, InItemType) == 0x000004, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails::InItemType' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails, Param_Amount) == 0x000008, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails::Param_Amount' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails, Param_AmountMin) == 0x00000C, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails::Param_AmountMin' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails, Param_UniqueId) == 0x000010, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails::Param_UniqueId' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails, Param_bShowProduct) == 0x000020, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails::Param_bShowProduct' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails, CallFunc_ItemTypeToDetailType_bValid) == 0x000021, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails::CallFunc_ItemTypeToDetailType_bValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails, CallFunc_ItemTypeToDetailType_DetailType) == 0x000022, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails::CallFunc_ItemTypeToDetailType_DetailType' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails, CallFunc_Not_PreBool_ReturnValue) == 0x000023, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000024, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails, CallFunc_BooleanAND_ReturnValue) == 0x000025, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails, CallFunc_BooleanOR_ReturnValue) == 0x000026, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails, CallFunc_FindCostumeMaster_bIsValid) == 0x000027, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails::CallFunc_FindCostumeMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails, CallFunc_FindCostumeMaster_CostumeMaster) == 0x000028, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails::CallFunc_FindCostumeMaster_CostumeMaster' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails, K2Node_SwitchEnum_CmpSuccess) == 0x0000B0, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails, CallFunc_K2_IsValidTimerHandle_ReturnValue) == 0x0000B1, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails::CallFunc_K2_IsValidTimerHandle_ReturnValue' has a wrong offset!");

// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.CloseItemDetailInternal
// 0x00D8 (0x00D8 - 0x0000)
struct ShopMenuDetailsSwitcher_C_CloseItemDetailInternal final
{
public:
	E_ItemDetailTypes                             Param_DetailType;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_93AC[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93AD[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UShopMenuDetailsItem_C*                 K2Node_DynamicCast_AsShop_Menu_Details_Item;       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93AE[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UShopMenuDetailsFusionItem_C*           K2Node_DynamicCast_AsShop_Menu_Details_Fusion_Item; // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93AF[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UShopMenuDetailsTacticalAbility_C*      K2Node_DynamicCast_AsShop_Menu_Details_Tactical_Ability; // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93B0[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UShopMenuDetailsAchievement_C*          K2Node_DynamicCast_AsShop_Menu_Details_Achievement; // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93B1[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UShopMenuDetailsJesture_C*              K2Node_DynamicCast_AsShop_Menu_Details_Jesture;    // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93B2[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UShopMenuDetailsStamp_C*                K2Node_DynamicCast_AsShop_Menu_Details_Stamp;      // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93B3[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UShopMenuDetailsCurrency_C*             K2Node_DynamicCast_AsShop_Menu_Details_Currency;   // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_6;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93B4[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UShopMenuDetailsImagineMount_C*         K2Node_DynamicCast_AsShop_Menu_Details_Imagine_Mount; // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_7;                     // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93B5[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UShopMenuDetailsImagineInner_C*         K2Node_DynamicCast_AsShop_Menu_Details_Imagine_Inner; // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_8;                     // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93B6[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UShopMenuDetailsImagineBattle_C*        K2Node_DynamicCast_AsShop_Menu_Details_Imagine_Battle; // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_9;                     // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93B7[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UShopMenuDetailsCostume_C*              K2Node_DynamicCast_AsShop_Menu_Details_Costume;    // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_10;                    // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93B8[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UShopMenuDetailsWeapon_C*               K2Node_DynamicCast_AsShop_Menu_Details_Weapon;     // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_11;                    // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShopMenuDetailsSwitcher_C_CloseItemDetailInternal) == 0x000008, "Wrong alignment on ShopMenuDetailsSwitcher_C_CloseItemDetailInternal");
static_assert(sizeof(ShopMenuDetailsSwitcher_C_CloseItemDetailInternal) == 0x0000D8, "Wrong size on ShopMenuDetailsSwitcher_C_CloseItemDetailInternal");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_CloseItemDetailInternal, Param_DetailType) == 0x000000, "Member 'ShopMenuDetailsSwitcher_C_CloseItemDetailInternal::Param_DetailType' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_CloseItemDetailInternal, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000004, "Member 'ShopMenuDetailsSwitcher_C_CloseItemDetailInternal::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_CloseItemDetailInternal, K2Node_SwitchEnum_CmpSuccess) == 0x000008, "Member 'ShopMenuDetailsSwitcher_C_CloseItemDetailInternal::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_CloseItemDetailInternal, CallFunc_Array_Get_Item) == 0x000010, "Member 'ShopMenuDetailsSwitcher_C_CloseItemDetailInternal::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_CloseItemDetailInternal, K2Node_DynamicCast_AsShop_Menu_Details_Item) == 0x000018, "Member 'ShopMenuDetailsSwitcher_C_CloseItemDetailInternal::K2Node_DynamicCast_AsShop_Menu_Details_Item' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_CloseItemDetailInternal, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'ShopMenuDetailsSwitcher_C_CloseItemDetailInternal::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_CloseItemDetailInternal, K2Node_DynamicCast_AsShop_Menu_Details_Fusion_Item) == 0x000028, "Member 'ShopMenuDetailsSwitcher_C_CloseItemDetailInternal::K2Node_DynamicCast_AsShop_Menu_Details_Fusion_Item' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_CloseItemDetailInternal, K2Node_DynamicCast_bSuccess_1) == 0x000030, "Member 'ShopMenuDetailsSwitcher_C_CloseItemDetailInternal::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_CloseItemDetailInternal, K2Node_DynamicCast_AsShop_Menu_Details_Tactical_Ability) == 0x000038, "Member 'ShopMenuDetailsSwitcher_C_CloseItemDetailInternal::K2Node_DynamicCast_AsShop_Menu_Details_Tactical_Ability' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_CloseItemDetailInternal, K2Node_DynamicCast_bSuccess_2) == 0x000040, "Member 'ShopMenuDetailsSwitcher_C_CloseItemDetailInternal::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_CloseItemDetailInternal, K2Node_DynamicCast_AsShop_Menu_Details_Achievement) == 0x000048, "Member 'ShopMenuDetailsSwitcher_C_CloseItemDetailInternal::K2Node_DynamicCast_AsShop_Menu_Details_Achievement' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_CloseItemDetailInternal, K2Node_DynamicCast_bSuccess_3) == 0x000050, "Member 'ShopMenuDetailsSwitcher_C_CloseItemDetailInternal::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_CloseItemDetailInternal, K2Node_DynamicCast_AsShop_Menu_Details_Jesture) == 0x000058, "Member 'ShopMenuDetailsSwitcher_C_CloseItemDetailInternal::K2Node_DynamicCast_AsShop_Menu_Details_Jesture' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_CloseItemDetailInternal, K2Node_DynamicCast_bSuccess_4) == 0x000060, "Member 'ShopMenuDetailsSwitcher_C_CloseItemDetailInternal::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_CloseItemDetailInternal, K2Node_DynamicCast_AsShop_Menu_Details_Stamp) == 0x000068, "Member 'ShopMenuDetailsSwitcher_C_CloseItemDetailInternal::K2Node_DynamicCast_AsShop_Menu_Details_Stamp' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_CloseItemDetailInternal, K2Node_DynamicCast_bSuccess_5) == 0x000070, "Member 'ShopMenuDetailsSwitcher_C_CloseItemDetailInternal::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_CloseItemDetailInternal, K2Node_DynamicCast_AsShop_Menu_Details_Currency) == 0x000078, "Member 'ShopMenuDetailsSwitcher_C_CloseItemDetailInternal::K2Node_DynamicCast_AsShop_Menu_Details_Currency' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_CloseItemDetailInternal, K2Node_DynamicCast_bSuccess_6) == 0x000080, "Member 'ShopMenuDetailsSwitcher_C_CloseItemDetailInternal::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_CloseItemDetailInternal, K2Node_DynamicCast_AsShop_Menu_Details_Imagine_Mount) == 0x000088, "Member 'ShopMenuDetailsSwitcher_C_CloseItemDetailInternal::K2Node_DynamicCast_AsShop_Menu_Details_Imagine_Mount' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_CloseItemDetailInternal, K2Node_DynamicCast_bSuccess_7) == 0x000090, "Member 'ShopMenuDetailsSwitcher_C_CloseItemDetailInternal::K2Node_DynamicCast_bSuccess_7' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_CloseItemDetailInternal, K2Node_DynamicCast_AsShop_Menu_Details_Imagine_Inner) == 0x000098, "Member 'ShopMenuDetailsSwitcher_C_CloseItemDetailInternal::K2Node_DynamicCast_AsShop_Menu_Details_Imagine_Inner' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_CloseItemDetailInternal, K2Node_DynamicCast_bSuccess_8) == 0x0000A0, "Member 'ShopMenuDetailsSwitcher_C_CloseItemDetailInternal::K2Node_DynamicCast_bSuccess_8' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_CloseItemDetailInternal, K2Node_DynamicCast_AsShop_Menu_Details_Imagine_Battle) == 0x0000A8, "Member 'ShopMenuDetailsSwitcher_C_CloseItemDetailInternal::K2Node_DynamicCast_AsShop_Menu_Details_Imagine_Battle' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_CloseItemDetailInternal, K2Node_DynamicCast_bSuccess_9) == 0x0000B0, "Member 'ShopMenuDetailsSwitcher_C_CloseItemDetailInternal::K2Node_DynamicCast_bSuccess_9' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_CloseItemDetailInternal, K2Node_DynamicCast_AsShop_Menu_Details_Costume) == 0x0000B8, "Member 'ShopMenuDetailsSwitcher_C_CloseItemDetailInternal::K2Node_DynamicCast_AsShop_Menu_Details_Costume' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_CloseItemDetailInternal, K2Node_DynamicCast_bSuccess_10) == 0x0000C0, "Member 'ShopMenuDetailsSwitcher_C_CloseItemDetailInternal::K2Node_DynamicCast_bSuccess_10' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_CloseItemDetailInternal, K2Node_DynamicCast_AsShop_Menu_Details_Weapon) == 0x0000C8, "Member 'ShopMenuDetailsSwitcher_C_CloseItemDetailInternal::K2Node_DynamicCast_AsShop_Menu_Details_Weapon' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_CloseItemDetailInternal, K2Node_DynamicCast_bSuccess_11) == 0x0000D0, "Member 'ShopMenuDetailsSwitcher_C_CloseItemDetailInternal::K2Node_DynamicCast_bSuccess_11' has a wrong offset!");

// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ShowItemDetails_Internal
// 0x0368 (0x0368 - 0x0000)
struct ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal final
{
public:
	class ABP_PlayerSceneCapture2D_Studio_C*      TempPlayerCaptureStudio;                           // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MountImagineForCapture_Studio_C*    TempMountImagineCaptureStudio;                     // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ImagineForCapture_Studio_C*         TempImagineCaptureStudio;                          // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_WeaponForCapture_Studio_C*          TempWeaponCaptureStudio;                           // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MannequinForCapture_Studio_C*       TempCostumeCaptureStudio;                          // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            TempDetailWidget;                                  // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharacterGender                            Temp_byte_Variable;                                // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_5;                              // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_6;                              // 0x0037(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharacterGender                            Temp_byte_Variable_1;                              // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_7;                              // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_8;                              // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_9;                              // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93B9[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_10;                             // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93BA[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_11;                             // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93BB[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_12;                             // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93BC[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_FindItemByAllStorage_OutResult;           // 0x0060(0x0118)()
	bool                                          CallFunc_FindItemByAllStorage_ReturnValue;         // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0179(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EEquipableGender                              Temp_byte_Variable_2;                              // 0x017A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             CallFunc_GetOriginalRewardType_OriginalRewardType; // 0x017B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_1;                           // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_93BD[0x4];                                     // 0x0184(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UShopMenuDetailsFusionItem_C*           K2Node_DynamicCast_AsShop_Menu_Details_Fusion_Item; // 0x0188(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93BE[0x7];                                     // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UShopMenuDetailsTacticalAbility_C*      K2Node_DynamicCast_AsShop_Menu_Details_Tactical_Ability; // 0x0198(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetWeaponStickerInfoByItemId_OutIsWeaponSticker; // 0x01A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93BF[0x2];                                     // 0x01A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAppearanceWeaponSticker               CallFunc_GetWeaponStickerInfoByItemId_OutWeaponStickerInfo; // 0x01A4(0x0010)(NoDestructor)
	uint8                                         Pad_93C0[0x4];                                     // 0x01B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UShopMenuDetailsAchievement_C*          K2Node_DynamicCast_AsShop_Menu_Details_Achievement; // 0x01B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93C1[0x7];                                     // 0x01C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UShopMenuDetailsJesture_C*              K2Node_DynamicCast_AsShop_Menu_Details_Jesture;    // 0x01C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93C2[0x7];                                     // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UShopMenuDetailsStamp_C*                K2Node_DynamicCast_AsShop_Menu_Details_Stamp;      // 0x01D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93C3[0x7];                                     // 0x01E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UShopMenuDetailsCurrency_C*             K2Node_DynamicCast_AsShop_Menu_Details_Currency;   // 0x01E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93C4[0x7];                                     // 0x01F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UShopMenuDetailsImagineMount_C*         K2Node_DynamicCast_AsShop_Menu_Details_Imagine_Mount; // 0x01F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_6;                     // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93C5[0x7];                                     // 0x0201(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UShopMenuDetailsImagineInner_C*         K2Node_DynamicCast_AsShop_Menu_Details_Imagine_Inner; // 0x0208(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_7;                     // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93C6[0x7];                                     // 0x0211(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UShopMenuDetailsImagineBattle_C*        K2Node_DynamicCast_AsShop_Menu_Details_Imagine_Battle; // 0x0218(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_8;                     // 0x0220(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default_2;                           // 0x0221(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharacterGender                            CallFunc_GetPlayerGender_OutGender;                // 0x0222(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            CallFunc_GetPlayerGender_OutGender_1;              // 0x0223(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default_3;                           // 0x0224(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default_4;                           // 0x0225(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93C7[0x2];                                     // 0x0226(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0228(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0238(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0241(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93C8[0x6];                                     // 0x0242(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93C9[0x7];                                     // 0x0251(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_PlayerSceneCapture2D_Studio_C*      K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D_Studio; // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_9;                     // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93CA[0x7];                                     // 0x0261(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_MountImagineForCapture_Studio_C*    K2Node_DynamicCast_AsBP_Mount_Imagine_for_Capture_Studio; // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_10;                    // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93CB[0x7];                                     // 0x0271(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ImagineForCapture_Studio_C*         K2Node_DynamicCast_AsBP_Imagine_for_Capture_Studio; // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_11;                    // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93CC[0x7];                                     // 0x0281(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_MannequinForCapture_Studio_C*       K2Node_DynamicCast_AsBP_Mannequin_for_Capture_Studio; // 0x0288(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_12;                    // 0x0290(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93CD[0x7];                                     // 0x0291(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_WeaponForCapture_Studio_C*          K2Node_DynamicCast_AsBP_Weapon_for_Capture_Studio; // 0x0298(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_13;                    // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93CE[0x3];                                     // 0x02A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x02A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93CF[0x7];                                     // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UShopMenuDetailsCostume_C*              K2Node_DynamicCast_AsShop_Menu_Details_Costume;    // 0x02B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_14;                    // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93D0[0x7];                                     // 0x02B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UShopMenuDetailsCostume_C*              K2Node_DynamicCast_AsShop_Menu_Details_Costume_1;  // 0x02C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_15;                    // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x02C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x02CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x02CB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x02CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UShopMenuDetailsCostume_C*              K2Node_DynamicCast_AsShop_Menu_Details_Costume_2;  // 0x02D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_16;                    // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93D1[0x7];                                     // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UShopMenuDetailsWeapon_C*               K2Node_DynamicCast_AsShop_Menu_Details_Weapon;     // 0x02E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_17;                    // 0x02E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x02E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x02EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93D2[0x5];                                     // 0x02EB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UShopMenuDetailsItem_C*                 K2Node_DynamicCast_AsShop_Menu_Details_Item;       // 0x02F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_18;                    // 0x02F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_8;                    // 0x02F9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93D3[0x6];                                     // 0x02FA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CallFunc_Array_Get_Item_1;                         // 0x0300(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0308(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x0318(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0320(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0321(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0322(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93D4[0x5];                                     // 0x0323(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0328(0x0010)(ReferenceParm)
	int32                                         Temp_int_Variable_2;                               // 0x0338(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_93D5[0x4];                                     // 0x033C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item_2;                         // 0x0340(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0348(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_5;                           // 0x0350(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_93D6[0x4];                                     // 0x0354(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0358(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal) == 0x000008, "Wrong alignment on ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal");
static_assert(sizeof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal) == 0x000368, "Wrong size on ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, TempPlayerCaptureStudio) == 0x000000, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::TempPlayerCaptureStudio' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, TempMountImagineCaptureStudio) == 0x000008, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::TempMountImagineCaptureStudio' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, TempImagineCaptureStudio) == 0x000010, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::TempImagineCaptureStudio' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, TempWeaponCaptureStudio) == 0x000018, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::TempWeaponCaptureStudio' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, TempCostumeCaptureStudio) == 0x000020, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::TempCostumeCaptureStudio' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, TempDetailWidget) == 0x000028, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::TempDetailWidget' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, Temp_bool_Variable) == 0x000030, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, Temp_bool_Variable_1) == 0x000031, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, Temp_bool_Variable_2) == 0x000032, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, Temp_bool_Variable_3) == 0x000033, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, Temp_byte_Variable) == 0x000034, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, Temp_bool_Variable_4) == 0x000035, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, Temp_bool_Variable_5) == 0x000036, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, Temp_bool_Variable_6) == 0x000037, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, Temp_byte_Variable_1) == 0x000038, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, Temp_bool_Variable_7) == 0x000039, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, Temp_bool_Variable_8) == 0x00003A, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::Temp_bool_Variable_8' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, Temp_bool_Variable_9) == 0x00003B, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::Temp_bool_Variable_9' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, CallFunc_IsValid_ReturnValue) == 0x00003C, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, Temp_int_Loop_Counter_Variable) == 0x000040, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, Temp_bool_Variable_10) == 0x000044, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::Temp_bool_Variable_10' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, CallFunc_Add_IntInt_ReturnValue) == 0x000048, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, Temp_int_Array_Index_Variable) == 0x00004C, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, Temp_int_Variable) == 0x000050, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, Temp_bool_Variable_11) == 0x000054, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::Temp_bool_Variable_11' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, Temp_int_Variable_1) == 0x000058, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, Temp_bool_Variable_12) == 0x00005C, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::Temp_bool_Variable_12' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, CallFunc_FindItemByAllStorage_OutResult) == 0x000060, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::CallFunc_FindItemByAllStorage_OutResult' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, CallFunc_FindItemByAllStorage_ReturnValue) == 0x000178, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::CallFunc_FindItemByAllStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000179, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, Temp_byte_Variable_2) == 0x00017A, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, CallFunc_GetOriginalRewardType_OriginalRewardType) == 0x00017B, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::CallFunc_GetOriginalRewardType_OriginalRewardType' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, K2Node_Select_Default) == 0x00017C, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, K2Node_Select_Default_1) == 0x000180, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, K2Node_DynamicCast_AsShop_Menu_Details_Fusion_Item) == 0x000188, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::K2Node_DynamicCast_AsShop_Menu_Details_Fusion_Item' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, K2Node_DynamicCast_bSuccess) == 0x000190, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, K2Node_DynamicCast_AsShop_Menu_Details_Tactical_Ability) == 0x000198, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::K2Node_DynamicCast_AsShop_Menu_Details_Tactical_Ability' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, K2Node_DynamicCast_bSuccess_1) == 0x0001A0, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, CallFunc_GetWeaponStickerInfoByItemId_OutIsWeaponSticker) == 0x0001A1, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::CallFunc_GetWeaponStickerInfoByItemId_OutIsWeaponSticker' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, CallFunc_GetWeaponStickerInfoByItemId_OutWeaponStickerInfo) == 0x0001A4, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::CallFunc_GetWeaponStickerInfoByItemId_OutWeaponStickerInfo' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, K2Node_DynamicCast_AsShop_Menu_Details_Achievement) == 0x0001B8, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::K2Node_DynamicCast_AsShop_Menu_Details_Achievement' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, K2Node_DynamicCast_bSuccess_2) == 0x0001C0, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, K2Node_DynamicCast_AsShop_Menu_Details_Jesture) == 0x0001C8, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::K2Node_DynamicCast_AsShop_Menu_Details_Jesture' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, K2Node_DynamicCast_bSuccess_3) == 0x0001D0, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, K2Node_DynamicCast_AsShop_Menu_Details_Stamp) == 0x0001D8, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::K2Node_DynamicCast_AsShop_Menu_Details_Stamp' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, K2Node_DynamicCast_bSuccess_4) == 0x0001E0, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, K2Node_DynamicCast_AsShop_Menu_Details_Currency) == 0x0001E8, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::K2Node_DynamicCast_AsShop_Menu_Details_Currency' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, K2Node_DynamicCast_bSuccess_5) == 0x0001F0, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, K2Node_DynamicCast_AsShop_Menu_Details_Imagine_Mount) == 0x0001F8, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::K2Node_DynamicCast_AsShop_Menu_Details_Imagine_Mount' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, K2Node_DynamicCast_bSuccess_6) == 0x000200, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, K2Node_DynamicCast_AsShop_Menu_Details_Imagine_Inner) == 0x000208, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::K2Node_DynamicCast_AsShop_Menu_Details_Imagine_Inner' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, K2Node_DynamicCast_bSuccess_7) == 0x000210, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::K2Node_DynamicCast_bSuccess_7' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, K2Node_DynamicCast_AsShop_Menu_Details_Imagine_Battle) == 0x000218, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::K2Node_DynamicCast_AsShop_Menu_Details_Imagine_Battle' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, K2Node_DynamicCast_bSuccess_8) == 0x000220, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::K2Node_DynamicCast_bSuccess_8' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, K2Node_Select_Default_2) == 0x000221, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, CallFunc_GetPlayerGender_OutGender) == 0x000222, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::CallFunc_GetPlayerGender_OutGender' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, CallFunc_GetPlayerGender_OutGender_1) == 0x000223, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::CallFunc_GetPlayerGender_OutGender_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, K2Node_Select_Default_3) == 0x000224, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, K2Node_Select_Default_4) == 0x000225, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::K2Node_Select_Default_4' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, K2Node_CreateDelegate_OutputDelegate) == 0x000228, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000238, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, CallFunc_IsValid_ReturnValue_1) == 0x000240, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, CallFunc_IsValid_ReturnValue_2) == 0x000241, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, CallFunc_Array_Get_Item) == 0x000248, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, CallFunc_IsValid_ReturnValue_3) == 0x000250, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D_Studio) == 0x000258, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::K2Node_DynamicCast_AsBP_Player_Scene_Capture_2D_Studio' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, K2Node_DynamicCast_bSuccess_9) == 0x000260, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::K2Node_DynamicCast_bSuccess_9' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, K2Node_DynamicCast_AsBP_Mount_Imagine_for_Capture_Studio) == 0x000268, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::K2Node_DynamicCast_AsBP_Mount_Imagine_for_Capture_Studio' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, K2Node_DynamicCast_bSuccess_10) == 0x000270, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::K2Node_DynamicCast_bSuccess_10' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, K2Node_DynamicCast_AsBP_Imagine_for_Capture_Studio) == 0x000278, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::K2Node_DynamicCast_AsBP_Imagine_for_Capture_Studio' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, K2Node_DynamicCast_bSuccess_11) == 0x000280, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::K2Node_DynamicCast_bSuccess_11' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, K2Node_DynamicCast_AsBP_Mannequin_for_Capture_Studio) == 0x000288, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::K2Node_DynamicCast_AsBP_Mannequin_for_Capture_Studio' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, K2Node_DynamicCast_bSuccess_12) == 0x000290, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::K2Node_DynamicCast_bSuccess_12' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, K2Node_DynamicCast_AsBP_Weapon_for_Capture_Studio) == 0x000298, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::K2Node_DynamicCast_AsBP_Weapon_for_Capture_Studio' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, K2Node_DynamicCast_bSuccess_13) == 0x0002A0, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::K2Node_DynamicCast_bSuccess_13' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, CallFunc_Array_Length_ReturnValue) == 0x0002A4, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, CallFunc_Less_IntInt_ReturnValue) == 0x0002A8, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, K2Node_DynamicCast_AsShop_Menu_Details_Costume) == 0x0002B0, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::K2Node_DynamicCast_AsShop_Menu_Details_Costume' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, K2Node_DynamicCast_bSuccess_14) == 0x0002B8, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::K2Node_DynamicCast_bSuccess_14' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, K2Node_DynamicCast_AsShop_Menu_Details_Costume_1) == 0x0002C0, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::K2Node_DynamicCast_AsShop_Menu_Details_Costume_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, K2Node_DynamicCast_bSuccess_15) == 0x0002C8, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::K2Node_DynamicCast_bSuccess_15' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, CallFunc_IsValid_ReturnValue_4) == 0x0002C9, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, CallFunc_IsValid_ReturnValue_5) == 0x0002CA, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, K2Node_SwitchEnum_CmpSuccess) == 0x0002CB, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, CallFunc_Conv_ByteToInt_ReturnValue) == 0x0002CC, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, K2Node_DynamicCast_AsShop_Menu_Details_Costume_2) == 0x0002D0, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::K2Node_DynamicCast_AsShop_Menu_Details_Costume_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, K2Node_DynamicCast_bSuccess_16) == 0x0002D8, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::K2Node_DynamicCast_bSuccess_16' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, K2Node_DynamicCast_AsShop_Menu_Details_Weapon) == 0x0002E0, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::K2Node_DynamicCast_AsShop_Menu_Details_Weapon' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, K2Node_DynamicCast_bSuccess_17) == 0x0002E8, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::K2Node_DynamicCast_bSuccess_17' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, CallFunc_IsValid_ReturnValue_6) == 0x0002E9, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, CallFunc_IsValid_ReturnValue_7) == 0x0002EA, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, K2Node_DynamicCast_AsShop_Menu_Details_Item) == 0x0002F0, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::K2Node_DynamicCast_AsShop_Menu_Details_Item' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, K2Node_DynamicCast_bSuccess_18) == 0x0002F8, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::K2Node_DynamicCast_bSuccess_18' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, CallFunc_IsValid_ReturnValue_8) == 0x0002F9, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::CallFunc_IsValid_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, CallFunc_Array_Get_Item_1) == 0x000300, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, K2Node_CreateDelegate_OutputDelegate_1) == 0x000308, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000318, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, CallFunc_IsEmpty_ReturnValue) == 0x000320, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000321, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, K2Node_SwitchEnum_CmpSuccess_1) == 0x000322, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, K2Node_MakeArray_Array) == 0x000328, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, Temp_int_Variable_2) == 0x000338, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, CallFunc_Array_Get_Item_2) == 0x000340, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000348, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, K2Node_Select_Default_5) == 0x000350, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::K2Node_Select_Default_5' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal, CallFunc_GetDisplayName_ReturnValue) == 0x000358, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetails_Internal::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");

// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ShowItemDetailsFromMasterReward
// 0x0018 (0x0018 - 0x0000)
struct ShopMenuDetailsSwitcher_C_ShowItemDetailsFromMasterReward final
{
public:
	struct FSBMasterReward                        MasterReward;                                      // 0x0000(0x0014)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	EItemType                                     TempItemType;                                      // 0x0014(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsSwitcher_C_ShowItemDetailsFromMasterReward) == 0x000004, "Wrong alignment on ShopMenuDetailsSwitcher_C_ShowItemDetailsFromMasterReward");
static_assert(sizeof(ShopMenuDetailsSwitcher_C_ShowItemDetailsFromMasterReward) == 0x000018, "Wrong size on ShopMenuDetailsSwitcher_C_ShowItemDetailsFromMasterReward");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetailsFromMasterReward, MasterReward) == 0x000000, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetailsFromMasterReward::MasterReward' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetailsFromMasterReward, TempItemType) == 0x000014, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetailsFromMasterReward::TempItemType' has a wrong offset!");

// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ShowItemDetailsFromMasterRewardId
// 0x0068 (0x0068 - 0x0000)
struct ShopMenuDetailsSwitcher_C_ShowItemDetailsFromMasterRewardId final
{
public:
	class FName                                   MasterRewardId;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93D7[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBMasterReward                        CallFunc_FindRewardMasterData_ReturnValue;         // 0x0050(0x0014)(NoDestructor)
	bool                                          CallFunc_FindRewardMasterData_IsExist;             // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShopMenuDetailsSwitcher_C_ShowItemDetailsFromMasterRewardId) == 0x000008, "Wrong alignment on ShopMenuDetailsSwitcher_C_ShowItemDetailsFromMasterRewardId");
static_assert(sizeof(ShopMenuDetailsSwitcher_C_ShowItemDetailsFromMasterRewardId) == 0x000068, "Wrong size on ShopMenuDetailsSwitcher_C_ShowItemDetailsFromMasterRewardId");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetailsFromMasterRewardId, MasterRewardId) == 0x000000, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetailsFromMasterRewardId::MasterRewardId' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetailsFromMasterRewardId, K2Node_MakeArray_Array) == 0x000008, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetailsFromMasterRewardId::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetailsFromMasterRewardId, CallFunc_Conv_NameToString_ReturnValue) == 0x000018, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetailsFromMasterRewardId::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetailsFromMasterRewardId, CallFunc_Array_Get_Item) == 0x000028, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetailsFromMasterRewardId::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetailsFromMasterRewardId, CallFunc_IsEmpty_ReturnValue) == 0x000030, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetailsFromMasterRewardId::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetailsFromMasterRewardId, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000038, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetailsFromMasterRewardId::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetailsFromMasterRewardId, CallFunc_GetDisplayName_ReturnValue) == 0x000040, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetailsFromMasterRewardId::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetailsFromMasterRewardId, CallFunc_FindRewardMasterData_ReturnValue) == 0x000050, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetailsFromMasterRewardId::CallFunc_FindRewardMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetailsFromMasterRewardId, CallFunc_FindRewardMasterData_IsExist) == 0x000064, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetailsFromMasterRewardId::CallFunc_FindRewardMasterData_IsExist' has a wrong offset!");

// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ShowItemDetailsFromRewardData
// 0x001C (0x001C - 0x0000)
struct ShopMenuDetailsSwitcher_C_ShowItemDetailsFromRewardData final
{
public:
	ESBRewardItemType                             Param_RewardType;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_93D8[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Param_ItemIndex;                                   // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Amount;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_AmountMin;                                   // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Param_bShowProduct;                                // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	EItemType                                     TempItemType;                                      // 0x0011(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RewardTypeToDetailType_bValid;            // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	E_ItemDetailTypes                             CallFunc_RewardTypeToDetailType_DetailType;        // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShopMenuDetailsSwitcher_C_ShowItemDetailsFromRewardData) == 0x000004, "Wrong alignment on ShopMenuDetailsSwitcher_C_ShowItemDetailsFromRewardData");
static_assert(sizeof(ShopMenuDetailsSwitcher_C_ShowItemDetailsFromRewardData) == 0x00001C, "Wrong size on ShopMenuDetailsSwitcher_C_ShowItemDetailsFromRewardData");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetailsFromRewardData, Param_RewardType) == 0x000000, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetailsFromRewardData::Param_RewardType' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetailsFromRewardData, Param_ItemIndex) == 0x000004, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetailsFromRewardData::Param_ItemIndex' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetailsFromRewardData, Param_Amount) == 0x000008, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetailsFromRewardData::Param_Amount' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetailsFromRewardData, Param_AmountMin) == 0x00000C, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetailsFromRewardData::Param_AmountMin' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetailsFromRewardData, Param_bShowProduct) == 0x000010, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetailsFromRewardData::Param_bShowProduct' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetailsFromRewardData, TempItemType) == 0x000011, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetailsFromRewardData::TempItemType' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetailsFromRewardData, CallFunc_RewardTypeToDetailType_bValid) == 0x000012, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetailsFromRewardData::CallFunc_RewardTypeToDetailType_bValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetailsFromRewardData, CallFunc_RewardTypeToDetailType_DetailType) == 0x000013, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetailsFromRewardData::CallFunc_RewardTypeToDetailType_DetailType' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetailsFromRewardData, CallFunc_Not_PreBool_ReturnValue) == 0x000014, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetailsFromRewardData::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetailsFromRewardData, K2Node_SwitchEnum_CmpSuccess) == 0x000015, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetailsFromRewardData::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetailsFromRewardData, K2Node_SwitchEnum_CmpSuccess_1) == 0x000016, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetailsFromRewardData::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetailsFromRewardData, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000017, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetailsFromRewardData::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetailsFromRewardData, CallFunc_BooleanAND_ReturnValue) == 0x000018, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetailsFromRewardData::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetailsFromRewardData, CallFunc_BooleanOR_ReturnValue) == 0x000019, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetailsFromRewardData::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetailsFromRewardData, CallFunc_K2_IsValidTimerHandle_ReturnValue) == 0x00001A, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetailsFromRewardData::CallFunc_K2_IsValidTimerHandle_ReturnValue' has a wrong offset!");

// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ShowItemDetailsFromItemBoxContent
// 0x0024 (0x0024 - 0x0000)
struct ShopMenuDetailsSwitcher_C_ShowItemDetailsFromItemBoxContent final
{
public:
	struct FSBItemBoxContentParam                 ItemBoxContent;                                    // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	EItemType                                     TempItemType;                                      // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsSwitcher_C_ShowItemDetailsFromItemBoxContent) == 0x000004, "Wrong alignment on ShopMenuDetailsSwitcher_C_ShowItemDetailsFromItemBoxContent");
static_assert(sizeof(ShopMenuDetailsSwitcher_C_ShowItemDetailsFromItemBoxContent) == 0x000024, "Wrong size on ShopMenuDetailsSwitcher_C_ShowItemDetailsFromItemBoxContent");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetailsFromItemBoxContent, ItemBoxContent) == 0x000000, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetailsFromItemBoxContent::ItemBoxContent' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowItemDetailsFromItemBoxContent, TempItemType) == 0x000020, "Member 'ShopMenuDetailsSwitcher_C_ShowItemDetailsFromItemBoxContent::TempItemType' has a wrong offset!");

// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.SetBonus
// 0x0020 (0x0020 - 0x0000)
struct ShopMenuDetailsSwitcher_C_SetBonus final
{
public:
	bool                                          bBonus;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93D9[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_Array_Get_Item;                           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_ShopMenuDetailsCommon_C*           K2Node_DynamicCast_AsWBP_Shop_Menu_Details_Common; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShopMenuDetailsSwitcher_C_SetBonus) == 0x000008, "Wrong alignment on ShopMenuDetailsSwitcher_C_SetBonus");
static_assert(sizeof(ShopMenuDetailsSwitcher_C_SetBonus) == 0x000020, "Wrong size on ShopMenuDetailsSwitcher_C_SetBonus");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_SetBonus, bBonus) == 0x000000, "Member 'ShopMenuDetailsSwitcher_C_SetBonus::bBonus' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_SetBonus, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000004, "Member 'ShopMenuDetailsSwitcher_C_SetBonus::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_SetBonus, CallFunc_Array_Get_Item) == 0x000008, "Member 'ShopMenuDetailsSwitcher_C_SetBonus::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_SetBonus, K2Node_DynamicCast_AsWBP_Shop_Menu_Details_Common) == 0x000010, "Member 'ShopMenuDetailsSwitcher_C_SetBonus::K2Node_DynamicCast_AsWBP_Shop_Menu_Details_Common' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_SetBonus, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'ShopMenuDetailsSwitcher_C_SetBonus::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ShowProduct
// 0x0008 (0x0008 - 0x0000)
struct ShopMenuDetailsSwitcher_C_ShowProduct final
{
public:
	ESBRewardItemType                             Param_RewardType;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_93DA[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Param_ItemIndex;                                   // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsSwitcher_C_ShowProduct) == 0x000004, "Wrong alignment on ShopMenuDetailsSwitcher_C_ShowProduct");
static_assert(sizeof(ShopMenuDetailsSwitcher_C_ShowProduct) == 0x000008, "Wrong size on ShopMenuDetailsSwitcher_C_ShowProduct");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowProduct, Param_RewardType) == 0x000000, "Member 'ShopMenuDetailsSwitcher_C_ShowProduct::Param_RewardType' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ShowProduct, Param_ItemIndex) == 0x000004, "Member 'ShopMenuDetailsSwitcher_C_ShowProduct::Param_ItemIndex' has a wrong offset!");

// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.GetOriginalRewardType
// 0x000B (0x000B - 0x0000)
struct ShopMenuDetailsSwitcher_C_GetOriginalRewardType final
{
public:
	ESBRewardItemType                             Param_OriginalRewardType;                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             Temp_byte_Variable_2;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             Temp_byte_Variable_3;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             Temp_byte_Variable_4;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             Temp_byte_Variable_5;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             Temp_byte_Variable_6;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             Temp_byte_Variable_7;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             Temp_byte_Variable_8;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             K2Node_Select_Default;                             // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsSwitcher_C_GetOriginalRewardType) == 0x000001, "Wrong alignment on ShopMenuDetailsSwitcher_C_GetOriginalRewardType");
static_assert(sizeof(ShopMenuDetailsSwitcher_C_GetOriginalRewardType) == 0x00000B, "Wrong size on ShopMenuDetailsSwitcher_C_GetOriginalRewardType");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_GetOriginalRewardType, Param_OriginalRewardType) == 0x000000, "Member 'ShopMenuDetailsSwitcher_C_GetOriginalRewardType::Param_OriginalRewardType' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_GetOriginalRewardType, Temp_byte_Variable) == 0x000001, "Member 'ShopMenuDetailsSwitcher_C_GetOriginalRewardType::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_GetOriginalRewardType, Temp_byte_Variable_1) == 0x000002, "Member 'ShopMenuDetailsSwitcher_C_GetOriginalRewardType::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_GetOriginalRewardType, Temp_byte_Variable_2) == 0x000003, "Member 'ShopMenuDetailsSwitcher_C_GetOriginalRewardType::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_GetOriginalRewardType, Temp_byte_Variable_3) == 0x000004, "Member 'ShopMenuDetailsSwitcher_C_GetOriginalRewardType::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_GetOriginalRewardType, Temp_byte_Variable_4) == 0x000005, "Member 'ShopMenuDetailsSwitcher_C_GetOriginalRewardType::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_GetOriginalRewardType, Temp_byte_Variable_5) == 0x000006, "Member 'ShopMenuDetailsSwitcher_C_GetOriginalRewardType::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_GetOriginalRewardType, Temp_byte_Variable_6) == 0x000007, "Member 'ShopMenuDetailsSwitcher_C_GetOriginalRewardType::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_GetOriginalRewardType, Temp_byte_Variable_7) == 0x000008, "Member 'ShopMenuDetailsSwitcher_C_GetOriginalRewardType::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_GetOriginalRewardType, Temp_byte_Variable_8) == 0x000009, "Member 'ShopMenuDetailsSwitcher_C_GetOriginalRewardType::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_GetOriginalRewardType, K2Node_Select_Default) == 0x00000A, "Member 'ShopMenuDetailsSwitcher_C_GetOriginalRewardType::K2Node_Select_Default' has a wrong offset!");

// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.SetBppExchange
// 0x0020 (0x0020 - 0x0000)
struct ShopMenuDetailsSwitcher_C_SetBppExchange final
{
public:
	bool                                          bCanBppExchange;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93DB[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_Array_Get_Item;                           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_ShopMenuDetailsCommon_C*           K2Node_DynamicCast_AsWBP_Shop_Menu_Details_Common; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShopMenuDetailsSwitcher_C_SetBppExchange) == 0x000008, "Wrong alignment on ShopMenuDetailsSwitcher_C_SetBppExchange");
static_assert(sizeof(ShopMenuDetailsSwitcher_C_SetBppExchange) == 0x000020, "Wrong size on ShopMenuDetailsSwitcher_C_SetBppExchange");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_SetBppExchange, bCanBppExchange) == 0x000000, "Member 'ShopMenuDetailsSwitcher_C_SetBppExchange::bCanBppExchange' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_SetBppExchange, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000004, "Member 'ShopMenuDetailsSwitcher_C_SetBppExchange::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_SetBppExchange, CallFunc_Array_Get_Item) == 0x000008, "Member 'ShopMenuDetailsSwitcher_C_SetBppExchange::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_SetBppExchange, K2Node_DynamicCast_AsWBP_Shop_Menu_Details_Common) == 0x000010, "Member 'ShopMenuDetailsSwitcher_C_SetBppExchange::K2Node_DynamicCast_AsWBP_Shop_Menu_Details_Common' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_SetBppExchange, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'ShopMenuDetailsSwitcher_C_SetBppExchange::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.SetLotteryAbility
// 0x0020 (0x0020 - 0x0000)
struct ShopMenuDetailsSwitcher_C_SetLotteryAbility final
{
public:
	bool                                          bLotteryAbility;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93DC[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_Array_Get_Item;                           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_ShopMenuDetailsCommon_C*           K2Node_DynamicCast_AsWBP_Shop_Menu_Details_Common; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShopMenuDetailsSwitcher_C_SetLotteryAbility) == 0x000008, "Wrong alignment on ShopMenuDetailsSwitcher_C_SetLotteryAbility");
static_assert(sizeof(ShopMenuDetailsSwitcher_C_SetLotteryAbility) == 0x000020, "Wrong size on ShopMenuDetailsSwitcher_C_SetLotteryAbility");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_SetLotteryAbility, bLotteryAbility) == 0x000000, "Member 'ShopMenuDetailsSwitcher_C_SetLotteryAbility::bLotteryAbility' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_SetLotteryAbility, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000004, "Member 'ShopMenuDetailsSwitcher_C_SetLotteryAbility::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_SetLotteryAbility, CallFunc_Array_Get_Item) == 0x000008, "Member 'ShopMenuDetailsSwitcher_C_SetLotteryAbility::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_SetLotteryAbility, K2Node_DynamicCast_AsWBP_Shop_Menu_Details_Common) == 0x000010, "Member 'ShopMenuDetailsSwitcher_C_SetLotteryAbility::K2Node_DynamicCast_AsWBP_Shop_Menu_Details_Common' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_SetLotteryAbility, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'ShopMenuDetailsSwitcher_C_SetLotteryAbility::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.SetLotteryGroupsId
// 0x0020 (0x0020 - 0x0000)
struct ShopMenuDetailsSwitcher_C_SetLotteryGroupsId final
{
public:
	int32                                         LotteryGroupsId;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                            CallFunc_Array_Get_Item;                           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_ShopMenuDetailsCommon_C*           K2Node_DynamicCast_AsWBP_Shop_Menu_Details_Common; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShopMenuDetailsSwitcher_C_SetLotteryGroupsId) == 0x000008, "Wrong alignment on ShopMenuDetailsSwitcher_C_SetLotteryGroupsId");
static_assert(sizeof(ShopMenuDetailsSwitcher_C_SetLotteryGroupsId) == 0x000020, "Wrong size on ShopMenuDetailsSwitcher_C_SetLotteryGroupsId");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_SetLotteryGroupsId, LotteryGroupsId) == 0x000000, "Member 'ShopMenuDetailsSwitcher_C_SetLotteryGroupsId::LotteryGroupsId' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_SetLotteryGroupsId, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000004, "Member 'ShopMenuDetailsSwitcher_C_SetLotteryGroupsId::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_SetLotteryGroupsId, CallFunc_Array_Get_Item) == 0x000008, "Member 'ShopMenuDetailsSwitcher_C_SetLotteryGroupsId::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_SetLotteryGroupsId, K2Node_DynamicCast_AsWBP_Shop_Menu_Details_Common) == 0x000010, "Member 'ShopMenuDetailsSwitcher_C_SetLotteryGroupsId::K2Node_DynamicCast_AsWBP_Shop_Menu_Details_Common' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_SetLotteryGroupsId, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'ShopMenuDetailsSwitcher_C_SetLotteryGroupsId::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.GetCurrentItemDetailType
// 0x0006 (0x0006 - 0x0000)
struct ShopMenuDetailsSwitcher_C_GetCurrentItemDetailType final
{
public:
	bool                                          bValid;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	E_ItemDetailTypes                             Param_DetailType;                                  // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ItemTypeToDetailType_bValid;              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	E_ItemDetailTypes                             CallFunc_ItemTypeToDetailType_DetailType;          // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RewardTypeToDetailType_bValid;            // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	E_ItemDetailTypes                             CallFunc_RewardTypeToDetailType_DetailType;        // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsSwitcher_C_GetCurrentItemDetailType) == 0x000001, "Wrong alignment on ShopMenuDetailsSwitcher_C_GetCurrentItemDetailType");
static_assert(sizeof(ShopMenuDetailsSwitcher_C_GetCurrentItemDetailType) == 0x000006, "Wrong size on ShopMenuDetailsSwitcher_C_GetCurrentItemDetailType");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_GetCurrentItemDetailType, bValid) == 0x000000, "Member 'ShopMenuDetailsSwitcher_C_GetCurrentItemDetailType::bValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_GetCurrentItemDetailType, Param_DetailType) == 0x000001, "Member 'ShopMenuDetailsSwitcher_C_GetCurrentItemDetailType::Param_DetailType' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_GetCurrentItemDetailType, CallFunc_ItemTypeToDetailType_bValid) == 0x000002, "Member 'ShopMenuDetailsSwitcher_C_GetCurrentItemDetailType::CallFunc_ItemTypeToDetailType_bValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_GetCurrentItemDetailType, CallFunc_ItemTypeToDetailType_DetailType) == 0x000003, "Member 'ShopMenuDetailsSwitcher_C_GetCurrentItemDetailType::CallFunc_ItemTypeToDetailType_DetailType' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_GetCurrentItemDetailType, CallFunc_RewardTypeToDetailType_bValid) == 0x000004, "Member 'ShopMenuDetailsSwitcher_C_GetCurrentItemDetailType::CallFunc_RewardTypeToDetailType_bValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_GetCurrentItemDetailType, CallFunc_RewardTypeToDetailType_DetailType) == 0x000005, "Member 'ShopMenuDetailsSwitcher_C_GetCurrentItemDetailType::CallFunc_RewardTypeToDetailType_DetailType' has a wrong offset!");

// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.ItemTypeToDetailType
// 0x0360 (0x0360 - 0x0000)
struct ShopMenuDetailsSwitcher_C_ItemTypeToDetailType final
{
public:
	EItemType                                     Param_ItemType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_93DD[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Param_ItemIndex;                                   // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bValid;                                            // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	E_ItemDetailTypes                             Param_DetailType;                                  // 0x0009(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bTempValid;                                        // 0x000A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	E_ItemDetailTypes                             TempDetailType;                                    // 0x000B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindMountImagineMaster_bIsValid;          // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93DE[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterMountImagine                  CallFunc_FindMountImagineMaster_MountImagineMaster; // 0x0010(0x0070)()
	bool                                          CallFunc_FindImagineMaster_bIsValid;               // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93DF[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindImagineMaster_ImagineMaster;          // 0x0088(0x00B0)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindWeaponMaster_bIsValid;                // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93E0[0x6];                                     // 0x013A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_FindWeaponMaster_WeaponMaster;            // 0x0140(0x00B0)()
	bool                                          CallFunc_FindCostumeMaster_bIsValid;               // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93E1[0x7];                                     // 0x01F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CallFunc_FindCostumeMaster_CostumeMaster;          // 0x01F8(0x0088)()
	bool                                          CallFunc_FindItemMaster_bIsValid;                  // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93E2[0x7];                                     // 0x0281(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_FindItemMaster_ItemMaster;                // 0x0288(0x00D0)()
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0358(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0359(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShopMenuDetailsSwitcher_C_ItemTypeToDetailType) == 0x000008, "Wrong alignment on ShopMenuDetailsSwitcher_C_ItemTypeToDetailType");
static_assert(sizeof(ShopMenuDetailsSwitcher_C_ItemTypeToDetailType) == 0x000360, "Wrong size on ShopMenuDetailsSwitcher_C_ItemTypeToDetailType");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ItemTypeToDetailType, Param_ItemType) == 0x000000, "Member 'ShopMenuDetailsSwitcher_C_ItemTypeToDetailType::Param_ItemType' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ItemTypeToDetailType, Param_ItemIndex) == 0x000004, "Member 'ShopMenuDetailsSwitcher_C_ItemTypeToDetailType::Param_ItemIndex' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ItemTypeToDetailType, bValid) == 0x000008, "Member 'ShopMenuDetailsSwitcher_C_ItemTypeToDetailType::bValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ItemTypeToDetailType, Param_DetailType) == 0x000009, "Member 'ShopMenuDetailsSwitcher_C_ItemTypeToDetailType::Param_DetailType' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ItemTypeToDetailType, bTempValid) == 0x00000A, "Member 'ShopMenuDetailsSwitcher_C_ItemTypeToDetailType::bTempValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ItemTypeToDetailType, TempDetailType) == 0x00000B, "Member 'ShopMenuDetailsSwitcher_C_ItemTypeToDetailType::TempDetailType' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ItemTypeToDetailType, CallFunc_FindMountImagineMaster_bIsValid) == 0x00000C, "Member 'ShopMenuDetailsSwitcher_C_ItemTypeToDetailType::CallFunc_FindMountImagineMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ItemTypeToDetailType, CallFunc_FindMountImagineMaster_MountImagineMaster) == 0x000010, "Member 'ShopMenuDetailsSwitcher_C_ItemTypeToDetailType::CallFunc_FindMountImagineMaster_MountImagineMaster' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ItemTypeToDetailType, CallFunc_FindImagineMaster_bIsValid) == 0x000080, "Member 'ShopMenuDetailsSwitcher_C_ItemTypeToDetailType::CallFunc_FindImagineMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ItemTypeToDetailType, CallFunc_FindImagineMaster_ImagineMaster) == 0x000088, "Member 'ShopMenuDetailsSwitcher_C_ItemTypeToDetailType::CallFunc_FindImagineMaster_ImagineMaster' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ItemTypeToDetailType, K2Node_SwitchEnum_CmpSuccess) == 0x000138, "Member 'ShopMenuDetailsSwitcher_C_ItemTypeToDetailType::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ItemTypeToDetailType, CallFunc_FindWeaponMaster_bIsValid) == 0x000139, "Member 'ShopMenuDetailsSwitcher_C_ItemTypeToDetailType::CallFunc_FindWeaponMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ItemTypeToDetailType, CallFunc_FindWeaponMaster_WeaponMaster) == 0x000140, "Member 'ShopMenuDetailsSwitcher_C_ItemTypeToDetailType::CallFunc_FindWeaponMaster_WeaponMaster' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ItemTypeToDetailType, CallFunc_FindCostumeMaster_bIsValid) == 0x0001F0, "Member 'ShopMenuDetailsSwitcher_C_ItemTypeToDetailType::CallFunc_FindCostumeMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ItemTypeToDetailType, CallFunc_FindCostumeMaster_CostumeMaster) == 0x0001F8, "Member 'ShopMenuDetailsSwitcher_C_ItemTypeToDetailType::CallFunc_FindCostumeMaster_CostumeMaster' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ItemTypeToDetailType, CallFunc_FindItemMaster_bIsValid) == 0x000280, "Member 'ShopMenuDetailsSwitcher_C_ItemTypeToDetailType::CallFunc_FindItemMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ItemTypeToDetailType, CallFunc_FindItemMaster_ItemMaster) == 0x000288, "Member 'ShopMenuDetailsSwitcher_C_ItemTypeToDetailType::CallFunc_FindItemMaster_ItemMaster' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ItemTypeToDetailType, K2Node_SwitchEnum_CmpSuccess_1) == 0x000358, "Member 'ShopMenuDetailsSwitcher_C_ItemTypeToDetailType::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_ItemTypeToDetailType, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000359, "Member 'ShopMenuDetailsSwitcher_C_ItemTypeToDetailType::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function ShopMenuDetailsSwitcher.ShopMenuDetailsSwitcher_C.RewardTypeToDetailType
// 0x00B8 (0x00B8 - 0x0000)
struct ShopMenuDetailsSwitcher_C_RewardTypeToDetailType final
{
public:
	ESBRewardItemType                             Param_RewardType;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_93E3[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Param_ItemIndex;                                   // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bValid;                                            // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	E_ItemDetailTypes                             Param_DetailType;                                  // 0x0009(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bTempValid;                                        // 0x000A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	E_ItemDetailTypes                             TempDetailType;                                    // 0x000B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_93E4[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_93E5[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0040(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0080(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0090(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(ShopMenuDetailsSwitcher_C_RewardTypeToDetailType) == 0x000008, "Wrong alignment on ShopMenuDetailsSwitcher_C_RewardTypeToDetailType");
static_assert(sizeof(ShopMenuDetailsSwitcher_C_RewardTypeToDetailType) == 0x0000B8, "Wrong size on ShopMenuDetailsSwitcher_C_RewardTypeToDetailType");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_RewardTypeToDetailType, Param_RewardType) == 0x000000, "Member 'ShopMenuDetailsSwitcher_C_RewardTypeToDetailType::Param_RewardType' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_RewardTypeToDetailType, Param_ItemIndex) == 0x000004, "Member 'ShopMenuDetailsSwitcher_C_RewardTypeToDetailType::Param_ItemIndex' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_RewardTypeToDetailType, bValid) == 0x000008, "Member 'ShopMenuDetailsSwitcher_C_RewardTypeToDetailType::bValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_RewardTypeToDetailType, Param_DetailType) == 0x000009, "Member 'ShopMenuDetailsSwitcher_C_RewardTypeToDetailType::Param_DetailType' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_RewardTypeToDetailType, bTempValid) == 0x00000A, "Member 'ShopMenuDetailsSwitcher_C_RewardTypeToDetailType::bTempValid' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_RewardTypeToDetailType, TempDetailType) == 0x00000B, "Member 'ShopMenuDetailsSwitcher_C_RewardTypeToDetailType::TempDetailType' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_RewardTypeToDetailType, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000010, "Member 'ShopMenuDetailsSwitcher_C_RewardTypeToDetailType::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_RewardTypeToDetailType, K2Node_SwitchEnum_CmpSuccess) == 0x000020, "Member 'ShopMenuDetailsSwitcher_C_RewardTypeToDetailType::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_RewardTypeToDetailType, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'ShopMenuDetailsSwitcher_C_RewardTypeToDetailType::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_RewardTypeToDetailType, K2Node_MakeStruct_FormatArgumentData) == 0x000040, "Member 'ShopMenuDetailsSwitcher_C_RewardTypeToDetailType::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_RewardTypeToDetailType, K2Node_MakeArray_Array) == 0x000080, "Member 'ShopMenuDetailsSwitcher_C_RewardTypeToDetailType::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_RewardTypeToDetailType, CallFunc_Format_ReturnValue) == 0x000090, "Member 'ShopMenuDetailsSwitcher_C_RewardTypeToDetailType::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShopMenuDetailsSwitcher_C_RewardTypeToDetailType, CallFunc_Conv_TextToString_ReturnValue) == 0x0000A8, "Member 'ShopMenuDetailsSwitcher_C_RewardTypeToDetailType::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

}

