#pragma once

 

// Package: FLIB_UiCostume

#include "Basic.hpp"

#include "CharaParts_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function FLIB_UiCostume.FLIB_UiCostume_C.CheckCostumePartsIsCompositeWear
// 0x00F8 (0x00F8 - 0x0000)
struct FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear final
{
public:
	class FString                                 InCostumePartsName;                                // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	EProtectorCategory                            InCostumePartsCategory;                            // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            InCharacterGender;                                 // 0x0011(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9951[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OutIsCompositeWear;                                // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9952[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ECharaPartsLocation>                   OutOccupiedPartsLocations;                         // 0x0028(0x0010)(Parm, OutParm)
	ECharaPartsLocation                           TmpSubLocation;                                    // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9953[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ECharaPartsLocation>                   TmpOccupiedPartsLocations;                         // 0x0040(0x0010)(Edit, BlueprintVisible)
	TArray<ECharaPartsLocation>                   TmpCheckedSubLocationArray;                        // 0x0050(0x0010)(Edit, BlueprintVisible)
	EProtectorCategory                            TmpCostumeProtectorCategory;                       // 0x0060(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TmpIsCompositeWear;                                // 0x0061(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ECharaPartsBody                               Temp_byte_Variable;                                // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9954[0x1];                                     // 0x0063(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0064(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            Temp_byte_Variable_1;                              // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_2;                              // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_3;                              // 0x006E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_4;                              // 0x006F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_5;                              // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_6;                              // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_7;                              // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_8;                              // 0x0073(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_9;                              // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_10;                             // 0x0075(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_11;                             // 0x0076(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_12;                             // 0x0077(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_13;                             // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_14;                             // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_15;                             // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_16;                             // 0x007B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsBody                               Temp_byte_Variable_17;                             // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECharaPartsLocation                           K2Node_Select_Default;                             // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x008B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x008D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x008E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECharaPartsBody                               Temp_byte_Variable_18;                             // 0x008F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharacterGender                            Temp_byte_Variable_19;                             // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0093(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECharaPartsBody                               K2Node_Select_Default_1;                           // 0x0095(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9955[0x2];                                     // 0x0096(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharaPartsData*                        CallFunc_GetPartsData_ReturnValue;                 // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9956[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ECharaPartsLocation>                   CallFunc_GetCheckedSubLocationArray_CharaPartsLocationArray; // 0x00A8(0x0010)(ReferenceParm)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9957[0x3];                                     // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_6;        // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_7;        // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_8;        // 0x00C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_9;        // 0x00C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_4;                  // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_5;                  // 0x00C5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_6;                  // 0x00C6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_7;                  // 0x00C7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECharaPartsLocation                           CallFunc_Array_Get_Item;                           // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9958[0x3];                                     // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9959[0x3];                                     // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetGameSingleton_IsValid;                 // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_995A[0x6];                                     // 0x00DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBGameSingleton*                       CallFunc_GetGameSingleton_ReturnValue;             // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCharaPartsManager*                   CallFunc_GetCharaPartsManager_ReturnValue;         // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear) == 0x000008, "Wrong alignment on FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear");
static_assert(sizeof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear) == 0x0000F8, "Wrong size on FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, InCostumePartsName) == 0x000000, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::InCostumePartsName' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, InCostumePartsCategory) == 0x000010, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::InCostumePartsCategory' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, InCharacterGender) == 0x000011, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::InCharacterGender' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, __WorldContext) == 0x000018, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, OutIsCompositeWear) == 0x000020, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::OutIsCompositeWear' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, OutOccupiedPartsLocations) == 0x000028, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::OutOccupiedPartsLocations' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, TmpSubLocation) == 0x000038, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::TmpSubLocation' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, TmpOccupiedPartsLocations) == 0x000040, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::TmpOccupiedPartsLocations' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, TmpCheckedSubLocationArray) == 0x000050, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::TmpCheckedSubLocationArray' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, TmpCostumeProtectorCategory) == 0x000060, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::TmpCostumeProtectorCategory' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, TmpIsCompositeWear) == 0x000061, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::TmpIsCompositeWear' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, Temp_byte_Variable) == 0x000062, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, CallFunc_Conv_StringToName_ReturnValue) == 0x000064, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, Temp_byte_Variable_1) == 0x00006C, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, Temp_byte_Variable_2) == 0x00006D, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, Temp_byte_Variable_3) == 0x00006E, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, Temp_byte_Variable_4) == 0x00006F, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, Temp_byte_Variable_5) == 0x000070, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, Temp_byte_Variable_6) == 0x000071, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, Temp_byte_Variable_7) == 0x000072, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, Temp_byte_Variable_8) == 0x000073, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, Temp_byte_Variable_9) == 0x000074, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, Temp_byte_Variable_10) == 0x000075, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, Temp_byte_Variable_11) == 0x000076, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::Temp_byte_Variable_11' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, Temp_byte_Variable_12) == 0x000077, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::Temp_byte_Variable_12' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, Temp_byte_Variable_13) == 0x000078, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::Temp_byte_Variable_13' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, Temp_byte_Variable_14) == 0x000079, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::Temp_byte_Variable_14' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, Temp_byte_Variable_15) == 0x00007A, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::Temp_byte_Variable_15' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, Temp_byte_Variable_16) == 0x00007B, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::Temp_byte_Variable_16' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, Temp_int_Loop_Counter_Variable) == 0x00007C, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, CallFunc_Add_IntInt_ReturnValue) == 0x000080, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, Temp_int_Array_Index_Variable) == 0x000084, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, Temp_byte_Variable_17) == 0x000088, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::Temp_byte_Variable_17' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000089, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, K2Node_Select_Default) == 0x00008A, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00008B, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x00008C, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x00008D, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x00008E, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, Temp_byte_Variable_18) == 0x00008F, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::Temp_byte_Variable_18' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, CallFunc_BooleanOR_ReturnValue) == 0x000090, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, CallFunc_BooleanOR_ReturnValue_1) == 0x000091, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, Temp_byte_Variable_19) == 0x000092, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::Temp_byte_Variable_19' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, CallFunc_BooleanOR_ReturnValue_2) == 0x000093, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, CallFunc_BooleanOR_ReturnValue_3) == 0x000094, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, K2Node_Select_Default_1) == 0x000095, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, CallFunc_GetPartsData_ReturnValue) == 0x000098, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::CallFunc_GetPartsData_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, CallFunc_IsValid_ReturnValue) == 0x0000A0, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, CallFunc_GetCheckedSubLocationArray_CharaPartsLocationArray) == 0x0000A8, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::CallFunc_GetCheckedSubLocationArray_CharaPartsLocationArray' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, CallFunc_EqualEqual_ByteByte_ReturnValue_5) == 0x0000B8, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::CallFunc_EqualEqual_ByteByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, CallFunc_Array_Add_ReturnValue) == 0x0000BC, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, CallFunc_EqualEqual_ByteByte_ReturnValue_6) == 0x0000C0, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::CallFunc_EqualEqual_ByteByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, CallFunc_EqualEqual_ByteByte_ReturnValue_7) == 0x0000C1, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::CallFunc_EqualEqual_ByteByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, CallFunc_EqualEqual_ByteByte_ReturnValue_8) == 0x0000C2, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::CallFunc_EqualEqual_ByteByte_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, CallFunc_EqualEqual_ByteByte_ReturnValue_9) == 0x0000C3, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::CallFunc_EqualEqual_ByteByte_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, CallFunc_BooleanOR_ReturnValue_4) == 0x0000C4, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::CallFunc_BooleanOR_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, CallFunc_BooleanOR_ReturnValue_5) == 0x0000C5, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::CallFunc_BooleanOR_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, CallFunc_BooleanOR_ReturnValue_6) == 0x0000C6, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::CallFunc_BooleanOR_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, CallFunc_BooleanOR_ReturnValue_7) == 0x0000C7, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::CallFunc_BooleanOR_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, CallFunc_Array_Get_Item) == 0x0000C8, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, CallFunc_Array_Length_ReturnValue) == 0x0000CC, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, CallFunc_Greater_IntInt_ReturnValue) == 0x0000D0, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, CallFunc_Array_Length_ReturnValue_1) == 0x0000D4, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, CallFunc_Less_IntInt_ReturnValue) == 0x0000D8, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, CallFunc_GetGameSingleton_IsValid) == 0x0000D9, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::CallFunc_GetGameSingleton_IsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, CallFunc_GetGameSingleton_ReturnValue) == 0x0000E0, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::CallFunc_GetGameSingleton_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, CallFunc_GetCharaPartsManager_ReturnValue) == 0x0000E8, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::CallFunc_GetCharaPartsManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear, CallFunc_IsValid_ReturnValue_1) == 0x0000F0, "Member 'FLIB_UiCostume_C_CheckCostumePartsIsCompositeWear::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function FLIB_UiCostume.FLIB_UiCostume_C.IsCompositeWearByMasterCostume
// 0x00D0 (0x00D0 - 0x0000)
struct FLIB_UiCostume_C_IsCompositeWearByMasterCostume final
{
public:
	struct FSBMasterCostume                       MasterCostume;                                     // 0x0000(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ESBCharacterGender                            InCharacterGender;                                 // 0x0088(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUseCostumeGender;                                 // 0x0089(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_995B[0x6];                                     // 0x008A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0090(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OutIsCompositeWear;                                // 0x0098(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_995C[0x7];                                     // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ECharaPartsLocation>                   OutOccupiedPartsLocations;                         // 0x00A0(0x0010)(Parm, OutParm)
	bool                                          Temp_bool_Variable;                                // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EEquipableGender                              Temp_byte_Variable;                                // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            Temp_byte_Variable_1;                              // 0x00B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            Temp_byte_Variable_2;                              // 0x00B3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            Temp_byte_Variable_3;                              // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            Temp_byte_Variable_4;                              // 0x00B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            K2Node_Select_Default;                             // 0x00B6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            K2Node_Select_Default_1;                           // 0x00B7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckCostumePartsIsCompositeWear_OutIsCompositeWear; // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_995D[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ECharaPartsLocation>                   CallFunc_CheckCostumePartsIsCompositeWear_OutOccupiedPartsLocations; // 0x00C0(0x0010)(ReferenceParm)
};
static_assert(alignof(FLIB_UiCostume_C_IsCompositeWearByMasterCostume) == 0x000008, "Wrong alignment on FLIB_UiCostume_C_IsCompositeWearByMasterCostume");
static_assert(sizeof(FLIB_UiCostume_C_IsCompositeWearByMasterCostume) == 0x0000D0, "Wrong size on FLIB_UiCostume_C_IsCompositeWearByMasterCostume");
static_assert(offsetof(FLIB_UiCostume_C_IsCompositeWearByMasterCostume, MasterCostume) == 0x000000, "Member 'FLIB_UiCostume_C_IsCompositeWearByMasterCostume::MasterCostume' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_IsCompositeWearByMasterCostume, InCharacterGender) == 0x000088, "Member 'FLIB_UiCostume_C_IsCompositeWearByMasterCostume::InCharacterGender' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_IsCompositeWearByMasterCostume, bUseCostumeGender) == 0x000089, "Member 'FLIB_UiCostume_C_IsCompositeWearByMasterCostume::bUseCostumeGender' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_IsCompositeWearByMasterCostume, __WorldContext) == 0x000090, "Member 'FLIB_UiCostume_C_IsCompositeWearByMasterCostume::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_IsCompositeWearByMasterCostume, OutIsCompositeWear) == 0x000098, "Member 'FLIB_UiCostume_C_IsCompositeWearByMasterCostume::OutIsCompositeWear' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_IsCompositeWearByMasterCostume, OutOccupiedPartsLocations) == 0x0000A0, "Member 'FLIB_UiCostume_C_IsCompositeWearByMasterCostume::OutOccupiedPartsLocations' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_IsCompositeWearByMasterCostume, Temp_bool_Variable) == 0x0000B0, "Member 'FLIB_UiCostume_C_IsCompositeWearByMasterCostume::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_IsCompositeWearByMasterCostume, Temp_byte_Variable) == 0x0000B1, "Member 'FLIB_UiCostume_C_IsCompositeWearByMasterCostume::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_IsCompositeWearByMasterCostume, Temp_byte_Variable_1) == 0x0000B2, "Member 'FLIB_UiCostume_C_IsCompositeWearByMasterCostume::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_IsCompositeWearByMasterCostume, Temp_byte_Variable_2) == 0x0000B3, "Member 'FLIB_UiCostume_C_IsCompositeWearByMasterCostume::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_IsCompositeWearByMasterCostume, Temp_byte_Variable_3) == 0x0000B4, "Member 'FLIB_UiCostume_C_IsCompositeWearByMasterCostume::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_IsCompositeWearByMasterCostume, Temp_byte_Variable_4) == 0x0000B5, "Member 'FLIB_UiCostume_C_IsCompositeWearByMasterCostume::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_IsCompositeWearByMasterCostume, K2Node_Select_Default) == 0x0000B6, "Member 'FLIB_UiCostume_C_IsCompositeWearByMasterCostume::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_IsCompositeWearByMasterCostume, K2Node_Select_Default_1) == 0x0000B7, "Member 'FLIB_UiCostume_C_IsCompositeWearByMasterCostume::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_IsCompositeWearByMasterCostume, CallFunc_CheckCostumePartsIsCompositeWear_OutIsCompositeWear) == 0x0000B8, "Member 'FLIB_UiCostume_C_IsCompositeWearByMasterCostume::CallFunc_CheckCostumePartsIsCompositeWear_OutIsCompositeWear' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_IsCompositeWearByMasterCostume, CallFunc_CheckCostumePartsIsCompositeWear_OutOccupiedPartsLocations) == 0x0000C0, "Member 'FLIB_UiCostume_C_IsCompositeWearByMasterCostume::CallFunc_CheckCostumePartsIsCompositeWear_OutOccupiedPartsLocations' has a wrong offset!");

// Function FLIB_UiCostume.FLIB_UiCostume_C.IsCompositeWearByCostumeId
// 0x01A0 (0x01A0 - 0x0000)
struct FLIB_UiCostume_C_IsCompositeWearByCostumeId final
{
public:
	int32                                         CostumeId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            InCharacterGender;                                 // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUseCostumeGender;                                 // 0x0005(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_995E[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsValid;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsCompositeWear;                                   // 0x0011(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_995F[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ECharaPartsLocation>                   OccupiedPartsLocations;                            // 0x0018(0x0010)(Parm, OutParm)
	struct FSBMasterCostume                       MasterCostume;                                     // 0x0028(0x0088)(Parm, OutParm)
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x00B0(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9960[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9961[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindCostumeMaster_IsExist;             // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9962[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CallFunc_BP_FindCostumeMaster_ReturnValue;         // 0x0100(0x0088)()
	bool                                          CallFunc_IsCompositeWearByMasterCostume_OutIsCompositeWear; // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9963[0x7];                                     // 0x0189(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ECharaPartsLocation>                   CallFunc_IsCompositeWearByMasterCostume_OutOccupiedPartsLocations; // 0x0190(0x0010)(ReferenceParm)
};
static_assert(alignof(FLIB_UiCostume_C_IsCompositeWearByCostumeId) == 0x000008, "Wrong alignment on FLIB_UiCostume_C_IsCompositeWearByCostumeId");
static_assert(sizeof(FLIB_UiCostume_C_IsCompositeWearByCostumeId) == 0x0001A0, "Wrong size on FLIB_UiCostume_C_IsCompositeWearByCostumeId");
static_assert(offsetof(FLIB_UiCostume_C_IsCompositeWearByCostumeId, CostumeId) == 0x000000, "Member 'FLIB_UiCostume_C_IsCompositeWearByCostumeId::CostumeId' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_IsCompositeWearByCostumeId, InCharacterGender) == 0x000004, "Member 'FLIB_UiCostume_C_IsCompositeWearByCostumeId::InCharacterGender' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_IsCompositeWearByCostumeId, bUseCostumeGender) == 0x000005, "Member 'FLIB_UiCostume_C_IsCompositeWearByCostumeId::bUseCostumeGender' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_IsCompositeWearByCostumeId, __WorldContext) == 0x000008, "Member 'FLIB_UiCostume_C_IsCompositeWearByCostumeId::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_IsCompositeWearByCostumeId, bIsValid) == 0x000010, "Member 'FLIB_UiCostume_C_IsCompositeWearByCostumeId::bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_IsCompositeWearByCostumeId, IsCompositeWear) == 0x000011, "Member 'FLIB_UiCostume_C_IsCompositeWearByCostumeId::IsCompositeWear' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_IsCompositeWearByCostumeId, OccupiedPartsLocations) == 0x000018, "Member 'FLIB_UiCostume_C_IsCompositeWearByCostumeId::OccupiedPartsLocations' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_IsCompositeWearByCostumeId, MasterCostume) == 0x000028, "Member 'FLIB_UiCostume_C_IsCompositeWearByCostumeId::MasterCostume' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_IsCompositeWearByCostumeId, K2Node_MakeArray_Array) == 0x0000B0, "Member 'FLIB_UiCostume_C_IsCompositeWearByCostumeId::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_IsCompositeWearByCostumeId, CallFunc_Array_Get_Item) == 0x0000C0, "Member 'FLIB_UiCostume_C_IsCompositeWearByCostumeId::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_IsCompositeWearByCostumeId, CallFunc_IsEmpty_ReturnValue) == 0x0000C8, "Member 'FLIB_UiCostume_C_IsCompositeWearByCostumeId::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_IsCompositeWearByCostumeId, CallFunc_K2_GetRootComponent_ReturnValue) == 0x0000D0, "Member 'FLIB_UiCostume_C_IsCompositeWearByCostumeId::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_IsCompositeWearByCostumeId, CallFunc_GetDisplayName_ReturnValue) == 0x0000D8, "Member 'FLIB_UiCostume_C_IsCompositeWearByCostumeId::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_IsCompositeWearByCostumeId, CallFunc_GetMasterDataManager_IsValid) == 0x0000E8, "Member 'FLIB_UiCostume_C_IsCompositeWearByCostumeId::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_IsCompositeWearByCostumeId, CallFunc_GetMasterDataManager_ReturnValue) == 0x0000F0, "Member 'FLIB_UiCostume_C_IsCompositeWearByCostumeId::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_IsCompositeWearByCostumeId, CallFunc_BP_FindCostumeMaster_IsExist) == 0x0000F8, "Member 'FLIB_UiCostume_C_IsCompositeWearByCostumeId::CallFunc_BP_FindCostumeMaster_IsExist' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_IsCompositeWearByCostumeId, CallFunc_BP_FindCostumeMaster_ReturnValue) == 0x000100, "Member 'FLIB_UiCostume_C_IsCompositeWearByCostumeId::CallFunc_BP_FindCostumeMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_IsCompositeWearByCostumeId, CallFunc_IsCompositeWearByMasterCostume_OutIsCompositeWear) == 0x000188, "Member 'FLIB_UiCostume_C_IsCompositeWearByCostumeId::CallFunc_IsCompositeWearByMasterCostume_OutIsCompositeWear' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_IsCompositeWearByCostumeId, CallFunc_IsCompositeWearByMasterCostume_OutOccupiedPartsLocations) == 0x000190, "Member 'FLIB_UiCostume_C_IsCompositeWearByCostumeId::CallFunc_IsCompositeWearByMasterCostume_OutOccupiedPartsLocations' has a wrong offset!");

// Function FLIB_UiCostume.FLIB_UiCostume_C.GetOccupiedLocation
// 0x00F0 (0x00F0 - 0x0000)
struct FLIB_UiCostume_C_GetOccupiedLocation final
{
public:
	struct FSBMasterCostume                       MasterCostume;                                     // 0x0000(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ESBCharacterGender                            InCharacterGender;                                 // 0x0088(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUseCostumeGender;                                 // 0x0089(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9964[0x6];                                     // 0x008A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0090(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EProtectorCategory>                    Result;                                            // 0x0098(0x0010)(Parm, OutParm)
	TArray<EProtectorCategory>                    Ret;                                               // 0x00A8(0x0010)(Edit, BlueprintVisible)
	bool                                          CallFunc_IsCompositeWearByMasterCostume_OutIsCompositeWear; // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9965[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ECharaPartsLocation>                   CallFunc_IsCompositeWearByMasterCostume_OutOccupiedPartsLocations; // 0x00C0(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           CallFunc_Array_Get_Item;                           // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            CallFunc_CharaPartsLocationToProtectorCategory_ProtectorCategory; // 0x00DD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00DE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9966[0x1];                                     // 0x00DF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FLIB_UiCostume_C_GetOccupiedLocation) == 0x000008, "Wrong alignment on FLIB_UiCostume_C_GetOccupiedLocation");
static_assert(sizeof(FLIB_UiCostume_C_GetOccupiedLocation) == 0x0000F0, "Wrong size on FLIB_UiCostume_C_GetOccupiedLocation");
static_assert(offsetof(FLIB_UiCostume_C_GetOccupiedLocation, MasterCostume) == 0x000000, "Member 'FLIB_UiCostume_C_GetOccupiedLocation::MasterCostume' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetOccupiedLocation, InCharacterGender) == 0x000088, "Member 'FLIB_UiCostume_C_GetOccupiedLocation::InCharacterGender' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetOccupiedLocation, bUseCostumeGender) == 0x000089, "Member 'FLIB_UiCostume_C_GetOccupiedLocation::bUseCostumeGender' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetOccupiedLocation, __WorldContext) == 0x000090, "Member 'FLIB_UiCostume_C_GetOccupiedLocation::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetOccupiedLocation, Result) == 0x000098, "Member 'FLIB_UiCostume_C_GetOccupiedLocation::Result' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetOccupiedLocation, Ret) == 0x0000A8, "Member 'FLIB_UiCostume_C_GetOccupiedLocation::Ret' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetOccupiedLocation, CallFunc_IsCompositeWearByMasterCostume_OutIsCompositeWear) == 0x0000B8, "Member 'FLIB_UiCostume_C_GetOccupiedLocation::CallFunc_IsCompositeWearByMasterCostume_OutIsCompositeWear' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetOccupiedLocation, CallFunc_IsCompositeWearByMasterCostume_OutOccupiedPartsLocations) == 0x0000C0, "Member 'FLIB_UiCostume_C_GetOccupiedLocation::CallFunc_IsCompositeWearByMasterCostume_OutOccupiedPartsLocations' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetOccupiedLocation, CallFunc_Array_Length_ReturnValue) == 0x0000D0, "Member 'FLIB_UiCostume_C_GetOccupiedLocation::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetOccupiedLocation, Temp_int_Array_Index_Variable) == 0x0000D4, "Member 'FLIB_UiCostume_C_GetOccupiedLocation::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetOccupiedLocation, Temp_int_Loop_Counter_Variable) == 0x0000D8, "Member 'FLIB_UiCostume_C_GetOccupiedLocation::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetOccupiedLocation, CallFunc_Array_Get_Item) == 0x0000DC, "Member 'FLIB_UiCostume_C_GetOccupiedLocation::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetOccupiedLocation, CallFunc_CharaPartsLocationToProtectorCategory_ProtectorCategory) == 0x0000DD, "Member 'FLIB_UiCostume_C_GetOccupiedLocation::CallFunc_CharaPartsLocationToProtectorCategory_ProtectorCategory' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetOccupiedLocation, CallFunc_Less_IntInt_ReturnValue) == 0x0000DE, "Member 'FLIB_UiCostume_C_GetOccupiedLocation::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetOccupiedLocation, CallFunc_Add_IntInt_ReturnValue) == 0x0000E0, "Member 'FLIB_UiCostume_C_GetOccupiedLocation::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetOccupiedLocation, CallFunc_Array_Add_ReturnValue) == 0x0000E4, "Member 'FLIB_UiCostume_C_GetOccupiedLocation::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetOccupiedLocation, CallFunc_Array_Add_ReturnValue_1) == 0x0000E8, "Member 'FLIB_UiCostume_C_GetOccupiedLocation::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");

// Function FLIB_UiCostume.FLIB_UiCostume_C.GetOccupiedLocationByCostumeId
// 0x0230 (0x0230 - 0x0000)
struct FLIB_UiCostume_C_GetOccupiedLocationByCostumeId final
{
public:
	int32                                         CostumeId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            InCharacterGender;                                 // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUseCostumeGender;                                 // 0x0005(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9967[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsValid;                                          // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9968[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EProtectorCategory>                    Result;                                            // 0x0018(0x0010)(Parm, OutParm)
	struct FSBMasterCostume                       MasterCostume;                                     // 0x0028(0x0088)(Parm, OutParm)
	struct FSBMasterCostume                       Work;                                              // 0x00B0(0x0088)(Edit, BlueprintVisible)
	TArray<EProtectorCategory>                    Ret;                                               // 0x0138(0x0010)(Edit, BlueprintVisible)
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0148(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9969[0x7];                                     // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0168(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0170(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<EProtectorCategory>                    CallFunc_GetOccupiedLocation_Result;               // 0x0180(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_996A[0x7];                                     // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindCostumeMaster_IsExist;             // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_996B[0x7];                                     // 0x01A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CallFunc_BP_FindCostumeMaster_ReturnValue;         // 0x01A8(0x0088)()
};
static_assert(alignof(FLIB_UiCostume_C_GetOccupiedLocationByCostumeId) == 0x000008, "Wrong alignment on FLIB_UiCostume_C_GetOccupiedLocationByCostumeId");
static_assert(sizeof(FLIB_UiCostume_C_GetOccupiedLocationByCostumeId) == 0x000230, "Wrong size on FLIB_UiCostume_C_GetOccupiedLocationByCostumeId");
static_assert(offsetof(FLIB_UiCostume_C_GetOccupiedLocationByCostumeId, CostumeId) == 0x000000, "Member 'FLIB_UiCostume_C_GetOccupiedLocationByCostumeId::CostumeId' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetOccupiedLocationByCostumeId, InCharacterGender) == 0x000004, "Member 'FLIB_UiCostume_C_GetOccupiedLocationByCostumeId::InCharacterGender' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetOccupiedLocationByCostumeId, bUseCostumeGender) == 0x000005, "Member 'FLIB_UiCostume_C_GetOccupiedLocationByCostumeId::bUseCostumeGender' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetOccupiedLocationByCostumeId, __WorldContext) == 0x000008, "Member 'FLIB_UiCostume_C_GetOccupiedLocationByCostumeId::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetOccupiedLocationByCostumeId, bIsValid) == 0x000010, "Member 'FLIB_UiCostume_C_GetOccupiedLocationByCostumeId::bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetOccupiedLocationByCostumeId, Result) == 0x000018, "Member 'FLIB_UiCostume_C_GetOccupiedLocationByCostumeId::Result' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetOccupiedLocationByCostumeId, MasterCostume) == 0x000028, "Member 'FLIB_UiCostume_C_GetOccupiedLocationByCostumeId::MasterCostume' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetOccupiedLocationByCostumeId, Work) == 0x0000B0, "Member 'FLIB_UiCostume_C_GetOccupiedLocationByCostumeId::Work' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetOccupiedLocationByCostumeId, Ret) == 0x000138, "Member 'FLIB_UiCostume_C_GetOccupiedLocationByCostumeId::Ret' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetOccupiedLocationByCostumeId, K2Node_MakeArray_Array) == 0x000148, "Member 'FLIB_UiCostume_C_GetOccupiedLocationByCostumeId::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetOccupiedLocationByCostumeId, CallFunc_Array_Get_Item) == 0x000158, "Member 'FLIB_UiCostume_C_GetOccupiedLocationByCostumeId::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetOccupiedLocationByCostumeId, CallFunc_IsEmpty_ReturnValue) == 0x000160, "Member 'FLIB_UiCostume_C_GetOccupiedLocationByCostumeId::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetOccupiedLocationByCostumeId, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000168, "Member 'FLIB_UiCostume_C_GetOccupiedLocationByCostumeId::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetOccupiedLocationByCostumeId, CallFunc_GetDisplayName_ReturnValue) == 0x000170, "Member 'FLIB_UiCostume_C_GetOccupiedLocationByCostumeId::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetOccupiedLocationByCostumeId, CallFunc_GetOccupiedLocation_Result) == 0x000180, "Member 'FLIB_UiCostume_C_GetOccupiedLocationByCostumeId::CallFunc_GetOccupiedLocation_Result' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetOccupiedLocationByCostumeId, CallFunc_GetMasterDataManager_IsValid) == 0x000190, "Member 'FLIB_UiCostume_C_GetOccupiedLocationByCostumeId::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetOccupiedLocationByCostumeId, CallFunc_GetMasterDataManager_ReturnValue) == 0x000198, "Member 'FLIB_UiCostume_C_GetOccupiedLocationByCostumeId::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetOccupiedLocationByCostumeId, CallFunc_BP_FindCostumeMaster_IsExist) == 0x0001A0, "Member 'FLIB_UiCostume_C_GetOccupiedLocationByCostumeId::CallFunc_BP_FindCostumeMaster_IsExist' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetOccupiedLocationByCostumeId, CallFunc_BP_FindCostumeMaster_ReturnValue) == 0x0001A8, "Member 'FLIB_UiCostume_C_GetOccupiedLocationByCostumeId::CallFunc_BP_FindCostumeMaster_ReturnValue' has a wrong offset!");

// Function FLIB_UiCostume.FLIB_UiCostume_C.GetCostumeWearingPartsText
// 0x00D8 (0x00D8 - 0x0000)
struct FLIB_UiCostume_C_GetCostumeWearingPartsText final
{
public:
	struct FSBMasterCostume                       MasterCostume;                                     // 0x0000(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                                __WorldContext;                                    // 0x0088(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 ReturnValue;                                       // 0x0090(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_996C[0x3];                                     // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCostumeWearingPartsTextIdForCompositeWear_OutTextId; // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCompositeWearByMasterCostume_OutIsCompositeWear; // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_996D[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ECharaPartsLocation>                   CallFunc_IsCompositeWearByMasterCostume_OutOccupiedPartsLocations; // 0x00B0(0x0010)(ReferenceParm)
	int32                                         CallFunc_GetCostumeWearingPartsTextIdFromProtectorCategory_OutTextId; // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x00C4(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(FLIB_UiCostume_C_GetCostumeWearingPartsText) == 0x000008, "Wrong alignment on FLIB_UiCostume_C_GetCostumeWearingPartsText");
static_assert(sizeof(FLIB_UiCostume_C_GetCostumeWearingPartsText) == 0x0000D8, "Wrong size on FLIB_UiCostume_C_GetCostumeWearingPartsText");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeWearingPartsText, MasterCostume) == 0x000000, "Member 'FLIB_UiCostume_C_GetCostumeWearingPartsText::MasterCostume' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeWearingPartsText, __WorldContext) == 0x000088, "Member 'FLIB_UiCostume_C_GetCostumeWearingPartsText::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeWearingPartsText, ReturnValue) == 0x000090, "Member 'FLIB_UiCostume_C_GetCostumeWearingPartsText::ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeWearingPartsText, Temp_bool_Variable) == 0x0000A0, "Member 'FLIB_UiCostume_C_GetCostumeWearingPartsText::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeWearingPartsText, CallFunc_GetCostumeWearingPartsTextIdForCompositeWear_OutTextId) == 0x0000A4, "Member 'FLIB_UiCostume_C_GetCostumeWearingPartsText::CallFunc_GetCostumeWearingPartsTextIdForCompositeWear_OutTextId' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeWearingPartsText, CallFunc_IsCompositeWearByMasterCostume_OutIsCompositeWear) == 0x0000A8, "Member 'FLIB_UiCostume_C_GetCostumeWearingPartsText::CallFunc_IsCompositeWearByMasterCostume_OutIsCompositeWear' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeWearingPartsText, CallFunc_IsCompositeWearByMasterCostume_OutOccupiedPartsLocations) == 0x0000B0, "Member 'FLIB_UiCostume_C_GetCostumeWearingPartsText::CallFunc_IsCompositeWearByMasterCostume_OutOccupiedPartsLocations' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeWearingPartsText, CallFunc_GetCostumeWearingPartsTextIdFromProtectorCategory_OutTextId) == 0x0000C0, "Member 'FLIB_UiCostume_C_GetCostumeWearingPartsText::CallFunc_GetCostumeWearingPartsTextIdFromProtectorCategory_OutTextId' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeWearingPartsText, K2Node_Select_Default) == 0x0000C4, "Member 'FLIB_UiCostume_C_GetCostumeWearingPartsText::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeWearingPartsText, CallFunc_GetTextFromAsset_ReturnValue) == 0x0000C8, "Member 'FLIB_UiCostume_C_GetCostumeWearingPartsText::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");

// Function FLIB_UiCostume.FLIB_UiCostume_C.GetCostumeWearingPartsTextIdFromProtectorCategory
// 0x0018 (0x0018 - 0x0000)
struct FLIB_UiCostume_C_GetCostumeWearingPartsTextIdFromProtectorCategory final
{
public:
	uint8                                         InProtectorCategory;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_996E[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OutTextId;                                         // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FLIB_UiCostume_C_GetCostumeWearingPartsTextIdFromProtectorCategory) == 0x000008, "Wrong alignment on FLIB_UiCostume_C_GetCostumeWearingPartsTextIdFromProtectorCategory");
static_assert(sizeof(FLIB_UiCostume_C_GetCostumeWearingPartsTextIdFromProtectorCategory) == 0x000018, "Wrong size on FLIB_UiCostume_C_GetCostumeWearingPartsTextIdFromProtectorCategory");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeWearingPartsTextIdFromProtectorCategory, InProtectorCategory) == 0x000000, "Member 'FLIB_UiCostume_C_GetCostumeWearingPartsTextIdFromProtectorCategory::InProtectorCategory' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeWearingPartsTextIdFromProtectorCategory, __WorldContext) == 0x000008, "Member 'FLIB_UiCostume_C_GetCostumeWearingPartsTextIdFromProtectorCategory::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeWearingPartsTextIdFromProtectorCategory, OutTextId) == 0x000010, "Member 'FLIB_UiCostume_C_GetCostumeWearingPartsTextIdFromProtectorCategory::OutTextId' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeWearingPartsTextIdFromProtectorCategory, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000014, "Member 'FLIB_UiCostume_C_GetCostumeWearingPartsTextIdFromProtectorCategory::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");

// Function FLIB_UiCostume.FLIB_UiCostume_C.GetCostumeWearingPartsTextIdForCompositeWear
// 0x0010 (0x0010 - 0x0000)
struct FLIB_UiCostume_C_GetCostumeWearingPartsTextIdForCompositeWear final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OutTextId;                                         // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FLIB_UiCostume_C_GetCostumeWearingPartsTextIdForCompositeWear) == 0x000008, "Wrong alignment on FLIB_UiCostume_C_GetCostumeWearingPartsTextIdForCompositeWear");
static_assert(sizeof(FLIB_UiCostume_C_GetCostumeWearingPartsTextIdForCompositeWear) == 0x000010, "Wrong size on FLIB_UiCostume_C_GetCostumeWearingPartsTextIdForCompositeWear");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeWearingPartsTextIdForCompositeWear, __WorldContext) == 0x000000, "Member 'FLIB_UiCostume_C_GetCostumeWearingPartsTextIdForCompositeWear::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeWearingPartsTextIdForCompositeWear, OutTextId) == 0x000008, "Member 'FLIB_UiCostume_C_GetCostumeWearingPartsTextIdForCompositeWear::OutTextId' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeWearingPartsTextIdForCompositeWear, CallFunc_MakeLiteralInt_ReturnValue) == 0x00000C, "Member 'FLIB_UiCostume_C_GetCostumeWearingPartsTextIdForCompositeWear::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");

// Function FLIB_UiCostume.FLIB_UiCostume_C.GetCharaPartsLocationFromProtectorCategory
// 0x0028 (0x0028 - 0x0000)
struct FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory final
{
public:
	EProtectorCategory                            InProtectorCategory;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_996F[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OutIsValid;                                        // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ECharaPartsLocation                           OutCharaPartsLocation;                             // 0x0011(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            Temp_byte_Variable;                                // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECharaPartsLocation                           Temp_byte_Variable_1;                              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_2;                              // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_3;                              // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_4;                              // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_5;                              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_6;                              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_7;                              // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_8;                              // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_9;                              // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_10;                             // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_11;                             // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_12;                             // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_13;                             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_14;                             // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable_15;                             // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           K2Node_Select_Default;                             // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory) == 0x000008, "Wrong alignment on FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory");
static_assert(sizeof(FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory) == 0x000028, "Wrong size on FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory");
static_assert(offsetof(FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory, InProtectorCategory) == 0x000000, "Member 'FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory::InProtectorCategory' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory, __WorldContext) == 0x000008, "Member 'FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory, OutIsValid) == 0x000010, "Member 'FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory::OutIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory, OutCharaPartsLocation) == 0x000011, "Member 'FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory::OutCharaPartsLocation' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory, Temp_byte_Variable) == 0x000012, "Member 'FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000013, "Member 'FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory, Temp_byte_Variable_1) == 0x000014, "Member 'FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory, Temp_byte_Variable_2) == 0x000015, "Member 'FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory, Temp_byte_Variable_3) == 0x000016, "Member 'FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory, Temp_byte_Variable_4) == 0x000017, "Member 'FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory, Temp_byte_Variable_5) == 0x000018, "Member 'FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory, Temp_byte_Variable_6) == 0x000019, "Member 'FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory, Temp_byte_Variable_7) == 0x00001A, "Member 'FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory, Temp_byte_Variable_8) == 0x00001B, "Member 'FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory, Temp_byte_Variable_9) == 0x00001C, "Member 'FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory, Temp_byte_Variable_10) == 0x00001D, "Member 'FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory, Temp_byte_Variable_11) == 0x00001E, "Member 'FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory::Temp_byte_Variable_11' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory, Temp_byte_Variable_12) == 0x00001F, "Member 'FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory::Temp_byte_Variable_12' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory, Temp_byte_Variable_13) == 0x000020, "Member 'FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory::Temp_byte_Variable_13' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory, Temp_byte_Variable_14) == 0x000021, "Member 'FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory::Temp_byte_Variable_14' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory, Temp_byte_Variable_15) == 0x000022, "Member 'FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory::Temp_byte_Variable_15' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory, K2Node_Select_Default) == 0x000023, "Member 'FLIB_UiCostume_C_GetCharaPartsLocationFromProtectorCategory::K2Node_Select_Default' has a wrong offset!");

// Function FLIB_UiCostume.FLIB_UiCostume_C.ProtectorCategoryToCharaPartsLocation
// 0x0018 (0x0018 - 0x0000)
struct FLIB_UiCostume_C_ProtectorCategoryToCharaPartsLocation final
{
public:
	EProtectorCategory                            InProtectorCategory;                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9970[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OutIsValid;                                        // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ECharaPartsLocation                           OutCharaPartsLocation;                             // 0x0011(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCharaPartsLocationFromProtectorCategory_OutIsValid; // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECharaPartsLocation                           CallFunc_GetCharaPartsLocationFromProtectorCategory_OutCharaPartsLocation; // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FLIB_UiCostume_C_ProtectorCategoryToCharaPartsLocation) == 0x000008, "Wrong alignment on FLIB_UiCostume_C_ProtectorCategoryToCharaPartsLocation");
static_assert(sizeof(FLIB_UiCostume_C_ProtectorCategoryToCharaPartsLocation) == 0x000018, "Wrong size on FLIB_UiCostume_C_ProtectorCategoryToCharaPartsLocation");
static_assert(offsetof(FLIB_UiCostume_C_ProtectorCategoryToCharaPartsLocation, InProtectorCategory) == 0x000000, "Member 'FLIB_UiCostume_C_ProtectorCategoryToCharaPartsLocation::InProtectorCategory' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_ProtectorCategoryToCharaPartsLocation, __WorldContext) == 0x000008, "Member 'FLIB_UiCostume_C_ProtectorCategoryToCharaPartsLocation::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_ProtectorCategoryToCharaPartsLocation, OutIsValid) == 0x000010, "Member 'FLIB_UiCostume_C_ProtectorCategoryToCharaPartsLocation::OutIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_ProtectorCategoryToCharaPartsLocation, OutCharaPartsLocation) == 0x000011, "Member 'FLIB_UiCostume_C_ProtectorCategoryToCharaPartsLocation::OutCharaPartsLocation' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_ProtectorCategoryToCharaPartsLocation, CallFunc_GetCharaPartsLocationFromProtectorCategory_OutIsValid) == 0x000012, "Member 'FLIB_UiCostume_C_ProtectorCategoryToCharaPartsLocation::CallFunc_GetCharaPartsLocationFromProtectorCategory_OutIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_ProtectorCategoryToCharaPartsLocation, CallFunc_GetCharaPartsLocationFromProtectorCategory_OutCharaPartsLocation) == 0x000013, "Member 'FLIB_UiCostume_C_ProtectorCategoryToCharaPartsLocation::CallFunc_GetCharaPartsLocationFromProtectorCategory_OutCharaPartsLocation' has a wrong offset!");

// Function FLIB_UiCostume.FLIB_UiCostume_C.CharaPartsLocationToProtectorCategory
// 0x0038 (0x0038 - 0x0000)
struct FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory final
{
public:
	ECharaPartsLocation                           CharaPartsLocation;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9971[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            ProtectorCategory;                                 // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable;                                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            Temp_byte_Variable_1;                              // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            Temp_byte_Variable_2;                              // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            Temp_byte_Variable_3;                              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            Temp_byte_Variable_4;                              // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            Temp_byte_Variable_5;                              // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            Temp_byte_Variable_6;                              // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            Temp_byte_Variable_7;                              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            Temp_byte_Variable_8;                              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            Temp_byte_Variable_9;                              // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            Temp_byte_Variable_10;                             // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            Temp_byte_Variable_11;                             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            Temp_byte_Variable_12;                             // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            Temp_byte_Variable_13;                             // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            Temp_byte_Variable_14;                             // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            Temp_byte_Variable_15;                             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            Temp_byte_Variable_16;                             // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            Temp_byte_Variable_17;                             // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            Temp_byte_Variable_18;                             // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            Temp_byte_Variable_19;                             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            Temp_byte_Variable_20;                             // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            Temp_byte_Variable_21;                             // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            Temp_byte_Variable_22;                             // 0x0027(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            Temp_byte_Variable_23;                             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            Temp_byte_Variable_24;                             // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            Temp_byte_Variable_25;                             // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            Temp_byte_Variable_26;                             // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            Temp_byte_Variable_27;                             // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            Temp_byte_Variable_28;                             // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            Temp_byte_Variable_29;                             // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            Temp_byte_Variable_30;                             // 0x002F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            Temp_byte_Variable_31;                             // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            K2Node_Select_Default;                             // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory) == 0x000008, "Wrong alignment on FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory");
static_assert(sizeof(FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory) == 0x000038, "Wrong size on FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory");
static_assert(offsetof(FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory, CharaPartsLocation) == 0x000000, "Member 'FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory::CharaPartsLocation' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory, __WorldContext) == 0x000008, "Member 'FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory, ProtectorCategory) == 0x000010, "Member 'FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory::ProtectorCategory' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory, Temp_byte_Variable) == 0x000011, "Member 'FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory, Temp_byte_Variable_1) == 0x000012, "Member 'FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory, Temp_byte_Variable_2) == 0x000013, "Member 'FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory, Temp_byte_Variable_3) == 0x000014, "Member 'FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory, Temp_byte_Variable_4) == 0x000015, "Member 'FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory, Temp_byte_Variable_5) == 0x000016, "Member 'FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory, Temp_byte_Variable_6) == 0x000017, "Member 'FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory, Temp_byte_Variable_7) == 0x000018, "Member 'FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory, Temp_byte_Variable_8) == 0x000019, "Member 'FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory, Temp_byte_Variable_9) == 0x00001A, "Member 'FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory, Temp_byte_Variable_10) == 0x00001B, "Member 'FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory, Temp_byte_Variable_11) == 0x00001C, "Member 'FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory::Temp_byte_Variable_11' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory, Temp_byte_Variable_12) == 0x00001D, "Member 'FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory::Temp_byte_Variable_12' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory, Temp_byte_Variable_13) == 0x00001E, "Member 'FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory::Temp_byte_Variable_13' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory, Temp_byte_Variable_14) == 0x00001F, "Member 'FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory::Temp_byte_Variable_14' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory, Temp_byte_Variable_15) == 0x000020, "Member 'FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory::Temp_byte_Variable_15' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory, Temp_byte_Variable_16) == 0x000021, "Member 'FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory::Temp_byte_Variable_16' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory, Temp_byte_Variable_17) == 0x000022, "Member 'FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory::Temp_byte_Variable_17' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory, Temp_byte_Variable_18) == 0x000023, "Member 'FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory::Temp_byte_Variable_18' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory, Temp_byte_Variable_19) == 0x000024, "Member 'FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory::Temp_byte_Variable_19' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory, Temp_byte_Variable_20) == 0x000025, "Member 'FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory::Temp_byte_Variable_20' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory, Temp_byte_Variable_21) == 0x000026, "Member 'FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory::Temp_byte_Variable_21' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory, Temp_byte_Variable_22) == 0x000027, "Member 'FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory::Temp_byte_Variable_22' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory, Temp_byte_Variable_23) == 0x000028, "Member 'FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory::Temp_byte_Variable_23' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory, Temp_byte_Variable_24) == 0x000029, "Member 'FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory::Temp_byte_Variable_24' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory, Temp_byte_Variable_25) == 0x00002A, "Member 'FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory::Temp_byte_Variable_25' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory, Temp_byte_Variable_26) == 0x00002B, "Member 'FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory::Temp_byte_Variable_26' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory, Temp_byte_Variable_27) == 0x00002C, "Member 'FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory::Temp_byte_Variable_27' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory, Temp_byte_Variable_28) == 0x00002D, "Member 'FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory::Temp_byte_Variable_28' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory, Temp_byte_Variable_29) == 0x00002E, "Member 'FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory::Temp_byte_Variable_29' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory, Temp_byte_Variable_30) == 0x00002F, "Member 'FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory::Temp_byte_Variable_30' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory, Temp_byte_Variable_31) == 0x000030, "Member 'FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory::Temp_byte_Variable_31' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory, K2Node_Select_Default) == 0x000031, "Member 'FLIB_UiCostume_C_CharaPartsLocationToProtectorCategory::K2Node_Select_Default' has a wrong offset!");

// Function FLIB_UiCostume.FLIB_UiCostume_C.FindCostumeConflictingCompositeWear
// 0x0120 (0x0120 - 0x0000)
struct FLIB_UiCostume_C_FindCostumeConflictingCompositeWear final
{
public:
	TArray<int32>                                 InCostumeItemIds;                                  // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ESBCharaEquipType                             InCostumeEquipType;                                // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            InCharacterGender;                                 // 0x0011(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9972[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OutIsConflictingCompositeWear;                     // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharaEquipType                             OutConflictingCostumeEquipType;                    // 0x0021(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             TmpCompositeWearEquipType;                         // 0x0022(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9973[0x5];                                     // 0x0023(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   TmpMasterDataManager;                              // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            TmpCharacterGender;                                // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             TmpCostumeEquipType;                               // 0x0031(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9974[0x6];                                     // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 TmpCostumeItemIds;                                 // 0x0038(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item;                           // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9975[0x2];                                     // 0x0066(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCompositeWearByCostumeId_bIsValid;      // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCompositeWearByCostumeId_IsCompositeWear; // 0x006E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9976[0x1];                                     // 0x006F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ECharaPartsLocation>                   CallFunc_IsCompositeWearByCostumeId_OccupiedPartsLocations; // 0x0070(0x0010)(ReferenceParm)
	struct FSBMasterCostume                       CallFunc_IsCompositeWearByCostumeId_MasterCostume; // 0x0080(0x0088)()
	ECharaPartsLocation                           CallFunc_Array_Get_Item_1;                         // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             CallFunc_GetCharaEquipTypeFromProtectorCategory_OutCharaEquipType; // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCharaEquipTypeFromProtectorCategory_ReturnValue; // 0x010A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharaEquipType                             CallFunc_GetCostumeEquipTypeFromPartsLocation_OutEquipType; // 0x010B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9977[0x3];                                     // 0x010D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0114(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0115(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9978[0x2];                                     // 0x0116(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWear) == 0x000008, "Wrong alignment on FLIB_UiCostume_C_FindCostumeConflictingCompositeWear");
static_assert(sizeof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWear) == 0x000120, "Wrong size on FLIB_UiCostume_C_FindCostumeConflictingCompositeWear");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWear, InCostumeItemIds) == 0x000000, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWear::InCostumeItemIds' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWear, InCostumeEquipType) == 0x000010, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWear::InCostumeEquipType' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWear, InCharacterGender) == 0x000011, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWear::InCharacterGender' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWear, __WorldContext) == 0x000018, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWear::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWear, OutIsConflictingCompositeWear) == 0x000020, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWear::OutIsConflictingCompositeWear' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWear, OutConflictingCostumeEquipType) == 0x000021, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWear::OutConflictingCostumeEquipType' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWear, TmpCompositeWearEquipType) == 0x000022, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWear::TmpCompositeWearEquipType' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWear, TmpMasterDataManager) == 0x000028, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWear::TmpMasterDataManager' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWear, TmpCharacterGender) == 0x000030, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWear::TmpCharacterGender' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWear, TmpCostumeEquipType) == 0x000031, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWear::TmpCostumeEquipType' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWear, TmpCostumeItemIds) == 0x000038, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWear::TmpCostumeItemIds' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWear, Temp_int_Array_Index_Variable) == 0x000048, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWear::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWear, Temp_int_Loop_Counter_Variable) == 0x00004C, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWear::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWear, CallFunc_Add_IntInt_ReturnValue) == 0x000050, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWear::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWear, Temp_int_Array_Index_Variable_1) == 0x000054, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWear::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWear, Temp_int_Loop_Counter_Variable_1) == 0x000058, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWear::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWear, CallFunc_Array_Get_Item) == 0x00005C, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWear::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWear, CallFunc_Array_Length_ReturnValue) == 0x000060, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWear::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWear, CallFunc_Greater_IntInt_ReturnValue) == 0x000064, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWear::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWear, CallFunc_Less_IntInt_ReturnValue) == 0x000065, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWear::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWear, CallFunc_Add_IntInt_ReturnValue_1) == 0x000068, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWear::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWear, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00006C, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWear::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWear, CallFunc_IsCompositeWearByCostumeId_bIsValid) == 0x00006D, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWear::CallFunc_IsCompositeWearByCostumeId_bIsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWear, CallFunc_IsCompositeWearByCostumeId_IsCompositeWear) == 0x00006E, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWear::CallFunc_IsCompositeWearByCostumeId_IsCompositeWear' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWear, CallFunc_IsCompositeWearByCostumeId_OccupiedPartsLocations) == 0x000070, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWear::CallFunc_IsCompositeWearByCostumeId_OccupiedPartsLocations' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWear, CallFunc_IsCompositeWearByCostumeId_MasterCostume) == 0x000080, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWear::CallFunc_IsCompositeWearByCostumeId_MasterCostume' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWear, CallFunc_Array_Get_Item_1) == 0x000108, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWear::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWear, CallFunc_GetCharaEquipTypeFromProtectorCategory_OutCharaEquipType) == 0x000109, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWear::CallFunc_GetCharaEquipTypeFromProtectorCategory_OutCharaEquipType' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWear, CallFunc_GetCharaEquipTypeFromProtectorCategory_ReturnValue) == 0x00010A, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWear::CallFunc_GetCharaEquipTypeFromProtectorCategory_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWear, CallFunc_GetCostumeEquipTypeFromPartsLocation_OutEquipType) == 0x00010B, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWear::CallFunc_GetCostumeEquipTypeFromPartsLocation_OutEquipType' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWear, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00010C, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWear::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWear, CallFunc_Array_Length_ReturnValue_1) == 0x000110, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWear::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWear, CallFunc_Less_IntInt_ReturnValue_1) == 0x000114, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWear::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWear, CallFunc_GetMasterDataManager_IsValid) == 0x000115, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWear::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWear, CallFunc_GetMasterDataManager_ReturnValue) == 0x000118, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWear::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");

// Function FLIB_UiCostume.FLIB_UiCostume_C.FindCostumeConflictingCompositeWearByEquipInfo
// 0x0090 (0x0090 - 0x0000)
struct FLIB_UiCostume_C_FindCostumeConflictingCompositeWearByEquipInfo final
{
public:
	struct FCharaEquipInfo                        InCostumeEquipInfo;                                // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
	ESBCharaEquipType                             InCostumeEquipType;                                // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            InCharacterGender;                                 // 0x0011(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9979[0x6];                                     // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OutIsConflictingCompositeWear;                     // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharaEquipType                             OutConflictingCostumeEquipType;                    // 0x0021(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_997A[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 TmpCostumeItemIds;                                 // 0x0028(0x0010)(Edit, BlueprintVisible)
	TArray<struct FCharaEquipItemInfo>            TmpEquipItemInfos;                                 // 0x0038(0x0010)(Edit, BlueprintVisible)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_997B[0x2];                                     // 0x004A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharaEquipItemInfo                    CallFunc_Array_Get_Item;                           // 0x0058(0x0028)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0085(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindCostumeConflictingCompositeWear_OutIsConflictingCompositeWear; // 0x0086(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharaEquipType                             CallFunc_FindCostumeConflictingCompositeWear_OutConflictingCostumeEquipType; // 0x0087(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWearByEquipInfo) == 0x000008, "Wrong alignment on FLIB_UiCostume_C_FindCostumeConflictingCompositeWearByEquipInfo");
static_assert(sizeof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWearByEquipInfo) == 0x000090, "Wrong size on FLIB_UiCostume_C_FindCostumeConflictingCompositeWearByEquipInfo");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWearByEquipInfo, InCostumeEquipInfo) == 0x000000, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWearByEquipInfo::InCostumeEquipInfo' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWearByEquipInfo, InCostumeEquipType) == 0x000010, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWearByEquipInfo::InCostumeEquipType' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWearByEquipInfo, InCharacterGender) == 0x000011, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWearByEquipInfo::InCharacterGender' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWearByEquipInfo, __WorldContext) == 0x000018, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWearByEquipInfo::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWearByEquipInfo, OutIsConflictingCompositeWear) == 0x000020, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWearByEquipInfo::OutIsConflictingCompositeWear' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWearByEquipInfo, OutConflictingCostumeEquipType) == 0x000021, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWearByEquipInfo::OutConflictingCostumeEquipType' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWearByEquipInfo, TmpCostumeItemIds) == 0x000028, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWearByEquipInfo::TmpCostumeItemIds' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWearByEquipInfo, TmpEquipItemInfos) == 0x000038, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWearByEquipInfo::TmpEquipItemInfos' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWearByEquipInfo, Temp_bool_True_if_break_was_hit_Variable) == 0x000048, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWearByEquipInfo::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWearByEquipInfo, CallFunc_Not_PreBool_ReturnValue) == 0x000049, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWearByEquipInfo::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWearByEquipInfo, Temp_int_Array_Index_Variable) == 0x00004C, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWearByEquipInfo::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWearByEquipInfo, Temp_int_Loop_Counter_Variable) == 0x000050, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWearByEquipInfo::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWearByEquipInfo, CallFunc_Add_IntInt_ReturnValue) == 0x000054, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWearByEquipInfo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWearByEquipInfo, CallFunc_Array_Get_Item) == 0x000058, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWearByEquipInfo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWearByEquipInfo, CallFunc_Array_Length_ReturnValue) == 0x000080, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWearByEquipInfo::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWearByEquipInfo, CallFunc_Less_IntInt_ReturnValue) == 0x000084, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWearByEquipInfo::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWearByEquipInfo, CallFunc_BooleanAND_ReturnValue) == 0x000085, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWearByEquipInfo::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWearByEquipInfo, CallFunc_FindCostumeConflictingCompositeWear_OutIsConflictingCompositeWear) == 0x000086, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWearByEquipInfo::CallFunc_FindCostumeConflictingCompositeWear_OutIsConflictingCompositeWear' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWearByEquipInfo, CallFunc_FindCostumeConflictingCompositeWear_OutConflictingCostumeEquipType) == 0x000087, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWearByEquipInfo::CallFunc_FindCostumeConflictingCompositeWear_OutConflictingCostumeEquipType' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_FindCostumeConflictingCompositeWearByEquipInfo, CallFunc_Array_Add_ReturnValue) == 0x000088, "Member 'FLIB_UiCostume_C_FindCostumeConflictingCompositeWearByEquipInfo::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function FLIB_UiCostume.FLIB_UiCostume_C.GetCostumeEquipTypeFromPartsLocation
// 0x0038 (0x0038 - 0x0000)
struct FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation final
{
public:
	ECharaPartsLocation                           InPartsLocation;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_997C[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             OutEquipType;                                      // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           Temp_byte_Variable;                                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_1;                              // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_2;                              // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_3;                              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_4;                              // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_5;                              // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_6;                              // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_7;                              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_8;                              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_9;                              // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_10;                             // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_11;                             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_12;                             // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_13;                             // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_14;                             // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_15;                             // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_16;                             // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_17;                             // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_18;                             // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_19;                             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_20;                             // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_21;                             // 0x0026(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_22;                             // 0x0027(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_23;                             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_24;                             // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_25;                             // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_26;                             // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_27;                             // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_28;                             // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_29;                             // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_30;                             // 0x002F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable_31;                             // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             K2Node_Select_Default;                             // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation) == 0x000008, "Wrong alignment on FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation");
static_assert(sizeof(FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation) == 0x000038, "Wrong size on FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation, InPartsLocation) == 0x000000, "Member 'FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation::InPartsLocation' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation, __WorldContext) == 0x000008, "Member 'FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation::__WorldContext' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation, OutEquipType) == 0x000010, "Member 'FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation::OutEquipType' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation, Temp_byte_Variable) == 0x000011, "Member 'FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation, Temp_byte_Variable_1) == 0x000012, "Member 'FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation, Temp_byte_Variable_2) == 0x000013, "Member 'FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation, Temp_byte_Variable_3) == 0x000014, "Member 'FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation, Temp_byte_Variable_4) == 0x000015, "Member 'FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation, Temp_byte_Variable_5) == 0x000016, "Member 'FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation, Temp_byte_Variable_6) == 0x000017, "Member 'FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation, Temp_byte_Variable_7) == 0x000018, "Member 'FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation, Temp_byte_Variable_8) == 0x000019, "Member 'FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation, Temp_byte_Variable_9) == 0x00001A, "Member 'FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation, Temp_byte_Variable_10) == 0x00001B, "Member 'FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation, Temp_byte_Variable_11) == 0x00001C, "Member 'FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation::Temp_byte_Variable_11' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation, Temp_byte_Variable_12) == 0x00001D, "Member 'FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation::Temp_byte_Variable_12' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation, Temp_byte_Variable_13) == 0x00001E, "Member 'FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation::Temp_byte_Variable_13' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation, Temp_byte_Variable_14) == 0x00001F, "Member 'FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation::Temp_byte_Variable_14' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation, Temp_byte_Variable_15) == 0x000020, "Member 'FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation::Temp_byte_Variable_15' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation, Temp_byte_Variable_16) == 0x000021, "Member 'FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation::Temp_byte_Variable_16' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation, Temp_byte_Variable_17) == 0x000022, "Member 'FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation::Temp_byte_Variable_17' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation, Temp_byte_Variable_18) == 0x000023, "Member 'FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation::Temp_byte_Variable_18' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation, Temp_byte_Variable_19) == 0x000024, "Member 'FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation::Temp_byte_Variable_19' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation, Temp_byte_Variable_20) == 0x000025, "Member 'FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation::Temp_byte_Variable_20' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation, Temp_byte_Variable_21) == 0x000026, "Member 'FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation::Temp_byte_Variable_21' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation, Temp_byte_Variable_22) == 0x000027, "Member 'FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation::Temp_byte_Variable_22' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation, Temp_byte_Variable_23) == 0x000028, "Member 'FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation::Temp_byte_Variable_23' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation, Temp_byte_Variable_24) == 0x000029, "Member 'FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation::Temp_byte_Variable_24' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation, Temp_byte_Variable_25) == 0x00002A, "Member 'FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation::Temp_byte_Variable_25' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation, Temp_byte_Variable_26) == 0x00002B, "Member 'FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation::Temp_byte_Variable_26' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation, Temp_byte_Variable_27) == 0x00002C, "Member 'FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation::Temp_byte_Variable_27' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation, Temp_byte_Variable_28) == 0x00002D, "Member 'FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation::Temp_byte_Variable_28' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation, Temp_byte_Variable_29) == 0x00002E, "Member 'FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation::Temp_byte_Variable_29' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation, Temp_byte_Variable_30) == 0x00002F, "Member 'FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation::Temp_byte_Variable_30' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation, Temp_byte_Variable_31) == 0x000030, "Member 'FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation::Temp_byte_Variable_31' has a wrong offset!");
static_assert(offsetof(FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation, K2Node_Select_Default) == 0x000031, "Member 'FLIB_UiCostume_C_GetCostumeEquipTypeFromPartsLocation::K2Node_Select_Default' has a wrong offset!");

}

