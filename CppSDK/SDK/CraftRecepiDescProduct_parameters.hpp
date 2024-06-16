#pragma once

 

// Package: CraftRecepiDescProduct

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.ExecuteUbergraph_CraftRecepiDescProduct
// 0x0450 (0x0450 - 0x0000)
struct CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterCraftRecepi                  K2Node_CustomEvent_RecepiData;                     // 0x0004(0x0008)(NoDestructor)
	int32                                         K2Node_CustomEvent_InItemId;                       // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetItemIconTexture_OutIconTexture;        // 0x0010(0x0028)(HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_679A[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindCraftMasterData_isExists;             // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_679B[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftMasterData                       CallFunc_FindCraftMasterData_ReturnValue;          // 0x0060(0x0088)(ConstParm)
	bool                                          Temp_bool_Variable;                                // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_679C[0x3];                                     // 0x00E9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCraftRecepiUnlockPerkSlotMinMax_RetMin; // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCraftRecepiUnlockPerkSlotMinMax_RetMax; // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCraftRecepiUnlockPerkSlotMinMax_ReturnValue; // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_679D[0x3];                                     // 0x00F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x00F8(0x0018)()
	bool                                          CallFunc_GetWeaponMasterData_IsExists;             // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_679E[0x7];                                     // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_GetWeaponMasterData_ReturnValue;          // 0x0118(0x00B0)()
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_679F[0x7];                                     // 0x01C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x01D0(0x00D0)()
	class FString                                 CallFunc_GetWeaponText_ReturnValue;                // 0x02A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetItemText_ReturnValue;                  // 0x02B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x02C0(0x0018)()
	class UTexture2D*                             Temp_object_Variable;                              // 0x02D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x02E0(0x0010)(ZeroConstructor, NoDestructor)
	class UTexture2D*                             Temp_object_Variable_1;                            // 0x02F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x02F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67A0[0x3];                                     // 0x02F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x02FC(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_67A1[0x4];                                     // 0x030C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_Select_Default;                             // 0x0310(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_MakeLiteralName_ReturnValue;              // 0x0318(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender;                         // 0x0320(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param;                          // 0x0328(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Temp_object_Variable_2;                            // 0x0330(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0338(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0340(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67A2[0x7];                                     // 0x0341(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default_1;                           // 0x0348(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0350(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0358(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67A3[0x7];                                     // 0x0359(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_Select_Default_2;                           // 0x0360(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0370(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0388(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid_1;           // 0x0389(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67A4[0x6];                                     // 0x038A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue_1;       // 0x0390(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetWeaponMasterData_IsExists_1;           // 0x0398(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67A5[0x7];                                     // 0x0399(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_GetWeaponMasterData_ReturnValue_1;        // 0x03A0(0x00B0)()
};
static_assert(alignof(CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct) == 0x000008, "Wrong alignment on CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct");
static_assert(sizeof(CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct) == 0x000450, "Wrong size on CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct");
static_assert(offsetof(CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct, EntryPoint) == 0x000000, "Member 'CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct::EntryPoint' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct, K2Node_CustomEvent_RecepiData) == 0x000004, "Member 'CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct::K2Node_CustomEvent_RecepiData' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct, K2Node_CustomEvent_InItemId) == 0x00000C, "Member 'CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct::K2Node_CustomEvent_InItemId' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct, CallFunc_GetItemIconTexture_OutIconTexture) == 0x000010, "Member 'CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct::CallFunc_GetItemIconTexture_OutIconTexture' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct, K2Node_CreateDelegate_OutputDelegate) == 0x000038, "Member 'CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct, CallFunc_GetMasterDataManager_IsValid) == 0x000048, "Member 'CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct, CallFunc_GetMasterDataManager_ReturnValue) == 0x000050, "Member 'CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct, CallFunc_FindCraftMasterData_isExists) == 0x000058, "Member 'CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct::CallFunc_FindCraftMasterData_isExists' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct, CallFunc_FindCraftMasterData_ReturnValue) == 0x000060, "Member 'CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct::CallFunc_FindCraftMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct, Temp_bool_Variable) == 0x0000E8, "Member 'CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct, CallFunc_GetCraftRecepiUnlockPerkSlotMinMax_RetMin) == 0x0000EC, "Member 'CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct::CallFunc_GetCraftRecepiUnlockPerkSlotMinMax_RetMin' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct, CallFunc_GetCraftRecepiUnlockPerkSlotMinMax_RetMax) == 0x0000F0, "Member 'CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct::CallFunc_GetCraftRecepiUnlockPerkSlotMinMax_RetMax' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct, CallFunc_GetCraftRecepiUnlockPerkSlotMinMax_ReturnValue) == 0x0000F4, "Member 'CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct::CallFunc_GetCraftRecepiUnlockPerkSlotMinMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct, CallFunc_Conv_IntToText_ReturnValue) == 0x0000F8, "Member 'CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct, CallFunc_GetWeaponMasterData_IsExists) == 0x000110, "Member 'CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct::CallFunc_GetWeaponMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct, CallFunc_GetWeaponMasterData_ReturnValue) == 0x000118, "Member 'CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct::CallFunc_GetWeaponMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct, CallFunc_GetItemMasterData_IsExists) == 0x0001C8, "Member 'CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct, CallFunc_GetItemMasterData_ReturnValue) == 0x0001D0, "Member 'CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct, CallFunc_GetWeaponText_ReturnValue) == 0x0002A0, "Member 'CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct::CallFunc_GetWeaponText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct, CallFunc_GetItemText_ReturnValue) == 0x0002B0, "Member 'CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct::CallFunc_GetItemText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0002C0, "Member 'CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct, Temp_object_Variable) == 0x0002D8, "Member 'CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct, K2Node_CreateDelegate_OutputDelegate_1) == 0x0002E0, "Member 'CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct, Temp_object_Variable_1) == 0x0002F0, "Member 'CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct, Temp_bool_Variable_1) == 0x0002F8, "Member 'CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct, K2Node_MakeStruct_LinearColor) == 0x0002FC, "Member 'CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct::K2Node_MakeStruct_LinearColor' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct, K2Node_Select_Default) == 0x000310, "Member 'CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct, CallFunc_MakeLiteralName_ReturnValue) == 0x000318, "Member 'CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct::CallFunc_MakeLiteralName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct, K2Node_CustomEvent_Sender) == 0x000320, "Member 'CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct, K2Node_CustomEvent_Param) == 0x000328, "Member 'CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct::K2Node_CustomEvent_Param' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct, Temp_object_Variable_2) == 0x000330, "Member 'CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct, K2Node_DynamicCast_AsTexture_2D) == 0x000338, "Member 'CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct, K2Node_DynamicCast_bSuccess) == 0x000340, "Member 'CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct, K2Node_Select_Default_1) == 0x000348, "Member 'CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct, K2Node_CustomEvent_Loaded) == 0x000350, "Member 'CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct, Temp_bool_Variable_2) == 0x000358, "Member 'CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct, K2Node_Select_Default_2) == 0x000360, "Member 'CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct, CallFunc_Conv_StringToText_ReturnValue) == 0x000370, "Member 'CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct, CallFunc_IsValid_ReturnValue) == 0x000388, "Member 'CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct, CallFunc_GetMasterDataManager_IsValid_1) == 0x000389, "Member 'CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct::CallFunc_GetMasterDataManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct, CallFunc_GetMasterDataManager_ReturnValue_1) == 0x000390, "Member 'CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct::CallFunc_GetMasterDataManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct, CallFunc_GetWeaponMasterData_IsExists_1) == 0x000398, "Member 'CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct::CallFunc_GetWeaponMasterData_IsExists_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct, CallFunc_GetWeaponMasterData_ReturnValue_1) == 0x0003A0, "Member 'CraftRecepiDescProduct_C_ExecuteUbergraph_CraftRecepiDescProduct::CallFunc_GetWeaponMasterData_ReturnValue_1' has a wrong offset!");

// Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.OnUpdateBoost
// 0x0010 (0x0010 - 0x0000)
struct CraftRecepiDescProduct_C_OnUpdateBoost final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftRecepiDescProduct_C_OnUpdateBoost) == 0x000008, "Wrong alignment on CraftRecepiDescProduct_C_OnUpdateBoost");
static_assert(sizeof(CraftRecepiDescProduct_C_OnUpdateBoost) == 0x000010, "Wrong size on CraftRecepiDescProduct_C_OnUpdateBoost");
static_assert(offsetof(CraftRecepiDescProduct_C_OnUpdateBoost, Sender) == 0x000000, "Member 'CraftRecepiDescProduct_C_OnUpdateBoost::Sender' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_OnUpdateBoost, Param) == 0x000008, "Member 'CraftRecepiDescProduct_C_OnUpdateBoost::Param' has a wrong offset!");

// Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.LoadImage
// 0x0004 (0x0004 - 0x0000)
struct CraftRecepiDescProduct_C_LoadImage final
{
public:
	int32                                         InItemID;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftRecepiDescProduct_C_LoadImage) == 0x000004, "Wrong alignment on CraftRecepiDescProduct_C_LoadImage");
static_assert(sizeof(CraftRecepiDescProduct_C_LoadImage) == 0x000004, "Wrong size on CraftRecepiDescProduct_C_LoadImage");
static_assert(offsetof(CraftRecepiDescProduct_C_LoadImage, InItemID) == 0x000000, "Member 'CraftRecepiDescProduct_C_LoadImage::InItemID' has a wrong offset!");

// Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.SetRecepiData
// 0x0008 (0x0008 - 0x0000)
struct CraftRecepiDescProduct_C_SetRecepiData final
{
public:
	struct FCharacterCraftRecepi                  Param_RecepiData;                                  // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(CraftRecepiDescProduct_C_SetRecepiData) == 0x000004, "Wrong alignment on CraftRecepiDescProduct_C_SetRecepiData");
static_assert(sizeof(CraftRecepiDescProduct_C_SetRecepiData) == 0x000008, "Wrong size on CraftRecepiDescProduct_C_SetRecepiData");
static_assert(offsetof(CraftRecepiDescProduct_C_SetRecepiData, Param_RecepiData) == 0x000000, "Member 'CraftRecepiDescProduct_C_SetRecepiData::Param_RecepiData' has a wrong offset!");

// Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.OnLoaded_29DFB891443B661BA66AFE8D4818F831
// 0x0008 (0x0008 - 0x0000)
struct CraftRecepiDescProduct_C_OnLoaded_29DFB891443B661BA66AFE8D4818F831 final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftRecepiDescProduct_C_OnLoaded_29DFB891443B661BA66AFE8D4818F831) == 0x000008, "Wrong alignment on CraftRecepiDescProduct_C_OnLoaded_29DFB891443B661BA66AFE8D4818F831");
static_assert(sizeof(CraftRecepiDescProduct_C_OnLoaded_29DFB891443B661BA66AFE8D4818F831) == 0x000008, "Wrong size on CraftRecepiDescProduct_C_OnLoaded_29DFB891443B661BA66AFE8D4818F831");
static_assert(offsetof(CraftRecepiDescProduct_C_OnLoaded_29DFB891443B661BA66AFE8D4818F831, Loaded) == 0x000000, "Member 'CraftRecepiDescProduct_C_OnLoaded_29DFB891443B661BA66AFE8D4818F831::Loaded' has a wrong offset!");

// Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.UpdateBoost
// 0x0058 (0x0058 - 0x0000)
struct CraftRecepiDescProduct_C_UpdateBoost final
{
public:
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_67A6[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67A7[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_RewardBoostTooltip_C*              CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67A8[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerRewardBoostComponent*          CallFunc_GetRewardBoostComponent_ReturnValue;      // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEffectiveCraft_ReturnValue;             // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67A9[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBRewardBoostTooltipData>      CallFunc_GetCraftTooltipText_TooltipDataList;      // 0x0040(0x0010)(ReferenceParm)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftRecepiDescProduct_C_UpdateBoost) == 0x000008, "Wrong alignment on CraftRecepiDescProduct_C_UpdateBoost");
static_assert(sizeof(CraftRecepiDescProduct_C_UpdateBoost) == 0x000058, "Wrong size on CraftRecepiDescProduct_C_UpdateBoost");
static_assert(offsetof(CraftRecepiDescProduct_C_UpdateBoost, CallFunc_MakeLiteralByte_ReturnValue) == 0x000000, "Member 'CraftRecepiDescProduct_C_UpdateBoost::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_UpdateBoost, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000001, "Member 'CraftRecepiDescProduct_C_UpdateBoost::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_UpdateBoost, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'CraftRecepiDescProduct_C_UpdateBoost::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_UpdateBoost, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'CraftRecepiDescProduct_C_UpdateBoost::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_UpdateBoost, CallFunc_Create_ReturnValue) == 0x000018, "Member 'CraftRecepiDescProduct_C_UpdateBoost::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_UpdateBoost, Temp_bool_Variable) == 0x000020, "Member 'CraftRecepiDescProduct_C_UpdateBoost::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_UpdateBoost, CallFunc_GetSBPlayerController_ReturnValue) == 0x000028, "Member 'CraftRecepiDescProduct_C_UpdateBoost::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_UpdateBoost, CallFunc_GetRewardBoostComponent_ReturnValue) == 0x000030, "Member 'CraftRecepiDescProduct_C_UpdateBoost::CallFunc_GetRewardBoostComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_UpdateBoost, CallFunc_IsEffectiveCraft_ReturnValue) == 0x000038, "Member 'CraftRecepiDescProduct_C_UpdateBoost::CallFunc_IsEffectiveCraft_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_UpdateBoost, CallFunc_GetCraftTooltipText_TooltipDataList) == 0x000040, "Member 'CraftRecepiDescProduct_C_UpdateBoost::CallFunc_GetCraftTooltipText_TooltipDataList' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_UpdateBoost, K2Node_Select_Default) == 0x000050, "Member 'CraftRecepiDescProduct_C_UpdateBoost::K2Node_Select_Default' has a wrong offset!");

// Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.UpdateLiquidMemory
// 0x0138 (0x0138 - 0x0000)
struct CraftRecepiDescProduct_C_UpdateLiquidMemory final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67AA[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists; // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67AB[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLiquidMemoryInfo                    CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue; // 0x0018(0x0028)(NoDestructor)
	bool                                          CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists_1; // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67AC[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLiquidMemoryInfo                    CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue_1; // 0x0048(0x0028)(NoDestructor)
	bool                                          CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists_2; // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67AD[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLiquidMemoryInfo                    CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue_2; // 0x0078(0x0028)(NoDestructor)
	bool                                          CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists_3; // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67AE[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLiquidMemoryInfo                    CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue_3; // 0x00A8(0x0028)(NoDestructor)
	bool                                          CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists_4; // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67AF[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLiquidMemoryInfo                    CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue_4; // 0x00D8(0x0028)(NoDestructor)
	bool                                          CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists_5; // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67B0[0x7];                                     // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLiquidMemoryInfo                    CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue_5; // 0x0108(0x0028)(NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0132(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x0133(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_4;                  // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0135(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftRecepiDescProduct_C_UpdateLiquidMemory) == 0x000008, "Wrong alignment on CraftRecepiDescProduct_C_UpdateLiquidMemory");
static_assert(sizeof(CraftRecepiDescProduct_C_UpdateLiquidMemory) == 0x000138, "Wrong size on CraftRecepiDescProduct_C_UpdateLiquidMemory");
static_assert(offsetof(CraftRecepiDescProduct_C_UpdateLiquidMemory, Temp_bool_Variable) == 0x000000, "Member 'CraftRecepiDescProduct_C_UpdateLiquidMemory::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_UpdateLiquidMemory, Temp_byte_Variable) == 0x000001, "Member 'CraftRecepiDescProduct_C_UpdateLiquidMemory::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_UpdateLiquidMemory, Temp_byte_Variable_1) == 0x000002, "Member 'CraftRecepiDescProduct_C_UpdateLiquidMemory::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_UpdateLiquidMemory, CallFunc_GetNetworkDataCache_IsValid) == 0x000003, "Member 'CraftRecepiDescProduct_C_UpdateLiquidMemory::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_UpdateLiquidMemory, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000008, "Member 'CraftRecepiDescProduct_C_UpdateLiquidMemory::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_UpdateLiquidMemory, CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists) == 0x000010, "Member 'CraftRecepiDescProduct_C_UpdateLiquidMemory::CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_UpdateLiquidMemory, CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue) == 0x000018, "Member 'CraftRecepiDescProduct_C_UpdateLiquidMemory::CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_UpdateLiquidMemory, CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists_1) == 0x000040, "Member 'CraftRecepiDescProduct_C_UpdateLiquidMemory::CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_UpdateLiquidMemory, CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue_1) == 0x000048, "Member 'CraftRecepiDescProduct_C_UpdateLiquidMemory::CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_UpdateLiquidMemory, CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists_2) == 0x000070, "Member 'CraftRecepiDescProduct_C_UpdateLiquidMemory::CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists_2' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_UpdateLiquidMemory, CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue_2) == 0x000078, "Member 'CraftRecepiDescProduct_C_UpdateLiquidMemory::CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_UpdateLiquidMemory, CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists_3) == 0x0000A0, "Member 'CraftRecepiDescProduct_C_UpdateLiquidMemory::CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists_3' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_UpdateLiquidMemory, CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue_3) == 0x0000A8, "Member 'CraftRecepiDescProduct_C_UpdateLiquidMemory::CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_UpdateLiquidMemory, CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists_4) == 0x0000D0, "Member 'CraftRecepiDescProduct_C_UpdateLiquidMemory::CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists_4' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_UpdateLiquidMemory, CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue_4) == 0x0000D8, "Member 'CraftRecepiDescProduct_C_UpdateLiquidMemory::CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_UpdateLiquidMemory, CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists_5) == 0x000100, "Member 'CraftRecepiDescProduct_C_UpdateLiquidMemory::CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_OutExists_5' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_UpdateLiquidMemory, CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue_5) == 0x000108, "Member 'CraftRecepiDescProduct_C_UpdateLiquidMemory::CallFunc_FindOwnLiquidMemoryInfo_ByCategoryAndEfficacyType_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_UpdateLiquidMemory, CallFunc_BooleanOR_ReturnValue) == 0x000130, "Member 'CraftRecepiDescProduct_C_UpdateLiquidMemory::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_UpdateLiquidMemory, CallFunc_BooleanOR_ReturnValue_1) == 0x000131, "Member 'CraftRecepiDescProduct_C_UpdateLiquidMemory::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_UpdateLiquidMemory, CallFunc_BooleanOR_ReturnValue_2) == 0x000132, "Member 'CraftRecepiDescProduct_C_UpdateLiquidMemory::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_UpdateLiquidMemory, CallFunc_BooleanOR_ReturnValue_3) == 0x000133, "Member 'CraftRecepiDescProduct_C_UpdateLiquidMemory::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_UpdateLiquidMemory, CallFunc_BooleanOR_ReturnValue_4) == 0x000134, "Member 'CraftRecepiDescProduct_C_UpdateLiquidMemory::CallFunc_BooleanOR_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(CraftRecepiDescProduct_C_UpdateLiquidMemory, K2Node_Select_Default) == 0x000135, "Member 'CraftRecepiDescProduct_C_UpdateLiquidMemory::K2Node_Select_Default' has a wrong offset!");

// Function CraftRecepiDescProduct.CraftRecepiDescProduct_C.UpdateCraftNum
// 0x0004 (0x0004 - 0x0000)
struct CraftRecepiDescProduct_C_UpdateCraftNum final
{
public:
	int32                                         CraftCount;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftRecepiDescProduct_C_UpdateCraftNum) == 0x000004, "Wrong alignment on CraftRecepiDescProduct_C_UpdateCraftNum");
static_assert(sizeof(CraftRecepiDescProduct_C_UpdateCraftNum) == 0x000004, "Wrong size on CraftRecepiDescProduct_C_UpdateCraftNum");
static_assert(offsetof(CraftRecepiDescProduct_C_UpdateCraftNum, CraftCount) == 0x000000, "Member 'CraftRecepiDescProduct_C_UpdateCraftNum::CraftCount' has a wrong offset!");

}

