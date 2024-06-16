#pragma once

 

// Package: BP_UI_CharaCreateFunctionLibrary

#include "Basic.hpp"

#include "ST_AestheCourseIconInfo_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "E_CharaCreateTopMenuItems_CharaDetail_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "E_AestheShop_TicketType_structs.hpp"
#include "E_CharaCreate_Mode_structs.hpp"


namespace SDK::Params
{

// Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetCharaCreateModeFromGameModeOption
// 0x0050 (0x0050 - 0x0000)
struct BP_UI_CharaCreateFunctionLibrary_C_GetCharaCreateModeFromGameModeOption final
{
public:
	class FString                                 InOptionsString;                                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_CharaCreate_Mode                            OutMode;                                           // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C50[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TmpModeId;                                         // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetIntOption_ReturnValue;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C51[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C52[0x2];                                     // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C53[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UI_CharaCreateFunctionLibrary_C_GetCharaCreateModeFromGameModeOption) == 0x000008, "Wrong alignment on BP_UI_CharaCreateFunctionLibrary_C_GetCharaCreateModeFromGameModeOption");
static_assert(sizeof(BP_UI_CharaCreateFunctionLibrary_C_GetCharaCreateModeFromGameModeOption) == 0x000050, "Wrong size on BP_UI_CharaCreateFunctionLibrary_C_GetCharaCreateModeFromGameModeOption");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetCharaCreateModeFromGameModeOption, InOptionsString) == 0x000000, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetCharaCreateModeFromGameModeOption::InOptionsString' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetCharaCreateModeFromGameModeOption, __WorldContext) == 0x000010, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetCharaCreateModeFromGameModeOption::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetCharaCreateModeFromGameModeOption, OutMode) == 0x000018, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetCharaCreateModeFromGameModeOption::OutMode' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetCharaCreateModeFromGameModeOption, TmpModeId) == 0x00001C, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetCharaCreateModeFromGameModeOption::TmpModeId' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetCharaCreateModeFromGameModeOption, CallFunc_MakeLiteralInt_ReturnValue) == 0x000020, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetCharaCreateModeFromGameModeOption::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetCharaCreateModeFromGameModeOption, CallFunc_GetIntOption_ReturnValue) == 0x000024, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetCharaCreateModeFromGameModeOption::CallFunc_GetIntOption_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetCharaCreateModeFromGameModeOption, Temp_int_Variable) == 0x000028, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetCharaCreateModeFromGameModeOption::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetCharaCreateModeFromGameModeOption, Temp_int_Variable_1) == 0x00002C, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetCharaCreateModeFromGameModeOption::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetCharaCreateModeFromGameModeOption, CallFunc_Conv_IntToByte_ReturnValue) == 0x000030, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetCharaCreateModeFromGameModeOption::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetCharaCreateModeFromGameModeOption, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetCharaCreateModeFromGameModeOption::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetCharaCreateModeFromGameModeOption, CallFunc_GetValidValue_ReturnValue) == 0x000038, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetCharaCreateModeFromGameModeOption::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetCharaCreateModeFromGameModeOption, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000039, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetCharaCreateModeFromGameModeOption::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetCharaCreateModeFromGameModeOption, CallFunc_Conv_ByteToInt_ReturnValue) == 0x00003C, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetCharaCreateModeFromGameModeOption::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetCharaCreateModeFromGameModeOption, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x000040, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetCharaCreateModeFromGameModeOption::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetCharaCreateModeFromGameModeOption, CallFunc_Conv_ByteToInt_ReturnValue_1) == 0x000044, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetCharaCreateModeFromGameModeOption::CallFunc_Conv_ByteToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetCharaCreateModeFromGameModeOption, CallFunc_Less_IntInt_ReturnValue) == 0x000048, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetCharaCreateModeFromGameModeOption::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetCharaCreateModeFromGameModeOption, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000049, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetCharaCreateModeFromGameModeOption::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetAestheTicketTokenIdFromGameModeOption
// 0x0020 (0x0020 - 0x0000)
struct BP_UI_CharaCreateFunctionLibrary_C_GetAestheTicketTokenIdFromGameModeOption final
{
public:
	class FString                                 InOptionsString;                                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OutTIcketTokenId;                                  // 0x0018(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetIntOption_ReturnValue;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheTicketTokenIdFromGameModeOption) == 0x000008, "Wrong alignment on BP_UI_CharaCreateFunctionLibrary_C_GetAestheTicketTokenIdFromGameModeOption");
static_assert(sizeof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheTicketTokenIdFromGameModeOption) == 0x000020, "Wrong size on BP_UI_CharaCreateFunctionLibrary_C_GetAestheTicketTokenIdFromGameModeOption");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheTicketTokenIdFromGameModeOption, InOptionsString) == 0x000000, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheTicketTokenIdFromGameModeOption::InOptionsString' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheTicketTokenIdFromGameModeOption, __WorldContext) == 0x000010, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheTicketTokenIdFromGameModeOption::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheTicketTokenIdFromGameModeOption, OutTIcketTokenId) == 0x000018, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheTicketTokenIdFromGameModeOption::OutTIcketTokenId' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheTicketTokenIdFromGameModeOption, CallFunc_GetIntOption_ReturnValue) == 0x00001C, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheTicketTokenIdFromGameModeOption::CallFunc_GetIntOption_ReturnValue' has a wrong offset!");

// Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetAestheTicketUseNumFromGameModeOption
// 0x0020 (0x0020 - 0x0000)
struct BP_UI_CharaCreateFunctionLibrary_C_GetAestheTicketUseNumFromGameModeOption final
{
public:
	class FString                                 InOptionsString;                                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OutUseTicketNum;                                   // 0x0018(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetIntOption_ReturnValue;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheTicketUseNumFromGameModeOption) == 0x000008, "Wrong alignment on BP_UI_CharaCreateFunctionLibrary_C_GetAestheTicketUseNumFromGameModeOption");
static_assert(sizeof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheTicketUseNumFromGameModeOption) == 0x000020, "Wrong size on BP_UI_CharaCreateFunctionLibrary_C_GetAestheTicketUseNumFromGameModeOption");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheTicketUseNumFromGameModeOption, InOptionsString) == 0x000000, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheTicketUseNumFromGameModeOption::InOptionsString' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheTicketUseNumFromGameModeOption, __WorldContext) == 0x000010, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheTicketUseNumFromGameModeOption::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheTicketUseNumFromGameModeOption, OutUseTicketNum) == 0x000018, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheTicketUseNumFromGameModeOption::OutUseTicketNum' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheTicketUseNumFromGameModeOption, CallFunc_GetIntOption_ReturnValue) == 0x00001C, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheTicketUseNumFromGameModeOption::CallFunc_GetIntOption_ReturnValue' has a wrong offset!");

// Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetIfPlayerHasAestheTicketFromGameModeOption
// 0x0028 (0x0028 - 0x0000)
struct BP_UI_CharaCreateFunctionLibrary_C_GetIfPlayerHasAestheTicketFromGameModeOption final
{
public:
	class FString                                 InOptionsString;                                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasTicket;                                         // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C54[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetIntOption_ReturnValue;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UI_CharaCreateFunctionLibrary_C_GetIfPlayerHasAestheTicketFromGameModeOption) == 0x000008, "Wrong alignment on BP_UI_CharaCreateFunctionLibrary_C_GetIfPlayerHasAestheTicketFromGameModeOption");
static_assert(sizeof(BP_UI_CharaCreateFunctionLibrary_C_GetIfPlayerHasAestheTicketFromGameModeOption) == 0x000028, "Wrong size on BP_UI_CharaCreateFunctionLibrary_C_GetIfPlayerHasAestheTicketFromGameModeOption");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetIfPlayerHasAestheTicketFromGameModeOption, InOptionsString) == 0x000000, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetIfPlayerHasAestheTicketFromGameModeOption::InOptionsString' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetIfPlayerHasAestheTicketFromGameModeOption, __WorldContext) == 0x000010, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetIfPlayerHasAestheTicketFromGameModeOption::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetIfPlayerHasAestheTicketFromGameModeOption, HasTicket) == 0x000018, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetIfPlayerHasAestheTicketFromGameModeOption::HasTicket' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetIfPlayerHasAestheTicketFromGameModeOption, CallFunc_GetIntOption_ReturnValue) == 0x00001C, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetIfPlayerHasAestheTicketFromGameModeOption::CallFunc_GetIntOption_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetIfPlayerHasAestheTicketFromGameModeOption, CallFunc_Greater_IntInt_ReturnValue) == 0x000020, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetIfPlayerHasAestheTicketFromGameModeOption::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetAestheStartGenderFromGameModeOption
// 0x0030 (0x0030 - 0x0000)
struct BP_UI_CharaCreateFunctionLibrary_C_GetAestheStartGenderFromGameModeOption final
{
public:
	class FString                                 InOptionsString;                                   // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            OutGender;                                         // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            LocalStartGender;                                  // 0x0019(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C55[0x2];                                     // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C56[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetIntOption_ReturnValue;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue_1;             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheStartGenderFromGameModeOption) == 0x000008, "Wrong alignment on BP_UI_CharaCreateFunctionLibrary_C_GetAestheStartGenderFromGameModeOption");
static_assert(sizeof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheStartGenderFromGameModeOption) == 0x000030, "Wrong size on BP_UI_CharaCreateFunctionLibrary_C_GetAestheStartGenderFromGameModeOption");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheStartGenderFromGameModeOption, InOptionsString) == 0x000000, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheStartGenderFromGameModeOption::InOptionsString' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheStartGenderFromGameModeOption, __WorldContext) == 0x000010, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheStartGenderFromGameModeOption::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheStartGenderFromGameModeOption, OutGender) == 0x000018, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheStartGenderFromGameModeOption::OutGender' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheStartGenderFromGameModeOption, LocalStartGender) == 0x000019, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheStartGenderFromGameModeOption::LocalStartGender' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheStartGenderFromGameModeOption, CallFunc_Conv_ByteToInt_ReturnValue) == 0x00001C, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheStartGenderFromGameModeOption::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheStartGenderFromGameModeOption, CallFunc_MakeLiteralByte_ReturnValue) == 0x000020, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheStartGenderFromGameModeOption::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheStartGenderFromGameModeOption, CallFunc_GetIntOption_ReturnValue) == 0x000024, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheStartGenderFromGameModeOption::CallFunc_GetIntOption_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheStartGenderFromGameModeOption, CallFunc_Conv_ByteToInt_ReturnValue_1) == 0x000028, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheStartGenderFromGameModeOption::CallFunc_Conv_ByteToInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheStartGenderFromGameModeOption, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00002C, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheStartGenderFromGameModeOption::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetAestheShopTopMenuItems
// 0x0060 (0x0060 - 0x0000)
struct BP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems final
{
public:
	E_AestheShop_TicketType                       InTicketType;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C57[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<E_CharaCreateTopMenuItems_CharaDetail> OutTopMenuItems;                                   // 0x0010(0x0010)(Parm, OutParm)
	E_CharaCreateTopMenuItems_CharaDetail         TmpCurrTopMenuItem;                                // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_AestheShop_TicketType                       TmpTicketType;                                     // 0x0021(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C58[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<E_CharaCreateTopMenuItems_CharaDetail> TmpMenuItems;                                      // 0x0028(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Variable;                                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C59[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C5A[0x1];                                     // 0x004B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0056(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x0057(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems) == 0x000008, "Wrong alignment on BP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems");
static_assert(sizeof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems) == 0x000060, "Wrong size on BP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems, InTicketType) == 0x000000, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems::InTicketType' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems, __WorldContext) == 0x000008, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems, OutTopMenuItems) == 0x000010, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems::OutTopMenuItems' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems, TmpCurrTopMenuItem) == 0x000020, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems::TmpCurrTopMenuItem' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems, TmpTicketType) == 0x000021, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems::TmpTicketType' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems, TmpMenuItems) == 0x000028, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems::TmpMenuItems' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems, Temp_int_Variable) == 0x000038, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems, Temp_int_Variable_1) == 0x00003C, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems, CallFunc_Conv_IntToByte_ReturnValue) == 0x000040, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems, CallFunc_GetValidValue_ReturnValue) == 0x000048, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x000049, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x00004A, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems, CallFunc_Conv_ByteToInt_ReturnValue) == 0x00004C, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems, CallFunc_MakeLiteralInt_ReturnValue) == 0x000050, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000054, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems, CallFunc_Less_IntInt_ReturnValue) == 0x000055, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000056, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x000057, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems, CallFunc_Array_Add_ReturnValue) == 0x000058, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems, K2Node_SwitchEnum_CmpSuccess) == 0x00005C, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheShopTopMenuItems::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetAestheCourseIconTexture
// 0x0150 (0x0150 - 0x0000)
struct BP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture final
{
public:
	int32                                         InCourseId;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C5B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              OutIconTexture;                                    // 0x0010(0x0028)(Parm, OutParm, HasGetValueTypeHash)
	TArray<class FName>                           TmpCourseIconDBRowNames;                           // 0x0038(0x0010)(Edit, BlueprintVisible)
	class FString                                 TmpCourseIconId;                                   // 0x0048(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              DefaultIconTexture;                                // 0x0058(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                         TmpCourseId;                                       // 0x0080(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetDataTableRowNames_OutRowNames;         // 0x0090(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_AestheCourseIconInfo               CallFunc_GetDataTableRowFromName_OutRow;           // 0x00A8(0x0038)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C5C[0x3];                                     // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x00EA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C5D[0x5];                                     // 0x00EB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindAestheShopCourseMaster_IsExists;   // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C5E[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAestheShopCourseMasterData          CallFunc_BP_FindAestheShopCourseMaster_ReturnValue; // 0x0100(0x0050)()
};
static_assert(alignof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture) == 0x000008, "Wrong alignment on BP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture");
static_assert(sizeof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture) == 0x000150, "Wrong size on BP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture, InCourseId) == 0x000000, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture::InCourseId' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture, __WorldContext) == 0x000008, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture, OutIconTexture) == 0x000010, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture::OutIconTexture' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture, TmpCourseIconDBRowNames) == 0x000038, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture::TmpCourseIconDBRowNames' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture, TmpCourseIconId) == 0x000048, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture::TmpCourseIconId' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture, DefaultIconTexture) == 0x000058, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture::DefaultIconTexture' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture, TmpCourseId) == 0x000080, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture::TmpCourseId' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture, Temp_int_Array_Index_Variable) == 0x000084, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture, Temp_int_Loop_Counter_Variable) == 0x000088, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture, CallFunc_Add_IntInt_ReturnValue) == 0x00008C, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture, CallFunc_GetDataTableRowNames_OutRowNames) == 0x000090, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture::CallFunc_GetDataTableRowNames_OutRowNames' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture, CallFunc_Array_Get_Item) == 0x0000A0, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture, CallFunc_GetDataTableRowFromName_OutRow) == 0x0000A8, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000E0, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture, CallFunc_Array_Length_ReturnValue) == 0x0000E4, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture, CallFunc_Less_IntInt_ReturnValue) == 0x0000E8, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0000E9, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture, CallFunc_GetMasterDataManager_IsValid) == 0x0000EA, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture, CallFunc_GetMasterDataManager_ReturnValue) == 0x0000F0, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture, CallFunc_BP_FindAestheShopCourseMaster_IsExists) == 0x0000F8, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture::CallFunc_BP_FindAestheShopCourseMaster_IsExists' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture, CallFunc_BP_FindAestheShopCourseMaster_ReturnValue) == 0x000100, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetAestheCourseIconTexture::CallFunc_BP_FindAestheShopCourseMaster_ReturnValue' has a wrong offset!");

// Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.CheckIfPlayerHasAestheTicket
// 0x0048 (0x0048 - 0x0000)
struct BP_UI_CharaCreateFunctionLibrary_C_CheckIfPlayerHasAestheTicket final
{
public:
	int32                                         InTicketTokenId;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C5F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OutHasTicket;                                      // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C60[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBCharacterToken>              CallFunc_GetTokenList_ReturnValue;                 // 0x0018(0x0010)(ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCharacterToken                      CallFunc_Array_Get_Item;                           // 0x0030(0x000C)(NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C61[0x2];                                     // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UI_CharaCreateFunctionLibrary_C_CheckIfPlayerHasAestheTicket) == 0x000008, "Wrong alignment on BP_UI_CharaCreateFunctionLibrary_C_CheckIfPlayerHasAestheTicket");
static_assert(sizeof(BP_UI_CharaCreateFunctionLibrary_C_CheckIfPlayerHasAestheTicket) == 0x000048, "Wrong size on BP_UI_CharaCreateFunctionLibrary_C_CheckIfPlayerHasAestheTicket");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_CheckIfPlayerHasAestheTicket, InTicketTokenId) == 0x000000, "Member 'BP_UI_CharaCreateFunctionLibrary_C_CheckIfPlayerHasAestheTicket::InTicketTokenId' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_CheckIfPlayerHasAestheTicket, __WorldContext) == 0x000008, "Member 'BP_UI_CharaCreateFunctionLibrary_C_CheckIfPlayerHasAestheTicket::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_CheckIfPlayerHasAestheTicket, OutHasTicket) == 0x000010, "Member 'BP_UI_CharaCreateFunctionLibrary_C_CheckIfPlayerHasAestheTicket::OutHasTicket' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_CheckIfPlayerHasAestheTicket, CallFunc_GetTokenList_ReturnValue) == 0x000018, "Member 'BP_UI_CharaCreateFunctionLibrary_C_CheckIfPlayerHasAestheTicket::CallFunc_GetTokenList_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_CheckIfPlayerHasAestheTicket, Temp_int_Array_Index_Variable) == 0x000028, "Member 'BP_UI_CharaCreateFunctionLibrary_C_CheckIfPlayerHasAestheTicket::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_CheckIfPlayerHasAestheTicket, CallFunc_Array_Length_ReturnValue) == 0x00002C, "Member 'BP_UI_CharaCreateFunctionLibrary_C_CheckIfPlayerHasAestheTicket::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_CheckIfPlayerHasAestheTicket, CallFunc_Array_Get_Item) == 0x000030, "Member 'BP_UI_CharaCreateFunctionLibrary_C_CheckIfPlayerHasAestheTicket::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_CheckIfPlayerHasAestheTicket, Temp_int_Loop_Counter_Variable) == 0x00003C, "Member 'BP_UI_CharaCreateFunctionLibrary_C_CheckIfPlayerHasAestheTicket::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_CheckIfPlayerHasAestheTicket, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000040, "Member 'BP_UI_CharaCreateFunctionLibrary_C_CheckIfPlayerHasAestheTicket::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_CheckIfPlayerHasAestheTicket, CallFunc_Less_IntInt_ReturnValue) == 0x000041, "Member 'BP_UI_CharaCreateFunctionLibrary_C_CheckIfPlayerHasAestheTicket::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_CheckIfPlayerHasAestheTicket, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'BP_UI_CharaCreateFunctionLibrary_C_CheckIfPlayerHasAestheTicket::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetClassSkillMoviePath
// 0x0028 (0x0028 - 0x0000)
struct BP_UI_CharaCreateFunctionLibrary_C_GetClassSkillMoviePath final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 OutPath;                                           // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UI_CharaCreateFunctionLibrary_C_GetClassSkillMoviePath) == 0x000008, "Wrong alignment on BP_UI_CharaCreateFunctionLibrary_C_GetClassSkillMoviePath");
static_assert(sizeof(BP_UI_CharaCreateFunctionLibrary_C_GetClassSkillMoviePath) == 0x000028, "Wrong size on BP_UI_CharaCreateFunctionLibrary_C_GetClassSkillMoviePath");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetClassSkillMoviePath, __WorldContext) == 0x000000, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetClassSkillMoviePath::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetClassSkillMoviePath, OutPath) == 0x000008, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetClassSkillMoviePath::OutPath' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetClassSkillMoviePath, CallFunc_GetTextFromAsset_ReturnValue) == 0x000018, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetClassSkillMoviePath::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");

// Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetSkinColor
// 0x0140 (0x0140 - 0x0000)
struct BP_UI_CharaCreateFunctionLibrary_C_GetSkinColor final
{
public:
	int32                                         InHue;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InHueMax;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InValue;                                           // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C62[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OutIsValid;                                        // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C63[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharaCreateColor                    OutSkinColor;                                      // 0x001C(0x003C)(Parm, OutParm, NoDestructor)
	struct FSBCharaCreateColor                    Temp_struct_Variable;                              // 0x0058(0x003C)(NoDestructor)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C64[0x3];                                     // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCharaCreateColorManager*             CallFunc_GetColorManager_ReturnValue;              // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C65[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBCharaCreateColor>            CallFunc_GetColorTable_ReturnValue;                // 0x00B0(0x0010)(ReferenceParm)
	struct FSBCharaCreateColor                    CallFunc_Array_Get_Item;                           // 0x00C0(0x003C)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C66[0x3];                                     // 0x0101(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharaCreateColor                    K2Node_Select_Default;                             // 0x0104(0x003C)(NoDestructor)
};
static_assert(alignof(BP_UI_CharaCreateFunctionLibrary_C_GetSkinColor) == 0x000008, "Wrong alignment on BP_UI_CharaCreateFunctionLibrary_C_GetSkinColor");
static_assert(sizeof(BP_UI_CharaCreateFunctionLibrary_C_GetSkinColor) == 0x000140, "Wrong size on BP_UI_CharaCreateFunctionLibrary_C_GetSkinColor");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetSkinColor, InHue) == 0x000000, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetSkinColor::InHue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetSkinColor, InHueMax) == 0x000004, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetSkinColor::InHueMax' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetSkinColor, InValue) == 0x000008, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetSkinColor::InValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetSkinColor, __WorldContext) == 0x000010, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetSkinColor::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetSkinColor, OutIsValid) == 0x000018, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetSkinColor::OutIsValid' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetSkinColor, OutSkinColor) == 0x00001C, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetSkinColor::OutSkinColor' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetSkinColor, Temp_struct_Variable) == 0x000058, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetSkinColor::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetSkinColor, CallFunc_Multiply_IntInt_ReturnValue) == 0x000094, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetSkinColor::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetSkinColor, CallFunc_Add_IntInt_ReturnValue) == 0x000098, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetSkinColor::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetSkinColor, Temp_bool_Variable) == 0x00009C, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetSkinColor::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetSkinColor, CallFunc_GetColorManager_ReturnValue) == 0x0000A0, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetSkinColor::CallFunc_GetColorManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetSkinColor, CallFunc_IsValid_ReturnValue) == 0x0000A8, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetSkinColor::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetSkinColor, CallFunc_GetColorTable_ReturnValue) == 0x0000B0, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetSkinColor::CallFunc_GetColorTable_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetSkinColor, CallFunc_Array_Get_Item) == 0x0000C0, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetSkinColor::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetSkinColor, CallFunc_Array_Length_ReturnValue) == 0x0000FC, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetSkinColor::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetSkinColor, CallFunc_Greater_IntInt_ReturnValue) == 0x000100, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetSkinColor::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetSkinColor, K2Node_Select_Default) == 0x000104, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetSkinColor::K2Node_Select_Default' has a wrong offset!");

// Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetSkinColorHueMax
// 0x0058 (0x0058 - 0x0000)
struct BP_UI_CharaCreateFunctionLibrary_C_GetSkinColorHueMax final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OutHueMax;                                         // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C67[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindAestheShopCharaParamRestrictionMaster_IsExists; // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C68[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAestheShopCharaParamRestrictionMasterData CallFunc_BP_FindAestheShopCharaParamRestrictionMaster_ReturnValue; // 0x0020(0x0030)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UI_CharaCreateFunctionLibrary_C_GetSkinColorHueMax) == 0x000008, "Wrong alignment on BP_UI_CharaCreateFunctionLibrary_C_GetSkinColorHueMax");
static_assert(sizeof(BP_UI_CharaCreateFunctionLibrary_C_GetSkinColorHueMax) == 0x000058, "Wrong size on BP_UI_CharaCreateFunctionLibrary_C_GetSkinColorHueMax");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetSkinColorHueMax, __WorldContext) == 0x000000, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetSkinColorHueMax::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetSkinColorHueMax, OutHueMax) == 0x000008, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetSkinColorHueMax::OutHueMax' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetSkinColorHueMax, CallFunc_GetMasterDataManager_IsValid) == 0x00000C, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetSkinColorHueMax::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetSkinColorHueMax, CallFunc_GetMasterDataManager_ReturnValue) == 0x000010, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetSkinColorHueMax::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetSkinColorHueMax, CallFunc_BP_FindAestheShopCharaParamRestrictionMaster_IsExists) == 0x000018, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetSkinColorHueMax::CallFunc_BP_FindAestheShopCharaParamRestrictionMaster_IsExists' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetSkinColorHueMax, CallFunc_BP_FindAestheShopCharaParamRestrictionMaster_ReturnValue) == 0x000020, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetSkinColorHueMax::CallFunc_BP_FindAestheShopCharaParamRestrictionMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetSkinColorHueMax, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetSkinColorHueMax::CallFunc_Array_Length_ReturnValue' has a wrong offset!");

// Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetFacialMarksColor
// 0x0150 (0x0150 - 0x0000)
struct BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColor final
{
public:
	int32                                         InHue;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InHueMax;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InValue;                                           // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C69[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OutIsValid;                                        // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C6A[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharaCreateColor                    OutColor;                                          // 0x001C(0x003C)(Parm, OutParm, NoDestructor)
	TArray<struct FSBCharaCreateColor>            LocalColorTable;                                   // 0x0058(0x0010)(Edit, BlueprintVisible)
	struct FSBCharaCreateColor                    Temp_struct_Variable;                              // 0x0068(0x003C)(NoDestructor)
	int32                                         CallFunc_Multiply_IntInt_ReturnValue;              // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C6B[0x3];                                     // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCharaCreateColorManager*             CallFunc_GetColorManager_ReturnValue;              // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCharaCreateColor                    CallFunc_Array_Get_Item;                           // 0x00B8(0x003C)(NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C6C[0x3];                                     // 0x00F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBCharaCreateColor>            CallFunc_GetColorTable_ReturnValue;                // 0x00F8(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C6D[0x3];                                     // 0x010D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBCharaCreateColor                    K2Node_Select_Default;                             // 0x0110(0x003C)(NoDestructor)
};
static_assert(alignof(BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColor) == 0x000008, "Wrong alignment on BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColor");
static_assert(sizeof(BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColor) == 0x000150, "Wrong size on BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColor");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColor, InHue) == 0x000000, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColor::InHue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColor, InHueMax) == 0x000004, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColor::InHueMax' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColor, InValue) == 0x000008, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColor::InValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColor, __WorldContext) == 0x000010, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColor::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColor, OutIsValid) == 0x000018, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColor::OutIsValid' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColor, OutColor) == 0x00001C, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColor::OutColor' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColor, LocalColorTable) == 0x000058, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColor::LocalColorTable' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColor, Temp_struct_Variable) == 0x000068, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColor::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColor, CallFunc_Multiply_IntInt_ReturnValue) == 0x0000A4, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColor::CallFunc_Multiply_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColor, CallFunc_Add_IntInt_ReturnValue) == 0x0000A8, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColor::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColor, Temp_bool_Variable) == 0x0000AC, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColor::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColor, CallFunc_GetColorManager_ReturnValue) == 0x0000B0, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColor::CallFunc_GetColorManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColor, CallFunc_Array_Get_Item) == 0x0000B8, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColor::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColor, CallFunc_IsValid_ReturnValue) == 0x0000F4, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColor::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColor, CallFunc_GetColorTable_ReturnValue) == 0x0000F8, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColor::CallFunc_GetColorTable_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColor, CallFunc_Array_Length_ReturnValue) == 0x000108, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColor::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColor, CallFunc_Greater_IntInt_ReturnValue) == 0x00010C, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColor::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColor, K2Node_Select_Default) == 0x000110, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColor::K2Node_Select_Default' has a wrong offset!");

// Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetFacialMarksColorHueMax
// 0x0058 (0x0058 - 0x0000)
struct BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColorHueMax final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OutHueMax;                                         // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C6E[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindAestheShopCharaParamRestrictionMaster_IsExists; // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C6F[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAestheShopCharaParamRestrictionMasterData CallFunc_BP_FindAestheShopCharaParamRestrictionMaster_ReturnValue; // 0x0020(0x0030)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColorHueMax) == 0x000008, "Wrong alignment on BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColorHueMax");
static_assert(sizeof(BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColorHueMax) == 0x000058, "Wrong size on BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColorHueMax");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColorHueMax, __WorldContext) == 0x000000, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColorHueMax::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColorHueMax, OutHueMax) == 0x000008, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColorHueMax::OutHueMax' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColorHueMax, CallFunc_GetMasterDataManager_IsValid) == 0x00000C, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColorHueMax::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColorHueMax, CallFunc_GetMasterDataManager_ReturnValue) == 0x000010, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColorHueMax::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColorHueMax, CallFunc_BP_FindAestheShopCharaParamRestrictionMaster_IsExists) == 0x000018, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColorHueMax::CallFunc_BP_FindAestheShopCharaParamRestrictionMaster_IsExists' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColorHueMax, CallFunc_BP_FindAestheShopCharaParamRestrictionMaster_ReturnValue) == 0x000020, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColorHueMax::CallFunc_BP_FindAestheShopCharaParamRestrictionMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColorHueMax, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetFacialMarksColorHueMax::CallFunc_Array_Length_ReturnValue' has a wrong offset!");

// Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.RoundSliderValueToNearPitch
// 0x0040 (0x0040 - 0x0000)
struct BP_UI_CharaCreateFunctionLibrary_C_RoundSliderValueToNearPitch final
{
public:
	float                                         InSliderValue;                                     // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InSliderRange;                                     // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OutSliderValue;                                    // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TmpSliderRange;                                    // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TmpRawSliderValue;                                 // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C70[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Round_ReturnValue;                        // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C71[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C72[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UI_CharaCreateFunctionLibrary_C_RoundSliderValueToNearPitch) == 0x000008, "Wrong alignment on BP_UI_CharaCreateFunctionLibrary_C_RoundSliderValueToNearPitch");
static_assert(sizeof(BP_UI_CharaCreateFunctionLibrary_C_RoundSliderValueToNearPitch) == 0x000040, "Wrong size on BP_UI_CharaCreateFunctionLibrary_C_RoundSliderValueToNearPitch");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_RoundSliderValueToNearPitch, InSliderValue) == 0x000000, "Member 'BP_UI_CharaCreateFunctionLibrary_C_RoundSliderValueToNearPitch::InSliderValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_RoundSliderValueToNearPitch, InSliderRange) == 0x000004, "Member 'BP_UI_CharaCreateFunctionLibrary_C_RoundSliderValueToNearPitch::InSliderRange' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_RoundSliderValueToNearPitch, __WorldContext) == 0x000008, "Member 'BP_UI_CharaCreateFunctionLibrary_C_RoundSliderValueToNearPitch::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_RoundSliderValueToNearPitch, OutSliderValue) == 0x000010, "Member 'BP_UI_CharaCreateFunctionLibrary_C_RoundSliderValueToNearPitch::OutSliderValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_RoundSliderValueToNearPitch, TmpSliderRange) == 0x000014, "Member 'BP_UI_CharaCreateFunctionLibrary_C_RoundSliderValueToNearPitch::TmpSliderRange' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_RoundSliderValueToNearPitch, TmpRawSliderValue) == 0x000018, "Member 'BP_UI_CharaCreateFunctionLibrary_C_RoundSliderValueToNearPitch::TmpRawSliderValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_RoundSliderValueToNearPitch, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x00001C, "Member 'BP_UI_CharaCreateFunctionLibrary_C_RoundSliderValueToNearPitch::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_RoundSliderValueToNearPitch, CallFunc_NotEqual_FloatFloat_ReturnValue) == 0x000020, "Member 'BP_UI_CharaCreateFunctionLibrary_C_RoundSliderValueToNearPitch::CallFunc_NotEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_RoundSliderValueToNearPitch, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000024, "Member 'BP_UI_CharaCreateFunctionLibrary_C_RoundSliderValueToNearPitch::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_RoundSliderValueToNearPitch, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000028, "Member 'BP_UI_CharaCreateFunctionLibrary_C_RoundSliderValueToNearPitch::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_RoundSliderValueToNearPitch, CallFunc_Round_ReturnValue) == 0x00002C, "Member 'BP_UI_CharaCreateFunctionLibrary_C_RoundSliderValueToNearPitch::CallFunc_Round_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_RoundSliderValueToNearPitch, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000030, "Member 'BP_UI_CharaCreateFunctionLibrary_C_RoundSliderValueToNearPitch::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_RoundSliderValueToNearPitch, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000034, "Member 'BP_UI_CharaCreateFunctionLibrary_C_RoundSliderValueToNearPitch::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_RoundSliderValueToNearPitch, CallFunc_BooleanAND_ReturnValue) == 0x000038, "Member 'BP_UI_CharaCreateFunctionLibrary_C_RoundSliderValueToNearPitch::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_RoundSliderValueToNearPitch, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x00003C, "Member 'BP_UI_CharaCreateFunctionLibrary_C_RoundSliderValueToNearPitch::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");

// Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.AdjustSceneCaptureTransform
// 0x01A0 (0x01A0 - 0x0000)
struct BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform final
{
public:
	class ASBCreationCharacter*                   PlayerIndex;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                OffsetLocation;                                    // 0x0008(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               OffsetRotator;                                     // 0x0014(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ASceneCapture2D*                        SceneCapture;                                      // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFollowRotator;                                   // 0x0028(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C73[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                __WorldContext;                                    // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C74[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakRotator_Roll;                        // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C75[0x8];                                     // 0x0048(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetSocketTransform_ReturnValue;           // 0x0050(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0080(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x008C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0098(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00A4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll_1;                      // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch_1;                     // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw_1;                       // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_2;             // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x00C8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               K2Node_Select_Default;                             // 0x00D4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x00E0(0x0030)(IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetActorTransform_SweepHitResult;      // 0x0110(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorTransform_ReturnValue;         // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform) == 0x000010, "Wrong alignment on BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform");
static_assert(sizeof(BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform) == 0x0001A0, "Wrong size on BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform, PlayerIndex) == 0x000000, "Member 'BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform::PlayerIndex' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform, OffsetLocation) == 0x000008, "Member 'BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform::OffsetLocation' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform, OffsetRotator) == 0x000014, "Member 'BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform::OffsetRotator' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform, SceneCapture) == 0x000020, "Member 'BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform::SceneCapture' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform, IsFollowRotator) == 0x000028, "Member 'BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform::IsFollowRotator' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform, __WorldContext) == 0x000030, "Member 'BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform, Temp_bool_Variable) == 0x000038, "Member 'BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform, CallFunc_BreakRotator_Roll) == 0x00003C, "Member 'BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform, CallFunc_BreakRotator_Pitch) == 0x000040, "Member 'BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform, CallFunc_BreakRotator_Yaw) == 0x000044, "Member 'BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform, CallFunc_GetSocketTransform_ReturnValue) == 0x000050, "Member 'BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform::CallFunc_GetSocketTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform, CallFunc_BreakTransform_Location) == 0x000080, "Member 'BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform, CallFunc_BreakTransform_Rotation) == 0x00008C, "Member 'BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform, CallFunc_BreakTransform_Scale) == 0x000098, "Member 'BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform, CallFunc_Add_VectorVector_ReturnValue) == 0x0000A4, "Member 'BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform, CallFunc_BreakRotator_Roll_1) == 0x0000B0, "Member 'BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform::CallFunc_BreakRotator_Roll_1' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform, CallFunc_BreakRotator_Pitch_1) == 0x0000B4, "Member 'BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform::CallFunc_BreakRotator_Pitch_1' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform, CallFunc_BreakRotator_Yaw_1) == 0x0000B8, "Member 'BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform::CallFunc_BreakRotator_Yaw_1' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform, CallFunc_Add_FloatFloat_ReturnValue) == 0x0000BC, "Member 'BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x0000C0, "Member 'BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform, CallFunc_Add_FloatFloat_ReturnValue_2) == 0x0000C4, "Member 'BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform::CallFunc_Add_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform, CallFunc_MakeRotator_ReturnValue) == 0x0000C8, "Member 'BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform, K2Node_Select_Default) == 0x0000D4, "Member 'BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform, CallFunc_MakeTransform_ReturnValue) == 0x0000E0, "Member 'BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform, CallFunc_K2_SetActorTransform_SweepHitResult) == 0x000110, "Member 'BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform::CallFunc_K2_SetActorTransform_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform, CallFunc_K2_SetActorTransform_ReturnValue) == 0x000198, "Member 'BP_UI_CharaCreateFunctionLibrary_C_AdjustSceneCaptureTransform::CallFunc_K2_SetActorTransform_ReturnValue' has a wrong offset!");

// Function BP_UI_CharaCreateFunctionLibrary.BP_UI_CharaCreateFunctionLibrary_C.GetHairGradationRangeMinMax
// 0x0058 (0x0058 - 0x0000)
struct BP_UI_CharaCreateFunctionLibrary_C_GetHairGradationRangeMinMax final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OutMin;                                            // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OutMax;                                            // 0x000C(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C76[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindAestheShopCharaParamRestrictionMaster_IsExists; // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C77[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAestheShopCharaParamRestrictionMasterData CallFunc_BP_FindAestheShopCharaParamRestrictionMaster_ReturnValue; // 0x0028(0x0030)()
};
static_assert(alignof(BP_UI_CharaCreateFunctionLibrary_C_GetHairGradationRangeMinMax) == 0x000008, "Wrong alignment on BP_UI_CharaCreateFunctionLibrary_C_GetHairGradationRangeMinMax");
static_assert(sizeof(BP_UI_CharaCreateFunctionLibrary_C_GetHairGradationRangeMinMax) == 0x000058, "Wrong size on BP_UI_CharaCreateFunctionLibrary_C_GetHairGradationRangeMinMax");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetHairGradationRangeMinMax, __WorldContext) == 0x000000, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetHairGradationRangeMinMax::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetHairGradationRangeMinMax, OutMin) == 0x000008, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetHairGradationRangeMinMax::OutMin' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetHairGradationRangeMinMax, OutMax) == 0x00000C, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetHairGradationRangeMinMax::OutMax' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetHairGradationRangeMinMax, CallFunc_GetMasterDataManager_IsValid) == 0x000010, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetHairGradationRangeMinMax::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetHairGradationRangeMinMax, CallFunc_GetMasterDataManager_ReturnValue) == 0x000018, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetHairGradationRangeMinMax::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetHairGradationRangeMinMax, CallFunc_BP_FindAestheShopCharaParamRestrictionMaster_IsExists) == 0x000020, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetHairGradationRangeMinMax::CallFunc_BP_FindAestheShopCharaParamRestrictionMaster_IsExists' has a wrong offset!");
static_assert(offsetof(BP_UI_CharaCreateFunctionLibrary_C_GetHairGradationRangeMinMax, CallFunc_BP_FindAestheShopCharaParamRestrictionMaster_ReturnValue) == 0x000028, "Member 'BP_UI_CharaCreateFunctionLibrary_C_GetHairGradationRangeMinMax::CallFunc_BP_FindAestheShopCharaParamRestrictionMaster_ReturnValue' has a wrong offset!");

}

