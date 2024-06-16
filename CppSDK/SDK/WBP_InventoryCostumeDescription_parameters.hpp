#pragma once

 

// Package: WBP_InventoryCostumeDescription

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "InventoryData_structs.hpp"
#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "CharaParts_structs.hpp"
#include "DescripionButtonType_structs.hpp"


namespace SDK::Params
{

// Function WBP_InventoryCostumeDescription.WBP_InventoryCostumeDescription_C.OnButtonClicked__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WBP_InventoryCostumeDescription_C_OnButtonClicked__DelegateSignature final
{
public:
	EDescripionButtonType                         ButtonType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryCostumeDescription_C_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong alignment on WBP_InventoryCostumeDescription_C_OnButtonClicked__DelegateSignature");
static_assert(sizeof(WBP_InventoryCostumeDescription_C_OnButtonClicked__DelegateSignature) == 0x000001, "Wrong size on WBP_InventoryCostumeDescription_C_OnButtonClicked__DelegateSignature");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_OnButtonClicked__DelegateSignature, ButtonType) == 0x000000, "Member 'WBP_InventoryCostumeDescription_C_OnButtonClicked__DelegateSignature::ButtonType' has a wrong offset!");

// Function WBP_InventoryCostumeDescription.WBP_InventoryCostumeDescription_C.ExecuteUbergraph_WBP_InventoryCostumeDescription
// 0x00B0 (0x00B0 - 0x0000)
struct WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_2;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_3;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_4;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_5;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_6;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_7;                              // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_8;                              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_9;                              // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_10;                             // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_11;                             // 0x000F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_12;                             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_13;                             // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_14;                             // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            Temp_byte_Variable_15;                             // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_16;                             // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_17;                             // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_18;                             // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_19;                             // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_20;                             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_21;                             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_22;                             // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_23;                             // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_24;                             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_25;                             // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_26;                             // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_27;                             // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_28;                             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_29;                             // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_30;                             // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEquipableGender                              Temp_byte_Variable_31;                             // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsBody                               Temp_byte_Variable_32;                             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsBody                               Temp_byte_Variable_33;                             // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsBody                               Temp_byte_Variable_34;                             // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsBody                               Temp_byte_Variable_35;                             // 0x0027(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EDescripionButtonType                         Temp_byte_Variable_36;                             // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDescripionButtonType                         Temp_byte_Variable_37;                             // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_73EF[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Target;                         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISBCharaCreateInterface> K2Node_DynamicCast_AsSBChara_Create_Interface;     // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73F0[0x2];                                     // 0x004A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x004C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsBody                               K2Node_Select_Default;                             // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            Temp_byte_Variable_38;                             // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_73F1[0x2];                                     // 0x0056(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_GetPartsMaterialColor_ReturnValue;        // 0x0058(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_ByteByte_ReturnValue;        // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue_1;      // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_FloatFloat_ReturnValue_2;      // 0x006B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_ByteByte_ReturnValue;           // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x006E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x006F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetCharaPartsDBFromProtectorCategory_OutIsValid; // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73F2[0x5];                                     // 0x0073(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UDataTable*                             CallFunc_GetCharaPartsDBFromProtectorCategory_OutCharaPartsDB; // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           K2Node_Select_Default_1;                           // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_73F3[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharaPartsData*                        CallFunc_GetPartsData_ReturnValue;                 // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           K2Node_Select_Default_2;                           // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EDescripionButtonType                         K2Node_Select_Default_3;                           // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_73F4[0x6];                                     // 0x0092(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharaPartsData*                        CallFunc_GetPartsData_ReturnValue_1;               // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharaPartsData*                        Temp_object_Variable;                              // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription) == 0x000008, "Wrong alignment on WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription");
static_assert(sizeof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription) == 0x0000B0, "Wrong size on WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, EntryPoint) == 0x000000, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, Temp_byte_Variable) == 0x000004, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, Temp_byte_Variable_1) == 0x000005, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, Temp_byte_Variable_2) == 0x000006, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, Temp_byte_Variable_3) == 0x000007, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, Temp_byte_Variable_4) == 0x000008, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, Temp_byte_Variable_5) == 0x000009, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, Temp_byte_Variable_6) == 0x00000A, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, Temp_byte_Variable_7) == 0x00000B, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, Temp_byte_Variable_8) == 0x00000C, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, Temp_byte_Variable_9) == 0x00000D, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, Temp_byte_Variable_10) == 0x00000E, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, Temp_byte_Variable_11) == 0x00000F, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::Temp_byte_Variable_11' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, Temp_byte_Variable_12) == 0x000010, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::Temp_byte_Variable_12' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, Temp_byte_Variable_13) == 0x000011, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::Temp_byte_Variable_13' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, Temp_byte_Variable_14) == 0x000012, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::Temp_byte_Variable_14' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, Temp_byte_Variable_15) == 0x000013, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::Temp_byte_Variable_15' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, Temp_byte_Variable_16) == 0x000014, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::Temp_byte_Variable_16' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, Temp_byte_Variable_17) == 0x000015, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::Temp_byte_Variable_17' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, Temp_byte_Variable_18) == 0x000016, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::Temp_byte_Variable_18' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, Temp_byte_Variable_19) == 0x000017, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::Temp_byte_Variable_19' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, Temp_byte_Variable_20) == 0x000018, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::Temp_byte_Variable_20' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, Temp_byte_Variable_21) == 0x000019, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::Temp_byte_Variable_21' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, Temp_byte_Variable_22) == 0x00001A, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::Temp_byte_Variable_22' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, Temp_byte_Variable_23) == 0x00001B, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::Temp_byte_Variable_23' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, Temp_byte_Variable_24) == 0x00001C, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::Temp_byte_Variable_24' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, Temp_byte_Variable_25) == 0x00001D, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::Temp_byte_Variable_25' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, Temp_byte_Variable_26) == 0x00001E, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::Temp_byte_Variable_26' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, Temp_byte_Variable_27) == 0x00001F, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::Temp_byte_Variable_27' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, Temp_byte_Variable_28) == 0x000020, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::Temp_byte_Variable_28' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, Temp_byte_Variable_29) == 0x000021, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::Temp_byte_Variable_29' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, Temp_byte_Variable_30) == 0x000022, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::Temp_byte_Variable_30' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, Temp_byte_Variable_31) == 0x000023, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::Temp_byte_Variable_31' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, Temp_byte_Variable_32) == 0x000024, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::Temp_byte_Variable_32' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, Temp_byte_Variable_33) == 0x000025, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::Temp_byte_Variable_33' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, Temp_byte_Variable_34) == 0x000026, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::Temp_byte_Variable_34' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, Temp_byte_Variable_35) == 0x000027, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::Temp_byte_Variable_35' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, CallFunc_MakeLiteralByte_ReturnValue) == 0x000028, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000029, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, Temp_bool_Variable) == 0x00002A, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, Temp_byte_Variable_36) == 0x00002B, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::Temp_byte_Variable_36' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, Temp_byte_Variable_37) == 0x00002C, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::Temp_byte_Variable_37' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, K2Node_CustomEvent_Target) == 0x000030, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::K2Node_CustomEvent_Target' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, K2Node_DynamicCast_AsSBChara_Create_Interface) == 0x000038, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::K2Node_DynamicCast_AsSBChara_Create_Interface' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, CallFunc_Greater_IntInt_ReturnValue) == 0x000049, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, CallFunc_Conv_StringToName_ReturnValue) == 0x00004C, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, K2Node_Select_Default) == 0x000054, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, Temp_byte_Variable_38) == 0x000055, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::Temp_byte_Variable_38' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, CallFunc_GetPartsMaterialColor_ReturnValue) == 0x000058, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::CallFunc_GetPartsMaterialColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, CallFunc_GreaterEqual_ByteByte_ReturnValue) == 0x000068, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::CallFunc_GreaterEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, CallFunc_EqualEqual_FloatFloat_ReturnValue) == 0x000069, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::CallFunc_EqualEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, CallFunc_EqualEqual_FloatFloat_ReturnValue_1) == 0x00006A, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::CallFunc_EqualEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, CallFunc_EqualEqual_FloatFloat_ReturnValue_2) == 0x00006B, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::CallFunc_EqualEqual_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, CallFunc_BooleanAND_ReturnValue) == 0x00006C, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, CallFunc_LessEqual_ByteByte_ReturnValue) == 0x00006D, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::CallFunc_LessEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, CallFunc_BooleanAND_ReturnValue_1) == 0x00006E, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, CallFunc_BooleanAND_ReturnValue_2) == 0x00006F, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, CallFunc_Not_PreBool_ReturnValue) == 0x000070, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, CallFunc_Not_PreBool_ReturnValue_1) == 0x000071, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, CallFunc_GetCharaPartsDBFromProtectorCategory_OutIsValid) == 0x000072, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::CallFunc_GetCharaPartsDBFromProtectorCategory_OutIsValid' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, CallFunc_GetCharaPartsDBFromProtectorCategory_OutCharaPartsDB) == 0x000078, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::CallFunc_GetCharaPartsDBFromProtectorCategory_OutCharaPartsDB' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, K2Node_Select_Default_1) == 0x000080, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, CallFunc_GetPartsData_ReturnValue) == 0x000088, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::CallFunc_GetPartsData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, K2Node_Select_Default_2) == 0x000090, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, K2Node_Select_Default_3) == 0x000091, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, CallFunc_GetPartsData_ReturnValue_1) == 0x000098, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::CallFunc_GetPartsData_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, Temp_object_Variable) == 0x0000A0, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription, CallFunc_IsValid_ReturnValue) == 0x0000A8, "Member 'WBP_InventoryCostumeDescription_C_ExecuteUbergraph_WBP_InventoryCostumeDescription::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_InventoryCostumeDescription.WBP_InventoryCostumeDescription_C.SetColorImage
// 0x0008 (0x0008 - 0x0000)
struct WBP_InventoryCostumeDescription_C_SetColorImage final
{
public:
	class UObject*                                Target;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryCostumeDescription_C_SetColorImage) == 0x000008, "Wrong alignment on WBP_InventoryCostumeDescription_C_SetColorImage");
static_assert(sizeof(WBP_InventoryCostumeDescription_C_SetColorImage) == 0x000008, "Wrong size on WBP_InventoryCostumeDescription_C_SetColorImage");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_SetColorImage, Target) == 0x000000, "Member 'WBP_InventoryCostumeDescription_C_SetColorImage::Target' has a wrong offset!");

// Function WBP_InventoryCostumeDescription.WBP_InventoryCostumeDescription_C.SetItem
// 0x0320 (0x0320 - 0x0000)
struct WBP_InventoryCostumeDescription_C_SetItem final
{
public:
	struct FInventoryData                         Param_InventoryItemData;                           // 0x0000(0x0098)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	bool                                          Param_bStorageMode;                                // 0x0098(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Param_bBagStorageViewMode;                         // 0x0099(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharacterGender                            NowGender;                                         // 0x009A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  NowJob;                                            // 0x009B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_73F5[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   ItemDataManager;                                   // 0x00A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x00A8(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73F6[0x3];                                     // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInventoryStorageNumber_ReturnValue;     // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindCostumeMaster_IsExist;             // 0x00BB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73F7[0x4];                                     // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CallFunc_BP_FindCostumeMaster_ReturnValue;         // 0x00C0(0x0088)()
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_73F8[0x3];                                     // 0x0149(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_3;                               // 0x014C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEquipableGender                              Temp_byte_Variable_2;                              // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0151(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73F9[0x6];                                     // 0x0152(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCostumeText_ReturnValue;               // 0x0160(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0170(0x0018)()
	int32                                         Temp_int_Variable_4;                               // 0x0188(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_73FA[0x4];                                     // 0x018C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73FB[0x7];                                     // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x01A0(0x0118)(ConstParm)
	bool                                          CallFunc_IsUsedItem_bUse;                          // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73FC[0x3];                                     // 0x02B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_5;                               // 0x02BC(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCostumeWearingPartsText_ReturnValue;   // 0x02C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x02D0(0x0018)()
	int32                                         K2Node_Select_Default;                             // 0x02E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x02EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_73FD[0x3];                                     // 0x02ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_2;                           // 0x02F0(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_73FE[0x4];                                     // 0x02F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x02F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0308(0x0018)()
};
static_assert(alignof(WBP_InventoryCostumeDescription_C_SetItem) == 0x000008, "Wrong alignment on WBP_InventoryCostumeDescription_C_SetItem");
static_assert(sizeof(WBP_InventoryCostumeDescription_C_SetItem) == 0x000320, "Wrong size on WBP_InventoryCostumeDescription_C_SetItem");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_SetItem, Param_InventoryItemData) == 0x000000, "Member 'WBP_InventoryCostumeDescription_C_SetItem::Param_InventoryItemData' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_SetItem, Param_bStorageMode) == 0x000098, "Member 'WBP_InventoryCostumeDescription_C_SetItem::Param_bStorageMode' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_SetItem, Param_bBagStorageViewMode) == 0x000099, "Member 'WBP_InventoryCostumeDescription_C_SetItem::Param_bBagStorageViewMode' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_SetItem, NowGender) == 0x00009A, "Member 'WBP_InventoryCostumeDescription_C_SetItem::NowGender' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_SetItem, NowJob) == 0x00009B, "Member 'WBP_InventoryCostumeDescription_C_SetItem::NowJob' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_SetItem, ItemDataManager) == 0x0000A0, "Member 'WBP_InventoryCostumeDescription_C_SetItem::ItemDataManager' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_SetItem, Temp_int_Variable) == 0x0000A8, "Member 'WBP_InventoryCostumeDescription_C_SetItem::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_SetItem, Temp_bool_Variable) == 0x0000AC, "Member 'WBP_InventoryCostumeDescription_C_SetItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_SetItem, Temp_int_Variable_1) == 0x0000B0, "Member 'WBP_InventoryCostumeDescription_C_SetItem::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_SetItem, Temp_int_Variable_2) == 0x0000B4, "Member 'WBP_InventoryCostumeDescription_C_SetItem::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_SetItem, Temp_bool_Variable_1) == 0x0000B8, "Member 'WBP_InventoryCostumeDescription_C_SetItem::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_SetItem, Temp_byte_Variable) == 0x0000B9, "Member 'WBP_InventoryCostumeDescription_C_SetItem::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_SetItem, CallFunc_IsInventoryStorageNumber_ReturnValue) == 0x0000BA, "Member 'WBP_InventoryCostumeDescription_C_SetItem::CallFunc_IsInventoryStorageNumber_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_SetItem, CallFunc_BP_FindCostumeMaster_IsExist) == 0x0000BB, "Member 'WBP_InventoryCostumeDescription_C_SetItem::CallFunc_BP_FindCostumeMaster_IsExist' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_SetItem, CallFunc_BP_FindCostumeMaster_ReturnValue) == 0x0000C0, "Member 'WBP_InventoryCostumeDescription_C_SetItem::CallFunc_BP_FindCostumeMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_SetItem, Temp_byte_Variable_1) == 0x000148, "Member 'WBP_InventoryCostumeDescription_C_SetItem::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_SetItem, Temp_int_Variable_3) == 0x00014C, "Member 'WBP_InventoryCostumeDescription_C_SetItem::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_SetItem, Temp_byte_Variable_2) == 0x000150, "Member 'WBP_InventoryCostumeDescription_C_SetItem::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_SetItem, CallFunc_GetMasterDataManager_IsValid) == 0x000151, "Member 'WBP_InventoryCostumeDescription_C_SetItem::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_SetItem, CallFunc_GetMasterDataManager_ReturnValue) == 0x000158, "Member 'WBP_InventoryCostumeDescription_C_SetItem::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_SetItem, CallFunc_GetCostumeText_ReturnValue) == 0x000160, "Member 'WBP_InventoryCostumeDescription_C_SetItem::CallFunc_GetCostumeText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_SetItem, CallFunc_Conv_StringToText_ReturnValue) == 0x000170, "Member 'WBP_InventoryCostumeDescription_C_SetItem::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_SetItem, Temp_int_Variable_4) == 0x000188, "Member 'WBP_InventoryCostumeDescription_C_SetItem::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_SetItem, CallFunc_GetStorage_ReturnValue) == 0x000190, "Member 'WBP_InventoryCostumeDescription_C_SetItem::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_SetItem, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x000198, "Member 'WBP_InventoryCostumeDescription_C_SetItem::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_SetItem, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x0001A0, "Member 'WBP_InventoryCostumeDescription_C_SetItem::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_SetItem, CallFunc_IsUsedItem_bUse) == 0x0002B8, "Member 'WBP_InventoryCostumeDescription_C_SetItem::CallFunc_IsUsedItem_bUse' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_SetItem, Temp_int_Variable_5) == 0x0002BC, "Member 'WBP_InventoryCostumeDescription_C_SetItem::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_SetItem, CallFunc_GetCostumeWearingPartsText_ReturnValue) == 0x0002C0, "Member 'WBP_InventoryCostumeDescription_C_SetItem::CallFunc_GetCostumeWearingPartsText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_SetItem, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0002D0, "Member 'WBP_InventoryCostumeDescription_C_SetItem::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_SetItem, K2Node_Select_Default) == 0x0002E8, "Member 'WBP_InventoryCostumeDescription_C_SetItem::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_SetItem, K2Node_Select_Default_1) == 0x0002EC, "Member 'WBP_InventoryCostumeDescription_C_SetItem::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_SetItem, K2Node_Select_Default_2) == 0x0002F0, "Member 'WBP_InventoryCostumeDescription_C_SetItem::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_SetItem, CallFunc_GetTextFromAsset_ReturnValue) == 0x0002F8, "Member 'WBP_InventoryCostumeDescription_C_SetItem::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_SetItem, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000308, "Member 'WBP_InventoryCostumeDescription_C_SetItem::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");

// Function WBP_InventoryCostumeDescription.WBP_InventoryCostumeDescription_C.RefleshButtonAction
// 0x0048 (0x0048 - 0x0000)
struct WBP_InventoryCostumeDescription_C_RefleshButtonAction final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_73FF[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsItemLock_ReturnValue;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7400[0x1];                                     // 0x0013(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEquipmentItem_ReturnValue;              // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7401[0x2];                                     // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetStorage_ReturnValue_1;                 // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEquipmentItem_ReturnValue_1;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7402[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCapacity_ReturnValue;                  // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_isInventoryItemLockedSimple_ReturnValue;  // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_isStorageItemLockedSimple_ReturnValue;    // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x0037(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_3;                 // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7403[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_1;                           // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_3;                           // 0x0046(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryCostumeDescription_C_RefleshButtonAction) == 0x000008, "Wrong alignment on WBP_InventoryCostumeDescription_C_RefleshButtonAction");
static_assert(sizeof(WBP_InventoryCostumeDescription_C_RefleshButtonAction) == 0x000048, "Wrong size on WBP_InventoryCostumeDescription_C_RefleshButtonAction");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_RefleshButtonAction, Temp_bool_Variable) == 0x000000, "Member 'WBP_InventoryCostumeDescription_C_RefleshButtonAction::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_RefleshButtonAction, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'WBP_InventoryCostumeDescription_C_RefleshButtonAction::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_RefleshButtonAction, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'WBP_InventoryCostumeDescription_C_RefleshButtonAction::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_RefleshButtonAction, Temp_bool_Variable_1) == 0x000003, "Member 'WBP_InventoryCostumeDescription_C_RefleshButtonAction::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_RefleshButtonAction, CallFunc_GetStorage_ReturnValue) == 0x000008, "Member 'WBP_InventoryCostumeDescription_C_RefleshButtonAction::CallFunc_GetStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_RefleshButtonAction, CallFunc_IsItemLock_ReturnValue) == 0x000010, "Member 'WBP_InventoryCostumeDescription_C_RefleshButtonAction::CallFunc_IsItemLock_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_RefleshButtonAction, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000011, "Member 'WBP_InventoryCostumeDescription_C_RefleshButtonAction::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_RefleshButtonAction, CallFunc_Not_PreBool_ReturnValue) == 0x000012, "Member 'WBP_InventoryCostumeDescription_C_RefleshButtonAction::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_RefleshButtonAction, Temp_int_Variable) == 0x000014, "Member 'WBP_InventoryCostumeDescription_C_RefleshButtonAction::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_RefleshButtonAction, Temp_int_Variable_1) == 0x000018, "Member 'WBP_InventoryCostumeDescription_C_RefleshButtonAction::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_RefleshButtonAction, CallFunc_IsEquipmentItem_ReturnValue) == 0x00001C, "Member 'WBP_InventoryCostumeDescription_C_RefleshButtonAction::CallFunc_IsEquipmentItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_RefleshButtonAction, CallFunc_Not_PreBool_ReturnValue_1) == 0x00001D, "Member 'WBP_InventoryCostumeDescription_C_RefleshButtonAction::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_RefleshButtonAction, CallFunc_GetStorage_ReturnValue_1) == 0x000020, "Member 'WBP_InventoryCostumeDescription_C_RefleshButtonAction::CallFunc_GetStorage_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_RefleshButtonAction, CallFunc_IsEquipmentItem_ReturnValue_1) == 0x000028, "Member 'WBP_InventoryCostumeDescription_C_RefleshButtonAction::CallFunc_IsEquipmentItem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_RefleshButtonAction, CallFunc_GetCapacity_ReturnValue) == 0x00002C, "Member 'WBP_InventoryCostumeDescription_C_RefleshButtonAction::CallFunc_GetCapacity_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_RefleshButtonAction, CallFunc_Not_PreBool_ReturnValue_2) == 0x000030, "Member 'WBP_InventoryCostumeDescription_C_RefleshButtonAction::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_RefleshButtonAction, CallFunc_Less_IntInt_ReturnValue) == 0x000031, "Member 'WBP_InventoryCostumeDescription_C_RefleshButtonAction::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_RefleshButtonAction, CallFunc_Less_IntInt_ReturnValue_1) == 0x000032, "Member 'WBP_InventoryCostumeDescription_C_RefleshButtonAction::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_RefleshButtonAction, CallFunc_isInventoryItemLockedSimple_ReturnValue) == 0x000033, "Member 'WBP_InventoryCostumeDescription_C_RefleshButtonAction::CallFunc_isInventoryItemLockedSimple_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_RefleshButtonAction, CallFunc_BooleanAND_ReturnValue) == 0x000034, "Member 'WBP_InventoryCostumeDescription_C_RefleshButtonAction::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_RefleshButtonAction, CallFunc_isStorageItemLockedSimple_ReturnValue) == 0x000035, "Member 'WBP_InventoryCostumeDescription_C_RefleshButtonAction::CallFunc_isStorageItemLockedSimple_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_RefleshButtonAction, CallFunc_BooleanAND_ReturnValue_1) == 0x000036, "Member 'WBP_InventoryCostumeDescription_C_RefleshButtonAction::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_RefleshButtonAction, K2Node_Select_Default) == 0x000037, "Member 'WBP_InventoryCostumeDescription_C_RefleshButtonAction::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_RefleshButtonAction, CallFunc_Not_PreBool_ReturnValue_3) == 0x000038, "Member 'WBP_InventoryCostumeDescription_C_RefleshButtonAction::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_RefleshButtonAction, CallFunc_BooleanAND_ReturnValue_2) == 0x000039, "Member 'WBP_InventoryCostumeDescription_C_RefleshButtonAction::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_RefleshButtonAction, CallFunc_BooleanAND_ReturnValue_3) == 0x00003A, "Member 'WBP_InventoryCostumeDescription_C_RefleshButtonAction::CallFunc_BooleanAND_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_RefleshButtonAction, Temp_bool_Variable_2) == 0x00003B, "Member 'WBP_InventoryCostumeDescription_C_RefleshButtonAction::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_RefleshButtonAction, Temp_bool_Variable_3) == 0x00003C, "Member 'WBP_InventoryCostumeDescription_C_RefleshButtonAction::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_RefleshButtonAction, K2Node_Select_Default_1) == 0x000040, "Member 'WBP_InventoryCostumeDescription_C_RefleshButtonAction::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_RefleshButtonAction, K2Node_Select_Default_2) == 0x000044, "Member 'WBP_InventoryCostumeDescription_C_RefleshButtonAction::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_RefleshButtonAction, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000045, "Member 'WBP_InventoryCostumeDescription_C_RefleshButtonAction::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_RefleshButtonAction, K2Node_Select_Default_3) == 0x000046, "Member 'WBP_InventoryCostumeDescription_C_RefleshButtonAction::K2Node_Select_Default_3' has a wrong offset!");

// Function WBP_InventoryCostumeDescription.WBP_InventoryCostumeDescription_C.SetModelCaptureImageVisibility
// 0x0005 (0x0005 - 0x0000)
struct WBP_InventoryCostumeDescription_C_SetModelCaptureImageVisibility final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryCostumeDescription_C_SetModelCaptureImageVisibility) == 0x000001, "Wrong alignment on WBP_InventoryCostumeDescription_C_SetModelCaptureImageVisibility");
static_assert(sizeof(WBP_InventoryCostumeDescription_C_SetModelCaptureImageVisibility) == 0x000005, "Wrong size on WBP_InventoryCostumeDescription_C_SetModelCaptureImageVisibility");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_SetModelCaptureImageVisibility, InIsVisible) == 0x000000, "Member 'WBP_InventoryCostumeDescription_C_SetModelCaptureImageVisibility::InIsVisible' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_SetModelCaptureImageVisibility, Temp_bool_Variable) == 0x000001, "Member 'WBP_InventoryCostumeDescription_C_SetModelCaptureImageVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_SetModelCaptureImageVisibility, Temp_byte_Variable) == 0x000002, "Member 'WBP_InventoryCostumeDescription_C_SetModelCaptureImageVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_SetModelCaptureImageVisibility, Temp_byte_Variable_1) == 0x000003, "Member 'WBP_InventoryCostumeDescription_C_SetModelCaptureImageVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_SetModelCaptureImageVisibility, K2Node_Select_Default) == 0x000004, "Member 'WBP_InventoryCostumeDescription_C_SetModelCaptureImageVisibility::K2Node_Select_Default' has a wrong offset!");

// Function WBP_InventoryCostumeDescription.WBP_InventoryCostumeDescription_C.SetSwitcher
// 0x0004 (0x0004 - 0x0000)
struct WBP_InventoryCostumeDescription_C_SetSwitcher final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InventoryCostumeDescription_C_SetSwitcher) == 0x000004, "Wrong alignment on WBP_InventoryCostumeDescription_C_SetSwitcher");
static_assert(sizeof(WBP_InventoryCostumeDescription_C_SetSwitcher) == 0x000004, "Wrong size on WBP_InventoryCostumeDescription_C_SetSwitcher");
static_assert(offsetof(WBP_InventoryCostumeDescription_C_SetSwitcher, Param_Index) == 0x000000, "Member 'WBP_InventoryCostumeDescription_C_SetSwitcher::Param_Index' has a wrong offset!");

}

