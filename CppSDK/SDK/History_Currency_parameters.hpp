#pragma once

 

// Package: History_Currency

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function History_Currency.History_Currency_C.ExecuteUbergraph_History_Currency
// 0x0068 (0x0068 - 0x0000)
struct History_Currency_C_ExecuteUbergraph_History_Currency final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_558F[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCountryConfigMasterData             CallFunc_BP_GetCountryConfigMasterById_ReturnValue; // 0x0018(0x0048)()
	bool                                          CallFunc_Conv_IntToBool_ReturnValue;               // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(History_Currency_C_ExecuteUbergraph_History_Currency) == 0x000008, "Wrong alignment on History_Currency_C_ExecuteUbergraph_History_Currency");
static_assert(sizeof(History_Currency_C_ExecuteUbergraph_History_Currency) == 0x000068, "Wrong size on History_Currency_C_ExecuteUbergraph_History_Currency");
static_assert(offsetof(History_Currency_C_ExecuteUbergraph_History_Currency, EntryPoint) == 0x000000, "Member 'History_Currency_C_ExecuteUbergraph_History_Currency::EntryPoint' has a wrong offset!");
static_assert(offsetof(History_Currency_C_ExecuteUbergraph_History_Currency, CallFunc_MakeLiteralByte_ReturnValue) == 0x000004, "Member 'History_Currency_C_ExecuteUbergraph_History_Currency::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(History_Currency_C_ExecuteUbergraph_History_Currency, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000005, "Member 'History_Currency_C_ExecuteUbergraph_History_Currency::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(History_Currency_C_ExecuteUbergraph_History_Currency, Temp_bool_Variable) == 0x000006, "Member 'History_Currency_C_ExecuteUbergraph_History_Currency::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(History_Currency_C_ExecuteUbergraph_History_Currency, K2Node_Select_Default) == 0x000007, "Member 'History_Currency_C_ExecuteUbergraph_History_Currency::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(History_Currency_C_ExecuteUbergraph_History_Currency, CallFunc_GetMasterDataManager_IsValid) == 0x000008, "Member 'History_Currency_C_ExecuteUbergraph_History_Currency::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(History_Currency_C_ExecuteUbergraph_History_Currency, CallFunc_GetMasterDataManager_ReturnValue) == 0x000010, "Member 'History_Currency_C_ExecuteUbergraph_History_Currency::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(History_Currency_C_ExecuteUbergraph_History_Currency, CallFunc_BP_GetCountryConfigMasterById_ReturnValue) == 0x000018, "Member 'History_Currency_C_ExecuteUbergraph_History_Currency::CallFunc_BP_GetCountryConfigMasterById_ReturnValue' has a wrong offset!");
static_assert(offsetof(History_Currency_C_ExecuteUbergraph_History_Currency, CallFunc_Conv_IntToBool_ReturnValue) == 0x000060, "Member 'History_Currency_C_ExecuteUbergraph_History_Currency::CallFunc_Conv_IntToBool_ReturnValue' has a wrong offset!");

// Function History_Currency.History_Currency_C.SwitchShopType
// 0x0020 (0x0020 - 0x0000)
struct History_Currency_C_SwitchShopType final
{
public:
	ESBHistoryType                                Param_HistoryType;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBHistoryType                                Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBHistoryType                                Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5590[0x1];                                     // 0x0003(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetBPPoint_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRoseOrbFree_ReturnValue;               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_1;                           // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRoseOrbPaid_ReturnValue;               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(History_Currency_C_SwitchShopType) == 0x000004, "Wrong alignment on History_Currency_C_SwitchShopType");
static_assert(sizeof(History_Currency_C_SwitchShopType) == 0x000020, "Wrong size on History_Currency_C_SwitchShopType");
static_assert(offsetof(History_Currency_C_SwitchShopType, Param_HistoryType) == 0x000000, "Member 'History_Currency_C_SwitchShopType::Param_HistoryType' has a wrong offset!");
static_assert(offsetof(History_Currency_C_SwitchShopType, Temp_byte_Variable) == 0x000001, "Member 'History_Currency_C_SwitchShopType::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(History_Currency_C_SwitchShopType, Temp_byte_Variable_1) == 0x000002, "Member 'History_Currency_C_SwitchShopType::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(History_Currency_C_SwitchShopType, Temp_int_Variable) == 0x000004, "Member 'History_Currency_C_SwitchShopType::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(History_Currency_C_SwitchShopType, Temp_int_Variable_1) == 0x000008, "Member 'History_Currency_C_SwitchShopType::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(History_Currency_C_SwitchShopType, CallFunc_GetBPPoint_ReturnValue) == 0x00000C, "Member 'History_Currency_C_SwitchShopType::CallFunc_GetBPPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(History_Currency_C_SwitchShopType, CallFunc_GetRoseOrbFree_ReturnValue) == 0x000010, "Member 'History_Currency_C_SwitchShopType::CallFunc_GetRoseOrbFree_ReturnValue' has a wrong offset!");
static_assert(offsetof(History_Currency_C_SwitchShopType, K2Node_Select_Default) == 0x000014, "Member 'History_Currency_C_SwitchShopType::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(History_Currency_C_SwitchShopType, K2Node_Select_Default_1) == 0x000018, "Member 'History_Currency_C_SwitchShopType::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(History_Currency_C_SwitchShopType, CallFunc_GetRoseOrbPaid_ReturnValue) == 0x00001C, "Member 'History_Currency_C_SwitchShopType::CallFunc_GetRoseOrbPaid_ReturnValue' has a wrong offset!");

// Function History_Currency.History_Currency_C.SetAmount
// 0x00E8 (0x00E8 - 0x0000)
struct History_Currency_C_SetAmount final
{
public:
	int32                                         Paid;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Free;                                              // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_free;                                            // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_Paid;                                            // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5591[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0018(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0030(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5592[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_2;             // 0x0070(0x0018)()
	int32                                         CallFunc_GetBPPointSafeMax_ReturnValue;            // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5593[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_3;             // 0x0090(0x0018)()
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5594[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00D0(0x0018)()
};
static_assert(alignof(History_Currency_C_SetAmount) == 0x000008, "Wrong alignment on History_Currency_C_SetAmount");
static_assert(sizeof(History_Currency_C_SetAmount) == 0x0000E8, "Wrong size on History_Currency_C_SetAmount");
static_assert(offsetof(History_Currency_C_SetAmount, Paid) == 0x000000, "Member 'History_Currency_C_SetAmount::Paid' has a wrong offset!");
static_assert(offsetof(History_Currency_C_SetAmount, Free) == 0x000004, "Member 'History_Currency_C_SetAmount::Free' has a wrong offset!");
static_assert(offsetof(History_Currency_C_SetAmount, L_free) == 0x000008, "Member 'History_Currency_C_SetAmount::L_free' has a wrong offset!");
static_assert(offsetof(History_Currency_C_SetAmount, L_Paid) == 0x00000C, "Member 'History_Currency_C_SetAmount::L_Paid' has a wrong offset!");
static_assert(offsetof(History_Currency_C_SetAmount, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'History_Currency_C_SetAmount::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(History_Currency_C_SetAmount, CallFunc_Conv_IntToText_ReturnValue) == 0x000018, "Member 'History_Currency_C_SetAmount::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(History_Currency_C_SetAmount, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000030, "Member 'History_Currency_C_SetAmount::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(History_Currency_C_SetAmount, CallFunc_Conv_TextToString_ReturnValue) == 0x000048, "Member 'History_Currency_C_SetAmount::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(History_Currency_C_SetAmount, CallFunc_SelectInt_ReturnValue) == 0x000058, "Member 'History_Currency_C_SetAmount::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(History_Currency_C_SetAmount, CallFunc_Concat_StrStr_ReturnValue) == 0x000060, "Member 'History_Currency_C_SetAmount::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(History_Currency_C_SetAmount, CallFunc_Conv_IntToText_ReturnValue_2) == 0x000070, "Member 'History_Currency_C_SetAmount::CallFunc_Conv_IntToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(History_Currency_C_SetAmount, CallFunc_GetBPPointSafeMax_ReturnValue) == 0x000088, "Member 'History_Currency_C_SetAmount::CallFunc_GetBPPointSafeMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(History_Currency_C_SetAmount, CallFunc_Conv_IntToText_ReturnValue_3) == 0x000090, "Member 'History_Currency_C_SetAmount::CallFunc_Conv_IntToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(History_Currency_C_SetAmount, K2Node_SwitchEnum_CmpSuccess) == 0x0000A8, "Member 'History_Currency_C_SetAmount::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(History_Currency_C_SetAmount, CallFunc_Conv_TextToString_ReturnValue_1) == 0x0000B0, "Member 'History_Currency_C_SetAmount::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(History_Currency_C_SetAmount, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000C0, "Member 'History_Currency_C_SetAmount::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(History_Currency_C_SetAmount, CallFunc_Conv_StringToText_ReturnValue) == 0x0000D0, "Member 'History_Currency_C_SetAmount::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

