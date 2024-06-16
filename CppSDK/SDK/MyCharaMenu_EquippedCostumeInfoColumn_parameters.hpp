#pragma once

 

// Package: MyCharaMenu_EquippedCostumeInfoColumn

#include "Basic.hpp"

#include "E_MyCharaMenu_EquippedCostumeType_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "CharaParts_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function MyCharaMenu_EquippedCostumeInfoColumn.MyCharaMenu_EquippedCostumeInfoColumn_C.ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn
// 0x0078 (0x0078 - 0x0000)
struct MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8972[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8973[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8974[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharaMenu_EquippedCostumeInfo_C*     CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8975[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_MyCharaMenu_EquippedCostumeType             Temp_byte_Variable;                                // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8976[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Select_Default;                             // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0048(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Variable_3;                               // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_1;                           // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8977[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn) == 0x000008, "Wrong alignment on MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn");
static_assert(sizeof(MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn) == 0x000078, "Wrong size on MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn, EntryPoint) == 0x000000, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn::EntryPoint' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn, CallFunc_MakeLiteralInt_ReturnValue) == 0x000004, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn, Temp_int_Variable) == 0x000008, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn, Temp_int_Variable_1) == 0x00000C, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn, CallFunc_Conv_IntToByte_ReturnValue) == 0x000010, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn, CallFunc_GetValidValue_ReturnValue) == 0x000018, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000019, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00001A, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x00001B, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn, CallFunc_Less_IntInt_ReturnValue) == 0x00001C, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000020, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn, CallFunc_Create_ReturnValue) == 0x000028, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn, Temp_bool_Variable) == 0x000030, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn, Temp_float_Variable) == 0x000034, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn, Temp_float_Variable_1) == 0x000038, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn, Temp_byte_Variable) == 0x00003C, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn, K2Node_Select_Default) == 0x000040, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn, Temp_int_Variable_2) == 0x000044, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn, K2Node_MakeStruct_Margin) == 0x000048, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn, Temp_int_Variable_3) == 0x000058, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn, Temp_int_Variable_4) == 0x00005C, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn, K2Node_Select_Default_1) == 0x000060, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn, K2Node_Event_IsDesignTime) == 0x000064, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000068, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn, CallFunc_Array_Add_ReturnValue) == 0x000070, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_EquippedCostumeInfoColumn.MyCharaMenu_EquippedCostumeInfoColumn_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_EquippedCostumeInfoColumn_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_EquippedCostumeInfoColumn_C_PreConstruct) == 0x000001, "Wrong alignment on MyCharaMenu_EquippedCostumeInfoColumn_C_PreConstruct");
static_assert(sizeof(MyCharaMenu_EquippedCostumeInfoColumn_C_PreConstruct) == 0x000001, "Wrong size on MyCharaMenu_EquippedCostumeInfoColumn_C_PreConstruct");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function MyCharaMenu_EquippedCostumeInfoColumn.MyCharaMenu_EquippedCostumeInfoColumn_C.UpdateEquippedCostumeInfos
// 0x0210 (0x0210 - 0x0000)
struct MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos final
{
public:
	struct FCharaEquipInfo                        InCharaEquipInfo;                                  // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
	ESBCharacterGender                            InCharacterGender;                                 // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TmpIsSubLocationUnderwearUpperChecked;             // 0x0011(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          TmpIsSubLocationUnderwearChecked;                  // 0x0012(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharacterGender                            TmpCharacterGender;                                // 0x0013(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_MyCharaMenu_EquippedCostumeType             TmpType;                                           // 0x0014(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8978[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TmpArrayIndex;                                     // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           TmpSubLocation;                                    // 0x001C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8979[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ECharaPartsLocation>                   TmpCheckedSubLocations;                            // 0x0020(0x0010)(Edit, BlueprintVisible)
	EProtectorCategory                            TmpProtectorCategory;                              // 0x0030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_897A[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   TmpMasterDataManager;                              // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCharaEquipItemInfo>            TmpCharaEquipItems;                                // 0x0040(0x0010)(Edit, BlueprintVisible)
	TArray<ECharaPartsLocation>                   TmpGrayOutCharaPartsLocations;                     // 0x0050(0x0010)(Edit, BlueprintVisible)
	struct FCharaEquipInfo                        TmpCharaEquipInfo;                                 // 0x0060(0x0010)(Edit, BlueprintVisible)
	ECharaPartsBody                               Temp_byte_Variable;                                // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsBody                               Temp_byte_Variable_1;                              // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_897B[0x2];                                     // 0x0072(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_897C[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x008D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_897D[0x2];                                     // 0x008E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_897E[0x3];                                     // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_897F[0x3];                                     // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsBody                               Temp_byte_Variable_2;                              // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsBody                               Temp_byte_Variable_3;                              // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x00B3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EEquipableGender                              Temp_byte_Variable_4;                              // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x00B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x00B6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8980[0x1];                                     // 0x00B7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBCharacterGender                            Temp_byte_Variable_5;                              // 0x00C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default;                             // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8981[0x3];                                     // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8982[0x3];                                     // 0x00CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Find_ReturnValue_1;                 // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetCharaPartsLocationFromProtectorCategory_OutIsValid; // 0x00D5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECharaPartsLocation                           CallFunc_GetCharaPartsLocationFromProtectorCategory_OutCharaPartsLocation; // 0x00D6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8983[0x1];                                     // 0x00D7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECharaPartsLocation                           CallFunc_Array_Get_Item;                           // 0x00DD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGameSingleton_IsValid;                 // 0x00DE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8984[0x1];                                     // 0x00DF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class USBGameSingleton*                       CallFunc_GetGameSingleton_ReturnValue;             // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCharaPartsManager*                   CallFunc_GetCharaPartsManager_ReturnValue;         // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8985[0x6];                                     // 0x00F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharaEquipItemInfo                    CallFunc_Array_Get_Item_1;                         // 0x0100(0x0028)()
	bool                                          CallFunc_BP_FindCostumeMaster_IsExist;             // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8986[0x7];                                     // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CallFunc_BP_FindCostumeMaster_ReturnValue;         // 0x0130(0x0088)()
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x01BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8987[0x3];                                     // 0x01BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsBody                               K2Node_Select_Default_1;                           // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8988[0x7];                                     // 0x01C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCharaPartsData*                        CallFunc_GetPartsData_ReturnValue;                 // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8989[0x3];                                     // 0x01D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x01DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<ECharaPartsLocation>                   CallFunc_GetCheckedSubLocationArray_CharaPartsLocationArray; // 0x01E0(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x01F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x01F5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_4;                // 0x01F6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x01F7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_898A[0x4];                                     // 0x01FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharaMenu_EquippedCostumeInfo_C*     CallFunc_Array_Get_Item_2;                         // 0x0200(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_5;                // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0209(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos) == 0x000008, "Wrong alignment on MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos");
static_assert(sizeof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos) == 0x000210, "Wrong size on MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, InCharaEquipInfo) == 0x000000, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::InCharaEquipInfo' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, InCharacterGender) == 0x000010, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::InCharacterGender' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, TmpIsSubLocationUnderwearUpperChecked) == 0x000011, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::TmpIsSubLocationUnderwearUpperChecked' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, TmpIsSubLocationUnderwearChecked) == 0x000012, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::TmpIsSubLocationUnderwearChecked' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, TmpCharacterGender) == 0x000013, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::TmpCharacterGender' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, TmpType) == 0x000014, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::TmpType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, TmpArrayIndex) == 0x000018, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::TmpArrayIndex' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, TmpSubLocation) == 0x00001C, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::TmpSubLocation' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, TmpCheckedSubLocations) == 0x000020, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::TmpCheckedSubLocations' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, TmpProtectorCategory) == 0x000030, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::TmpProtectorCategory' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, TmpMasterDataManager) == 0x000038, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::TmpMasterDataManager' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, TmpCharaEquipItems) == 0x000040, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::TmpCharaEquipItems' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, TmpGrayOutCharaPartsLocations) == 0x000050, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::TmpGrayOutCharaPartsLocations' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, TmpCharaEquipInfo) == 0x000060, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::TmpCharaEquipInfo' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, Temp_byte_Variable) == 0x000070, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, Temp_byte_Variable_1) == 0x000071, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_MakeLiteralInt_ReturnValue) == 0x000074, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_MakeLiteralByte_ReturnValue) == 0x000078, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, Temp_int_Loop_Counter_Variable) == 0x00007C, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_Add_IntInt_ReturnValue) == 0x000080, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000084, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, Temp_int_Array_Index_Variable) == 0x000088, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00008C, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_NotEqual_IntInt_ReturnValue) == 0x00008D, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_Conv_ByteToInt_ReturnValue_1) == 0x000090, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_Conv_ByteToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x000094, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, Temp_int_Loop_Counter_Variable_1) == 0x000098, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_BooleanAND_ReturnValue) == 0x00009C, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000A0, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, Temp_int_Loop_Counter_Variable_2) == 0x0000A4, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000A8, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, Temp_int_Array_Index_Variable_1) == 0x0000AC, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, Temp_byte_Variable_2) == 0x0000B0, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, Temp_byte_Variable_3) == 0x0000B1, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_Not_PreBool_ReturnValue) == 0x0000B2, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_Not_PreBool_ReturnValue_1) == 0x0000B3, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, Temp_byte_Variable_4) == 0x0000B4, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x0000B5, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_BooleanAND_ReturnValue_1) == 0x0000B6, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_Array_Find_ReturnValue) == 0x0000B8, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_Array_Add_ReturnValue) == 0x0000BC, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_Less_IntInt_ReturnValue) == 0x0000C0, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, Temp_bool_Variable) == 0x0000C1, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, K2Node_SwitchEnum_CmpSuccess) == 0x0000C2, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, Temp_byte_Variable_5) == 0x0000C3, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, K2Node_Select_Default) == 0x0000C4, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_Array_Length_ReturnValue) == 0x0000C8, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000CC, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_Array_Find_ReturnValue_1) == 0x0000D0, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_Array_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_Less_IntInt_ReturnValue_2) == 0x0000D4, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_GetCharaPartsLocationFromProtectorCategory_OutIsValid) == 0x0000D5, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_GetCharaPartsLocationFromProtectorCategory_OutIsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_GetCharaPartsLocationFromProtectorCategory_OutCharaPartsLocation) == 0x0000D6, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_GetCharaPartsLocationFromProtectorCategory_OutCharaPartsLocation' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, Temp_int_Array_Index_Variable_2) == 0x0000D8, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, K2Node_SwitchEnum_CmpSuccess_1) == 0x0000DC, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_Array_Get_Item) == 0x0000DD, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_GetGameSingleton_IsValid) == 0x0000DE, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_GetGameSingleton_IsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_GetGameSingleton_ReturnValue) == 0x0000E0, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_GetGameSingleton_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_GetCharaPartsManager_ReturnValue) == 0x0000E8, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_GetCharaPartsManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_IsValid_ReturnValue) == 0x0000F0, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_GetMasterDataManager_IsValid) == 0x0000F1, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_GetMasterDataManager_ReturnValue) == 0x0000F8, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_Array_Get_Item_1) == 0x000100, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_BP_FindCostumeMaster_IsExist) == 0x000128, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_BP_FindCostumeMaster_IsExist' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_BP_FindCostumeMaster_ReturnValue) == 0x000130, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_BP_FindCostumeMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_Array_Length_ReturnValue_1) == 0x0001B8, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_Less_IntInt_ReturnValue_3) == 0x0001BC, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_Conv_StringToName_ReturnValue) == 0x0001C0, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, K2Node_Select_Default_1) == 0x0001C8, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_GetPartsData_ReturnValue) == 0x0001D0, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_GetPartsData_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_IsValid_ReturnValue_1) == 0x0001D8, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_Array_Add_ReturnValue_1) == 0x0001DC, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_GetCheckedSubLocationArray_CharaPartsLocationArray) == 0x0001E0, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_GetCheckedSubLocationArray_CharaPartsLocationArray' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_Array_Length_ReturnValue_2) == 0x0001F0, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_Greater_IntInt_ReturnValue) == 0x0001F4, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_Conv_IntToByte_ReturnValue) == 0x0001F5, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_Less_IntInt_ReturnValue_4) == 0x0001F6, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_Less_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_GetValidValue_ReturnValue) == 0x0001F7, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_Array_Length_ReturnValue_3) == 0x0001F8, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_Array_Get_Item_2) == 0x000200, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_Less_IntInt_ReturnValue_5) == 0x000208, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_Less_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos, CallFunc_IsValid_ReturnValue_2) == 0x000209, "Member 'MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

}

