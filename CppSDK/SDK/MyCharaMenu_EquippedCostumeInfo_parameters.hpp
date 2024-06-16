#pragma once

 

// Package: MyCharaMenu_EquippedCostumeInfo

#include "Basic.hpp"

#include "E_MyCharaMenu_EquippedCostumeType_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "CharaParts_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function MyCharaMenu_EquippedCostumeInfo.MyCharaMenu_EquippedCostumeInfo_C.ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo
// 0x0038 (0x0038 - 0x0000)
struct MyCharaMenu_EquippedCostumeInfo_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_894F[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8950[0x1];                                     // 0x0017(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_MyCharaMenu_EquippedCostumeType             Temp_byte_Variable;                                // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8951[0x2];                                     // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8952[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_1;             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_2;             // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_3;             // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0034(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_EquippedCostumeInfo_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo) == 0x000004, "Wrong alignment on MyCharaMenu_EquippedCostumeInfo_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo");
static_assert(sizeof(MyCharaMenu_EquippedCostumeInfo_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo) == 0x000038, "Wrong size on MyCharaMenu_EquippedCostumeInfo_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo, EntryPoint) == 0x000000, "Member 'MyCharaMenu_EquippedCostumeInfo_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo::EntryPoint' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo, Temp_int_Variable) == 0x000004, "Member 'MyCharaMenu_EquippedCostumeInfo_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo, Temp_int_Variable_1) == 0x000008, "Member 'MyCharaMenu_EquippedCostumeInfo_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo, CallFunc_Conv_IntToByte_ReturnValue) == 0x00000C, "Member 'MyCharaMenu_EquippedCostumeInfo_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'MyCharaMenu_EquippedCostumeInfo_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo, CallFunc_GetValidValue_ReturnValue) == 0x000014, "Member 'MyCharaMenu_EquippedCostumeInfo_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000015, "Member 'MyCharaMenu_EquippedCostumeInfo_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x000016, "Member 'MyCharaMenu_EquippedCostumeInfo_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000018, "Member 'MyCharaMenu_EquippedCostumeInfo_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo, Temp_byte_Variable) == 0x00001C, "Member 'MyCharaMenu_EquippedCostumeInfo_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo, K2Node_Event_IsDesignTime) == 0x00001D, "Member 'MyCharaMenu_EquippedCostumeInfo_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo, CallFunc_MakeLiteralInt_ReturnValue) == 0x000020, "Member 'MyCharaMenu_EquippedCostumeInfo_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo, CallFunc_Less_IntInt_ReturnValue) == 0x000024, "Member 'MyCharaMenu_EquippedCostumeInfo_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo, CallFunc_MakeLiteralInt_ReturnValue_1) == 0x000028, "Member 'MyCharaMenu_EquippedCostumeInfo_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo::CallFunc_MakeLiteralInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo, CallFunc_MakeLiteralInt_ReturnValue_2) == 0x00002C, "Member 'MyCharaMenu_EquippedCostumeInfo_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo::CallFunc_MakeLiteralInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo, CallFunc_MakeLiteralInt_ReturnValue_3) == 0x000030, "Member 'MyCharaMenu_EquippedCostumeInfo_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo::CallFunc_MakeLiteralInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo, K2Node_Select_Default) == 0x000034, "Member 'MyCharaMenu_EquippedCostumeInfo_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo::K2Node_Select_Default' has a wrong offset!");

// Function MyCharaMenu_EquippedCostumeInfo.MyCharaMenu_EquippedCostumeInfo_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_EquippedCostumeInfo_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_EquippedCostumeInfo_C_PreConstruct) == 0x000001, "Wrong alignment on MyCharaMenu_EquippedCostumeInfo_C_PreConstruct");
static_assert(sizeof(MyCharaMenu_EquippedCostumeInfo_C_PreConstruct) == 0x000001, "Wrong size on MyCharaMenu_EquippedCostumeInfo_C_PreConstruct");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'MyCharaMenu_EquippedCostumeInfo_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function MyCharaMenu_EquippedCostumeInfo.MyCharaMenu_EquippedCostumeInfo_C.UpdateEquippedCostumeInfo
// 0x0378 (0x0378 - 0x0000)
struct MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo final
{
public:
	E_MyCharaMenu_EquippedCostumeType             InEquippedCostumeType;                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8953[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCharaEquipInfo                        InCharaEquipInfo;                                  // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<ECharaPartsLocation>                   InGrayOutCharaPartsLocations;                      // 0x0018(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ESBCharaEquipType                             TmpEquipType;                                      // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8954[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TmpItemUniqueId;                                   // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 TmpRightFingerTextForEnd;                          // 0x0040(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 TmpLeftFingerTextForEnd;                           // 0x0050(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class UMyCharaMenu_EquippedCostumeInfoItem_C* TmpInfoItem;                                       // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextBlock_C*                           TmpTextBlock;                                      // 0x0068(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpArrayIndex;                                     // 0x0070(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EProtectorCategory                            TmpCategory;                                       // 0x0074(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8955[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TmpName;                                           // 0x0078(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         TmpInfoListItemMaxNum;                             // 0x0088(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8956[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<bool>                                  TmpIsGrayOutCostumeNames;                          // 0x0090(0x0010)(Edit, BlueprintVisible)
	TArray<class FString>                         TmpTypeCostumeNames;                               // 0x00A0(0x0010)(Edit, BlueprintVisible)
	TArray<struct FCharaEquipItemInfo>            TmpCharaEquipItems;                                // 0x00B0(0x0010)(Edit, BlueprintVisible)
	TArray<ECharaPartsLocation>                   TmpGrayOutCharaPartsLocations;                     // 0x00C0(0x0010)(Edit, BlueprintVisible)
	struct FCharaEquipInfo                        TmpCharaEquipInfo;                                 // 0x00D0(0x0010)(Edit, BlueprintVisible)
	E_MyCharaMenu_EquippedCostumeType             TmpEquippedCostumeType;                            // 0x00E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8957[0x7];                                     // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   TmpMasterDataManager;                              // 0x00E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_6;                               // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_7;                               // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_8;                               // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             Temp_byte_Variable;                                // 0x0114(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8958[0x3];                                     // 0x0115(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_9;                               // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_10;                              // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_11;                              // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_12;                              // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_13;                              // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_14;                              // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_15;                              // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_16;                              // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_17;                              // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_18;                              // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_19;                              // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_20;                              // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_21;                              // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_22;                              // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_23;                              // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_24;                              // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_25;                              // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_26;                              // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_27;                              // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_28;                              // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_29;                              // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_30;                              // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_31;                              // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_32;                              // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_33;                              // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_34;                              // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0181(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x0182(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0183(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0184(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0185(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x0186(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8959[0x1];                                     // 0x0187(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_35;                              // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_895A[0x4];                                     // 0x018C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharaMenu_EquippedCostumeInfoItem_C* CallFunc_Create_ReturnValue;                       // 0x0190(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_36;                              // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x01A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_895B[0x2];                                     // 0x01AA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_37;                              // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x01B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_895C[0x2];                                     // 0x01B2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_38;                              // 0x01B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECharaPartsLocation                           CallFunc_GetCostumePartsLocation_OutPartsLocation; // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCostumePartsLocation_ReturnValue;      // 0x01B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_895D[0x2];                                     // 0x01BA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_39;                              // 0x01BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x01C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x01C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess_2;                    // 0x01C3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetRingEquippedHand_OutIsLeftFinger;      // 0x01C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_895E[0x3];                                     // 0x01C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_40;                              // 0x01CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x01D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_1;                           // 0x01E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x01F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0200(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0204(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_895F[0x3];                                     // 0x0205(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x020C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_Get_Item;                           // 0x020D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8960[0x2];                                     // 0x020E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0210(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Map_Find_Value;                           // 0x0214(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8961[0x3];                                     // 0x0219(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_2;                           // 0x021C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0220(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0230(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0238(0x0018)()
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0250(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_41;                              // 0x0254(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x025C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8962[0x3];                                     // 0x025D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0260(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0264(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0265(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EProtectorCategory                            Temp_byte_Variable_1;                              // 0x0266(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8963[0x1];                                     // 0x0267(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_3;                           // 0x0268(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_3;                    // 0x026C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8964[0x3];                                     // 0x026D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Array_Get_Item_1;                         // 0x0270(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0284(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x0285(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0286(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8965[0x1];                                     // 0x0287(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0288(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharaEquipItemInfo                    CallFunc_Array_Get_Item_2;                         // 0x0290(0x0028)()
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x02B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x02BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue_1;            // 0x02BD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindCostumeMaster_IsExist;             // 0x02BE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8966[0x1];                                     // 0x02BF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterCostume                       CallFunc_BP_FindCostumeMaster_ReturnValue;         // 0x02C0(0x0088)()
	class FString                                 CallFunc_GetCostumeText_ReturnValue;               // 0x0348(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0358(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_4;                           // 0x0368(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo) == 0x000008, "Wrong alignment on MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo");
static_assert(sizeof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo) == 0x000378, "Wrong size on MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, InEquippedCostumeType) == 0x000000, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::InEquippedCostumeType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, InCharaEquipInfo) == 0x000008, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::InCharaEquipInfo' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, InGrayOutCharaPartsLocations) == 0x000018, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::InGrayOutCharaPartsLocations' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, TmpEquipType) == 0x000028, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::TmpEquipType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, TmpItemUniqueId) == 0x000030, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::TmpItemUniqueId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, TmpRightFingerTextForEnd) == 0x000040, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::TmpRightFingerTextForEnd' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, TmpLeftFingerTextForEnd) == 0x000050, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::TmpLeftFingerTextForEnd' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, TmpInfoItem) == 0x000060, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::TmpInfoItem' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, TmpTextBlock) == 0x000068, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::TmpTextBlock' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, TmpArrayIndex) == 0x000070, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::TmpArrayIndex' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, TmpCategory) == 0x000074, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::TmpCategory' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, TmpName) == 0x000078, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::TmpName' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, TmpInfoListItemMaxNum) == 0x000088, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::TmpInfoListItemMaxNum' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, TmpIsGrayOutCostumeNames) == 0x000090, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::TmpIsGrayOutCostumeNames' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, TmpTypeCostumeNames) == 0x0000A0, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::TmpTypeCostumeNames' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, TmpCharaEquipItems) == 0x0000B0, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::TmpCharaEquipItems' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, TmpGrayOutCharaPartsLocations) == 0x0000C0, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::TmpGrayOutCharaPartsLocations' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, TmpCharaEquipInfo) == 0x0000D0, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::TmpCharaEquipInfo' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, TmpEquippedCostumeType) == 0x0000E0, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::TmpEquippedCostumeType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, TmpMasterDataManager) == 0x0000E8, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::TmpMasterDataManager' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_int_Variable) == 0x0000F0, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_int_Variable_1) == 0x0000F4, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_int_Variable_2) == 0x0000F8, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_int_Variable_3) == 0x0000FC, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_int_Variable_4) == 0x000100, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_int_Variable_5) == 0x000104, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_int_Variable_6) == 0x000108, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_int_Variable_6' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_int_Variable_7) == 0x00010C, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_int_Variable_7' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_int_Variable_8) == 0x000110, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_int_Variable_8' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_byte_Variable) == 0x000114, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_int_Variable_9) == 0x000118, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_int_Variable_9' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_int_Variable_10) == 0x00011C, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_int_Variable_10' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_int_Variable_11) == 0x000120, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_int_Variable_11' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_int_Variable_12) == 0x000124, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_int_Variable_12' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_int_Variable_13) == 0x000128, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_int_Variable_13' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_int_Variable_14) == 0x00012C, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_int_Variable_14' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_int_Variable_15) == 0x000130, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_int_Variable_15' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_int_Variable_16) == 0x000134, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_int_Variable_16' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_int_Variable_17) == 0x000138, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_int_Variable_17' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_int_Variable_18) == 0x00013C, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_int_Variable_18' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_int_Variable_19) == 0x000140, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_int_Variable_19' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_int_Variable_20) == 0x000144, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_int_Variable_20' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_int_Variable_21) == 0x000148, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_int_Variable_21' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_int_Variable_22) == 0x00014C, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_int_Variable_22' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_int_Variable_23) == 0x000150, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_int_Variable_23' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_int_Variable_24) == 0x000154, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_int_Variable_24' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_int_Variable_25) == 0x000158, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_int_Variable_25' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_int_Variable_26) == 0x00015C, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_int_Variable_26' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_int_Variable_27) == 0x000160, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_int_Variable_27' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_int_Variable_28) == 0x000164, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_int_Variable_28' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_int_Variable_29) == 0x000168, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_int_Variable_29' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_int_Variable_30) == 0x00016C, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_int_Variable_30' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_int_Variable_31) == 0x000170, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_int_Variable_31' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_int_Variable_32) == 0x000174, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_int_Variable_32' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_int_Variable_33) == 0x000178, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_int_Variable_33' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_int_Variable_34) == 0x00017C, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_int_Variable_34' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_bool_Variable) == 0x000180, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000181, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x000182, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_bool_Variable_1) == 0x000183, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, CallFunc_BooleanAND_ReturnValue) == 0x000184, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_bool_Variable_2) == 0x000185, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_bool_Variable_3) == 0x000186, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_int_Variable_35) == 0x000188, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_int_Variable_35' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, CallFunc_Create_ReturnValue) == 0x000190, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_int_Loop_Counter_Variable) == 0x000198, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, CallFunc_Add_IntInt_ReturnValue) == 0x00019C, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_int_Array_Index_Variable) == 0x0001A0, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_int_Variable_36) == 0x0001A4, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_int_Variable_36' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, CallFunc_Conv_IntToByte_ReturnValue) == 0x0001A8, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, CallFunc_GetValidValue_ReturnValue) == 0x0001A9, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_int_Variable_37) == 0x0001AC, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_int_Variable_37' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, K2Node_SwitchEnum_CmpSuccess) == 0x0001B0, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, K2Node_SwitchEnum_CmpSuccess_1) == 0x0001B1, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_int_Variable_38) == 0x0001B4, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_int_Variable_38' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, CallFunc_GetCostumePartsLocation_OutPartsLocation) == 0x0001B8, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::CallFunc_GetCostumePartsLocation_OutPartsLocation' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, CallFunc_GetCostumePartsLocation_ReturnValue) == 0x0001B9, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::CallFunc_GetCostumePartsLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_int_Variable_39) == 0x0001BC, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_int_Variable_39' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0001C0, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x0001C1, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, CallFunc_BooleanOR_ReturnValue) == 0x0001C2, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, K2Node_SwitchEnum_CmpSuccess_2) == 0x0001C3, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::K2Node_SwitchEnum_CmpSuccess_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, CallFunc_GetRingEquippedHand_OutIsLeftFinger) == 0x0001C4, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::CallFunc_GetRingEquippedHand_OutIsLeftFinger' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, K2Node_Select_Default) == 0x0001C8, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_int_Variable_40) == 0x0001CC, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_int_Variable_40' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, CallFunc_GetTextFromAsset_ReturnValue) == 0x0001D0, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, K2Node_Select_Default_1) == 0x0001E0, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x0001F0, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, CallFunc_Array_Length_ReturnValue) == 0x000200, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, CallFunc_Greater_IntInt_ReturnValue) == 0x000204, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, CallFunc_Array_Find_ReturnValue) == 0x000208, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x00020C, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, CallFunc_Array_Get_Item) == 0x00020D, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_int_Array_Index_Variable_1) == 0x000210, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, CallFunc_Map_Find_Value) == 0x000214, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, CallFunc_Map_Find_ReturnValue) == 0x000218, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, K2Node_Select_Default_2) == 0x00021C, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, K2Node_MakeStruct_Margin) == 0x000220, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000230, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, CallFunc_Conv_StringToText_ReturnValue) == 0x000238, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_int_Loop_Counter_Variable_1) == 0x000250, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_int_Variable_41) == 0x000254, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_int_Variable_41' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, CallFunc_Add_IntInt_ReturnValue_1) == 0x000258, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x00025C, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, CallFunc_Array_Length_ReturnValue_1) == 0x000260, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, CallFunc_Less_IntInt_ReturnValue) == 0x000264, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, CallFunc_BooleanAND_ReturnValue_1) == 0x000265, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, Temp_byte_Variable_1) == 0x000266, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, K2Node_Select_Default_3) == 0x000268, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, K2Node_SwitchEnum_CmpSuccess_3) == 0x00026C, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::K2Node_SwitchEnum_CmpSuccess_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, CallFunc_Array_Get_Item_1) == 0x000270, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, CallFunc_Array_Length_ReturnValue_2) == 0x000280, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, CallFunc_Less_IntInt_ReturnValue_1) == 0x000284, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, CallFunc_NotEqual_StrStr_ReturnValue) == 0x000285, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, CallFunc_GetMasterDataManager_IsValid) == 0x000286, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, CallFunc_GetMasterDataManager_ReturnValue) == 0x000288, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, CallFunc_Array_Get_Item_2) == 0x000290, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, CallFunc_Array_Length_ReturnValue_3) == 0x0002B8, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, CallFunc_Less_IntInt_ReturnValue_2) == 0x0002BC, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, CallFunc_NotEqual_StrStr_ReturnValue_1) == 0x0002BD, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::CallFunc_NotEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, CallFunc_BP_FindCostumeMaster_IsExist) == 0x0002BE, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::CallFunc_BP_FindCostumeMaster_IsExist' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, CallFunc_BP_FindCostumeMaster_ReturnValue) == 0x0002C0, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::CallFunc_BP_FindCostumeMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, CallFunc_GetCostumeText_ReturnValue) == 0x000348, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::CallFunc_GetCostumeText_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, CallFunc_Concat_StrStr_ReturnValue) == 0x000358, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo, K2Node_Select_Default_4) == 0x000368, "Member 'MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo::K2Node_Select_Default_4' has a wrong offset!");

// Function MyCharaMenu_EquippedCostumeInfo.MyCharaMenu_EquippedCostumeInfo_C.GetRingEquippedHand
// 0x0005 (0x0005 - 0x0000)
struct MyCharaMenu_EquippedCostumeInfo_C_GetRingEquippedHand final
{
public:
	ESBCharaEquipType                             InRingEquipType;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OutIsLeftFinger;                                   // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_EquippedCostumeInfo_C_GetRingEquippedHand) == 0x000001, "Wrong alignment on MyCharaMenu_EquippedCostumeInfo_C_GetRingEquippedHand");
static_assert(sizeof(MyCharaMenu_EquippedCostumeInfo_C_GetRingEquippedHand) == 0x000005, "Wrong size on MyCharaMenu_EquippedCostumeInfo_C_GetRingEquippedHand");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_GetRingEquippedHand, InRingEquipType) == 0x000000, "Member 'MyCharaMenu_EquippedCostumeInfo_C_GetRingEquippedHand::InRingEquipType' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_GetRingEquippedHand, OutIsLeftFinger) == 0x000001, "Member 'MyCharaMenu_EquippedCostumeInfo_C_GetRingEquippedHand::OutIsLeftFinger' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_GetRingEquippedHand, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000002, "Member 'MyCharaMenu_EquippedCostumeInfo_C_GetRingEquippedHand::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_GetRingEquippedHand, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000003, "Member 'MyCharaMenu_EquippedCostumeInfo_C_GetRingEquippedHand::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_EquippedCostumeInfo_C_GetRingEquippedHand, CallFunc_BooleanOR_ReturnValue) == 0x000004, "Member 'MyCharaMenu_EquippedCostumeInfo_C_GetRingEquippedHand::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

}

