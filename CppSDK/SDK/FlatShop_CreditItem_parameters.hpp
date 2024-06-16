#pragma once

 

// Package: FlatShop_CreditItem

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function FlatShop_CreditItem.FlatShop_CreditItem_C.ExecuteUbergraph_FlatShop_CreditItem
// 0x0068 (0x0068 - 0x0000)
struct FlatShop_CreditItem_C_ExecuteUbergraph_FlatShop_CreditItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C73[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor)
	class UObject*                                Temp_object_Variable;                              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C74[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_TokenId;                        // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              CallFunc_GetTokenIconTexture_Texture;              // 0x0038(0x0028)(HasGetValueTypeHash)
	bool                                          CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FlatShop_CreditItem_C_ExecuteUbergraph_FlatShop_CreditItem) == 0x000008, "Wrong alignment on FlatShop_CreditItem_C_ExecuteUbergraph_FlatShop_CreditItem");
static_assert(sizeof(FlatShop_CreditItem_C_ExecuteUbergraph_FlatShop_CreditItem) == 0x000068, "Wrong size on FlatShop_CreditItem_C_ExecuteUbergraph_FlatShop_CreditItem");
static_assert(offsetof(FlatShop_CreditItem_C_ExecuteUbergraph_FlatShop_CreditItem, EntryPoint) == 0x000000, "Member 'FlatShop_CreditItem_C_ExecuteUbergraph_FlatShop_CreditItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_ExecuteUbergraph_FlatShop_CreditItem, K2Node_CustomEvent_Loaded) == 0x000008, "Member 'FlatShop_CreditItem_C_ExecuteUbergraph_FlatShop_CreditItem::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_ExecuteUbergraph_FlatShop_CreditItem, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'FlatShop_CreditItem_C_ExecuteUbergraph_FlatShop_CreditItem::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_ExecuteUbergraph_FlatShop_CreditItem, Temp_object_Variable) == 0x000020, "Member 'FlatShop_CreditItem_C_ExecuteUbergraph_FlatShop_CreditItem::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_ExecuteUbergraph_FlatShop_CreditItem, K2Node_DynamicCast_AsTexture_2D) == 0x000028, "Member 'FlatShop_CreditItem_C_ExecuteUbergraph_FlatShop_CreditItem::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_ExecuteUbergraph_FlatShop_CreditItem, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'FlatShop_CreditItem_C_ExecuteUbergraph_FlatShop_CreditItem::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_ExecuteUbergraph_FlatShop_CreditItem, K2Node_Event_IsDesignTime) == 0x000031, "Member 'FlatShop_CreditItem_C_ExecuteUbergraph_FlatShop_CreditItem::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_ExecuteUbergraph_FlatShop_CreditItem, K2Node_CustomEvent_TokenId) == 0x000034, "Member 'FlatShop_CreditItem_C_ExecuteUbergraph_FlatShop_CreditItem::K2Node_CustomEvent_TokenId' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_ExecuteUbergraph_FlatShop_CreditItem, CallFunc_GetTokenIconTexture_Texture) == 0x000038, "Member 'FlatShop_CreditItem_C_ExecuteUbergraph_FlatShop_CreditItem::CallFunc_GetTokenIconTexture_Texture' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_ExecuteUbergraph_FlatShop_CreditItem, CallFunc_IsValidSoftObjectReference_ReturnValue) == 0x000060, "Member 'FlatShop_CreditItem_C_ExecuteUbergraph_FlatShop_CreditItem::CallFunc_IsValidSoftObjectReference_ReturnValue' has a wrong offset!");

// Function FlatShop_CreditItem.FlatShop_CreditItem_C.SetIconTexture
// 0x0004 (0x0004 - 0x0000)
struct FlatShop_CreditItem_C_SetIconTexture final
{
public:
	int32                                         TokenID;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FlatShop_CreditItem_C_SetIconTexture) == 0x000004, "Wrong alignment on FlatShop_CreditItem_C_SetIconTexture");
static_assert(sizeof(FlatShop_CreditItem_C_SetIconTexture) == 0x000004, "Wrong size on FlatShop_CreditItem_C_SetIconTexture");
static_assert(offsetof(FlatShop_CreditItem_C_SetIconTexture, TokenID) == 0x000000, "Member 'FlatShop_CreditItem_C_SetIconTexture::TokenID' has a wrong offset!");

// Function FlatShop_CreditItem.FlatShop_CreditItem_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct FlatShop_CreditItem_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FlatShop_CreditItem_C_PreConstruct) == 0x000001, "Wrong alignment on FlatShop_CreditItem_C_PreConstruct");
static_assert(sizeof(FlatShop_CreditItem_C_PreConstruct) == 0x000001, "Wrong size on FlatShop_CreditItem_C_PreConstruct");
static_assert(offsetof(FlatShop_CreditItem_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'FlatShop_CreditItem_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function FlatShop_CreditItem.FlatShop_CreditItem_C.OnLoaded_52660D15417B61953E2BF591D987F44E
// 0x0008 (0x0008 - 0x0000)
struct FlatShop_CreditItem_C_OnLoaded_52660D15417B61953E2BF591D987F44E final
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FlatShop_CreditItem_C_OnLoaded_52660D15417B61953E2BF591D987F44E) == 0x000008, "Wrong alignment on FlatShop_CreditItem_C_OnLoaded_52660D15417B61953E2BF591D987F44E");
static_assert(sizeof(FlatShop_CreditItem_C_OnLoaded_52660D15417B61953E2BF591D987F44E) == 0x000008, "Wrong size on FlatShop_CreditItem_C_OnLoaded_52660D15417B61953E2BF591D987F44E");
static_assert(offsetof(FlatShop_CreditItem_C_OnLoaded_52660D15417B61953E2BF591D987F44E, Loaded) == 0x000000, "Member 'FlatShop_CreditItem_C_OnLoaded_52660D15417B61953E2BF591D987F44E::Loaded' has a wrong offset!");

// Function FlatShop_CreditItem.FlatShop_CreditItem_C.Set Credit Type
// 0x0070 (0x0070 - 0x0000)
struct FlatShop_CreditItem_C_Set_Credit_Type final
{
public:
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_SelectInt_ReturnValue_1;                  // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_SelectInt_ReturnValue_2;                  // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_SelectInt_ReturnValue_3;                  // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_SelectInt_ReturnValue_4;                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C75[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBCountryConfigMasterData             CallFunc_BP_GetCountryConfigMasterById_ReturnValue; // 0x0020(0x0048)()
	bool                                          Temp_bool_Variable;                                // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Conv_IntToBool_ReturnValue;               // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x006B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FlatShop_CreditItem_C_Set_Credit_Type) == 0x000008, "Wrong alignment on FlatShop_CreditItem_C_Set_Credit_Type");
static_assert(sizeof(FlatShop_CreditItem_C_Set_Credit_Type) == 0x000070, "Wrong size on FlatShop_CreditItem_C_Set_Credit_Type");
static_assert(offsetof(FlatShop_CreditItem_C_Set_Credit_Type, CallFunc_SelectInt_ReturnValue) == 0x000000, "Member 'FlatShop_CreditItem_C_Set_Credit_Type::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_Set_Credit_Type, CallFunc_SelectInt_ReturnValue_1) == 0x000004, "Member 'FlatShop_CreditItem_C_Set_Credit_Type::CallFunc_SelectInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_Set_Credit_Type, CallFunc_SelectInt_ReturnValue_2) == 0x000008, "Member 'FlatShop_CreditItem_C_Set_Credit_Type::CallFunc_SelectInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_Set_Credit_Type, CallFunc_SelectInt_ReturnValue_3) == 0x00000C, "Member 'FlatShop_CreditItem_C_Set_Credit_Type::CallFunc_SelectInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_Set_Credit_Type, CallFunc_SelectInt_ReturnValue_4) == 0x000010, "Member 'FlatShop_CreditItem_C_Set_Credit_Type::CallFunc_SelectInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_Set_Credit_Type, CallFunc_GetMasterDataManager_IsValid) == 0x000014, "Member 'FlatShop_CreditItem_C_Set_Credit_Type::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_Set_Credit_Type, CallFunc_GetMasterDataManager_ReturnValue) == 0x000018, "Member 'FlatShop_CreditItem_C_Set_Credit_Type::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_Set_Credit_Type, CallFunc_BP_GetCountryConfigMasterById_ReturnValue) == 0x000020, "Member 'FlatShop_CreditItem_C_Set_Credit_Type::CallFunc_BP_GetCountryConfigMasterById_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_Set_Credit_Type, Temp_bool_Variable) == 0x000068, "Member 'FlatShop_CreditItem_C_Set_Credit_Type::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_Set_Credit_Type, CallFunc_Conv_IntToBool_ReturnValue) == 0x000069, "Member 'FlatShop_CreditItem_C_Set_Credit_Type::CallFunc_Conv_IntToBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_Set_Credit_Type, CallFunc_MakeLiteralByte_ReturnValue) == 0x00006A, "Member 'FlatShop_CreditItem_C_Set_Credit_Type::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_Set_Credit_Type, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00006B, "Member 'FlatShop_CreditItem_C_Set_Credit_Type::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_Set_Credit_Type, K2Node_Select_Default) == 0x00006C, "Member 'FlatShop_CreditItem_C_Set_Credit_Type::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_Set_Credit_Type, K2Node_SwitchEnum_CmpSuccess) == 0x00006D, "Member 'FlatShop_CreditItem_C_Set_Credit_Type::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function FlatShop_CreditItem.FlatShop_CreditItem_C.SetCreditNum
// 0x000C (0x000C - 0x0000)
struct FlatShop_CreditItem_C_SetCreditNum final
{
public:
	int32                                         Num;                                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FlatShop_CreditItem_C_SetCreditNum) == 0x000004, "Wrong alignment on FlatShop_CreditItem_C_SetCreditNum");
static_assert(sizeof(FlatShop_CreditItem_C_SetCreditNum) == 0x00000C, "Wrong size on FlatShop_CreditItem_C_SetCreditNum");
static_assert(offsetof(FlatShop_CreditItem_C_SetCreditNum, Num) == 0x000000, "Member 'FlatShop_CreditItem_C_SetCreditNum::Num' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_SetCreditNum, CallFunc_SelectFloat_ReturnValue) == 0x000004, "Member 'FlatShop_CreditItem_C_SetCreditNum::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_SetCreditNum, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000008, "Member 'FlatShop_CreditItem_C_SetCreditNum::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function FlatShop_CreditItem.FlatShop_CreditItem_C.ChangeToTicketType
// 0x0018 (0x0018 - 0x0000)
struct FlatShop_CreditItem_C_ChangeToTicketType final
{
public:
	int32                                         TokenID;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsTicketUpdate;                                    // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C76[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetTokenAmount_ReturnValue;               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FlatShop_CreditItem_C_ChangeToTicketType) == 0x000004, "Wrong alignment on FlatShop_CreditItem_C_ChangeToTicketType");
static_assert(sizeof(FlatShop_CreditItem_C_ChangeToTicketType) == 0x000018, "Wrong size on FlatShop_CreditItem_C_ChangeToTicketType");
static_assert(offsetof(FlatShop_CreditItem_C_ChangeToTicketType, TokenID) == 0x000000, "Member 'FlatShop_CreditItem_C_ChangeToTicketType::TokenID' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_ChangeToTicketType, IsTicketUpdate) == 0x000004, "Member 'FlatShop_CreditItem_C_ChangeToTicketType::IsTicketUpdate' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_ChangeToTicketType, Temp_bool_Variable) == 0x000005, "Member 'FlatShop_CreditItem_C_ChangeToTicketType::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_ChangeToTicketType, CallFunc_GetTokenAmount_ReturnValue) == 0x000008, "Member 'FlatShop_CreditItem_C_ChangeToTicketType::CallFunc_GetTokenAmount_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_ChangeToTicketType, Temp_int_Variable) == 0x00000C, "Member 'FlatShop_CreditItem_C_ChangeToTicketType::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_ChangeToTicketType, Temp_int_Variable_1) == 0x000010, "Member 'FlatShop_CreditItem_C_ChangeToTicketType::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_ChangeToTicketType, K2Node_Select_Default) == 0x000014, "Member 'FlatShop_CreditItem_C_ChangeToTicketType::K2Node_Select_Default' has a wrong offset!");

// Function FlatShop_CreditItem.FlatShop_CreditItem_C.SetGashaTicketAmountColor
// 0x0080 (0x0080 - 0x0000)
struct FlatShop_CreditItem_C_SetGashaTicketAmountColor final
{
public:
	bool                                          IsLack;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C77[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            CallFunc_GetImpossibleColor_ReturnValue;           // 0x0030(0x0028)()
	struct FSlateColor                            K2Node_Select_Default;                             // 0x0058(0x0028)()
};
static_assert(alignof(FlatShop_CreditItem_C_SetGashaTicketAmountColor) == 0x000008, "Wrong alignment on FlatShop_CreditItem_C_SetGashaTicketAmountColor");
static_assert(sizeof(FlatShop_CreditItem_C_SetGashaTicketAmountColor) == 0x000080, "Wrong size on FlatShop_CreditItem_C_SetGashaTicketAmountColor");
static_assert(offsetof(FlatShop_CreditItem_C_SetGashaTicketAmountColor, IsLack) == 0x000000, "Member 'FlatShop_CreditItem_C_SetGashaTicketAmountColor::IsLack' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_SetGashaTicketAmountColor, Temp_bool_Variable) == 0x000001, "Member 'FlatShop_CreditItem_C_SetGashaTicketAmountColor::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_SetGashaTicketAmountColor, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'FlatShop_CreditItem_C_SetGashaTicketAmountColor::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_SetGashaTicketAmountColor, CallFunc_GetImpossibleColor_ReturnValue) == 0x000030, "Member 'FlatShop_CreditItem_C_SetGashaTicketAmountColor::CallFunc_GetImpossibleColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_SetGashaTicketAmountColor, K2Node_Select_Default) == 0x000058, "Member 'FlatShop_CreditItem_C_SetGashaTicketAmountColor::K2Node_Select_Default' has a wrong offset!");

// Function FlatShop_CreditItem.FlatShop_CreditItem_C.SetAfterCreditNum
// 0x00C0 (0x00C0 - 0x0000)
struct FlatShop_CreditItem_C_SetAfterCreditNum final
{
public:
	int32                                         Num;                                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C78[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C79[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            CallFunc_GetImpossibleColor_ReturnValue;           // 0x0038(0x0028)()
	bool                                          Temp_bool_Variable;                                // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C7A[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0068(0x0028)()
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C7B[0x3];                                     // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_Select_Default;                             // 0x0098(0x0028)()
};
static_assert(alignof(FlatShop_CreditItem_C_SetAfterCreditNum) == 0x000008, "Wrong alignment on FlatShop_CreditItem_C_SetAfterCreditNum");
static_assert(sizeof(FlatShop_CreditItem_C_SetAfterCreditNum) == 0x0000C0, "Wrong size on FlatShop_CreditItem_C_SetAfterCreditNum");
static_assert(offsetof(FlatShop_CreditItem_C_SetAfterCreditNum, Num) == 0x000000, "Member 'FlatShop_CreditItem_C_SetAfterCreditNum::Num' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_SetAfterCreditNum, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'FlatShop_CreditItem_C_SetAfterCreditNum::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_SetAfterCreditNum, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000030, "Member 'FlatShop_CreditItem_C_SetAfterCreditNum::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_SetAfterCreditNum, CallFunc_GetImpossibleColor_ReturnValue) == 0x000038, "Member 'FlatShop_CreditItem_C_SetAfterCreditNum::CallFunc_GetImpossibleColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_SetAfterCreditNum, Temp_bool_Variable) == 0x000060, "Member 'FlatShop_CreditItem_C_SetAfterCreditNum::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_SetAfterCreditNum, K2Node_MakeStruct_SlateColor_1) == 0x000068, "Member 'FlatShop_CreditItem_C_SetAfterCreditNum::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_SetAfterCreditNum, CallFunc_Subtract_IntInt_ReturnValue) == 0x000090, "Member 'FlatShop_CreditItem_C_SetAfterCreditNum::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_SetAfterCreditNum, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000094, "Member 'FlatShop_CreditItem_C_SetAfterCreditNum::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_SetAfterCreditNum, K2Node_Select_Default) == 0x000098, "Member 'FlatShop_CreditItem_C_SetAfterCreditNum::K2Node_Select_Default' has a wrong offset!");

// Function FlatShop_CreditItem.FlatShop_CreditItem_C.SetVisibilityExpired
// 0x000A (0x000A - 0x0000)
struct FlatShop_CreditItem_C_SetVisibilityExpired final
{
public:
	bool                                          InVisibility;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FlatShop_CreditItem_C_SetVisibilityExpired) == 0x000001, "Wrong alignment on FlatShop_CreditItem_C_SetVisibilityExpired");
static_assert(sizeof(FlatShop_CreditItem_C_SetVisibilityExpired) == 0x00000A, "Wrong size on FlatShop_CreditItem_C_SetVisibilityExpired");
static_assert(offsetof(FlatShop_CreditItem_C_SetVisibilityExpired, InVisibility) == 0x000000, "Member 'FlatShop_CreditItem_C_SetVisibilityExpired::InVisibility' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_SetVisibilityExpired, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'FlatShop_CreditItem_C_SetVisibilityExpired::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_SetVisibilityExpired, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'FlatShop_CreditItem_C_SetVisibilityExpired::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_SetVisibilityExpired, Temp_bool_Variable) == 0x000003, "Member 'FlatShop_CreditItem_C_SetVisibilityExpired::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_SetVisibilityExpired, Temp_bool_Variable_1) == 0x000004, "Member 'FlatShop_CreditItem_C_SetVisibilityExpired::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_SetVisibilityExpired, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x000005, "Member 'FlatShop_CreditItem_C_SetVisibilityExpired::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_SetVisibilityExpired, K2Node_Select_Default) == 0x000006, "Member 'FlatShop_CreditItem_C_SetVisibilityExpired::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_SetVisibilityExpired, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000007, "Member 'FlatShop_CreditItem_C_SetVisibilityExpired::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_SetVisibilityExpired, K2Node_Select_Default_1) == 0x000008, "Member 'FlatShop_CreditItem_C_SetVisibilityExpired::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_SetVisibilityExpired, K2Node_SwitchEnum_CmpSuccess) == 0x000009, "Member 'FlatShop_CreditItem_C_SetVisibilityExpired::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function FlatShop_CreditItem.FlatShop_CreditItem_C.SetCreditLack
// 0x00B0 (0x00B0 - 0x0000)
struct FlatShop_CreditItem_C_SetCreditLack final
{
public:
	bool                                          IsLack;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C7C[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            CallFunc_GetImpossibleColor_ReturnValue;           // 0x0008(0x0028)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C7D[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0038(0x0028)()
	struct FSlateColor                            CallFunc_GetImpossibleColor_ReturnValue_1;         // 0x0060(0x0028)()
	struct FSlateColor                            K2Node_Select_Default;                             // 0x0088(0x0028)()
};
static_assert(alignof(FlatShop_CreditItem_C_SetCreditLack) == 0x000008, "Wrong alignment on FlatShop_CreditItem_C_SetCreditLack");
static_assert(sizeof(FlatShop_CreditItem_C_SetCreditLack) == 0x0000B0, "Wrong size on FlatShop_CreditItem_C_SetCreditLack");
static_assert(offsetof(FlatShop_CreditItem_C_SetCreditLack, IsLack) == 0x000000, "Member 'FlatShop_CreditItem_C_SetCreditLack::IsLack' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_SetCreditLack, Temp_bool_Variable) == 0x000001, "Member 'FlatShop_CreditItem_C_SetCreditLack::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_SetCreditLack, CallFunc_GetImpossibleColor_ReturnValue) == 0x000008, "Member 'FlatShop_CreditItem_C_SetCreditLack::CallFunc_GetImpossibleColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_SetCreditLack, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000030, "Member 'FlatShop_CreditItem_C_SetCreditLack::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_SetCreditLack, K2Node_MakeStruct_SlateColor) == 0x000038, "Member 'FlatShop_CreditItem_C_SetCreditLack::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_SetCreditLack, CallFunc_GetImpossibleColor_ReturnValue_1) == 0x000060, "Member 'FlatShop_CreditItem_C_SetCreditLack::CallFunc_GetImpossibleColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_SetCreditLack, K2Node_Select_Default) == 0x000088, "Member 'FlatShop_CreditItem_C_SetCreditLack::K2Node_Select_Default' has a wrong offset!");

// Function FlatShop_CreditItem.FlatShop_CreditItem_C.Get_Caution_ToolTipWidget_0
// 0x0040 (0x0040 - 0x0000)
struct FlatShop_CreditItem_C_Get_Caution_ToolTipWidget_0 final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	class UCommonIconToolTipContent_MultiLine_C*  CallFunc_Create_ReturnValue;                       // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FlatShop_CreditItem_C_Get_Caution_ToolTipWidget_0) == 0x000008, "Wrong alignment on FlatShop_CreditItem_C_Get_Caution_ToolTipWidget_0");
static_assert(sizeof(FlatShop_CreditItem_C_Get_Caution_ToolTipWidget_0) == 0x000040, "Wrong size on FlatShop_CreditItem_C_Get_Caution_ToolTipWidget_0");
static_assert(offsetof(FlatShop_CreditItem_C_Get_Caution_ToolTipWidget_0, ReturnValue) == 0x000000, "Member 'FlatShop_CreditItem_C_Get_Caution_ToolTipWidget_0::ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_Get_Caution_ToolTipWidget_0, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000008, "Member 'FlatShop_CreditItem_C_Get_Caution_ToolTipWidget_0::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_Get_Caution_ToolTipWidget_0, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'FlatShop_CreditItem_C_Get_Caution_ToolTipWidget_0::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_Get_Caution_ToolTipWidget_0, CallFunc_Create_ReturnValue) == 0x000030, "Member 'FlatShop_CreditItem_C_Get_Caution_ToolTipWidget_0::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(FlatShop_CreditItem_C_Get_Caution_ToolTipWidget_0, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'FlatShop_CreditItem_C_Get_Caution_ToolTipWidget_0::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

