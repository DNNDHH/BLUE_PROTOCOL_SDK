#pragma once

 

// Package: CurrencyWidget

#include "Basic.hpp"

#include "CurrencyType_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function CurrencyWidget.CurrencyWidget_C.ExecuteUbergraph_CurrencyWidget
// 0x0058 (0x0058 - 0x0000)
struct CurrencyWidget_C_ExecuteUbergraph_CurrencyWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B4B[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0008(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DFloat_ReturnValue;       // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CurrencyWidget_C_ExecuteUbergraph_CurrencyWidget) == 0x000004, "Wrong alignment on CurrencyWidget_C_ExecuteUbergraph_CurrencyWidget");
static_assert(sizeof(CurrencyWidget_C_ExecuteUbergraph_CurrencyWidget) == 0x000058, "Wrong size on CurrencyWidget_C_ExecuteUbergraph_CurrencyWidget");
static_assert(offsetof(CurrencyWidget_C_ExecuteUbergraph_CurrencyWidget, EntryPoint) == 0x000000, "Member 'CurrencyWidget_C_ExecuteUbergraph_CurrencyWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(CurrencyWidget_C_ExecuteUbergraph_CurrencyWidget, K2Node_Event_IsDesignTime) == 0x000004, "Member 'CurrencyWidget_C_ExecuteUbergraph_CurrencyWidget::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CurrencyWidget_C_ExecuteUbergraph_CurrencyWidget, K2Node_Event_MyGeometry) == 0x000008, "Member 'CurrencyWidget_C_ExecuteUbergraph_CurrencyWidget::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(CurrencyWidget_C_ExecuteUbergraph_CurrencyWidget, K2Node_Event_InDeltaTime) == 0x000040, "Member 'CurrencyWidget_C_ExecuteUbergraph_CurrencyWidget::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(CurrencyWidget_C_ExecuteUbergraph_CurrencyWidget, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000044, "Member 'CurrencyWidget_C_ExecuteUbergraph_CurrencyWidget::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CurrencyWidget_C_ExecuteUbergraph_CurrencyWidget, CallFunc_MakeVector2D_ReturnValue) == 0x000048, "Member 'CurrencyWidget_C_ExecuteUbergraph_CurrencyWidget::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(CurrencyWidget_C_ExecuteUbergraph_CurrencyWidget, CallFunc_Multiply_Vector2DFloat_ReturnValue) == 0x000050, "Member 'CurrencyWidget_C_ExecuteUbergraph_CurrencyWidget::CallFunc_Multiply_Vector2DFloat_ReturnValue' has a wrong offset!");

// Function CurrencyWidget.CurrencyWidget_C.Tick
// 0x003C (0x003C - 0x0000)
struct CurrencyWidget_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CurrencyWidget_C_Tick) == 0x000004, "Wrong alignment on CurrencyWidget_C_Tick");
static_assert(sizeof(CurrencyWidget_C_Tick) == 0x00003C, "Wrong size on CurrencyWidget_C_Tick");
static_assert(offsetof(CurrencyWidget_C_Tick, MyGeometry) == 0x000000, "Member 'CurrencyWidget_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(CurrencyWidget_C_Tick, InDeltaTime) == 0x000038, "Member 'CurrencyWidget_C_Tick::InDeltaTime' has a wrong offset!");

// Function CurrencyWidget.CurrencyWidget_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CurrencyWidget_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CurrencyWidget_C_PreConstruct) == 0x000001, "Wrong alignment on CurrencyWidget_C_PreConstruct");
static_assert(sizeof(CurrencyWidget_C_PreConstruct) == 0x000001, "Wrong size on CurrencyWidget_C_PreConstruct");
static_assert(offsetof(CurrencyWidget_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CurrencyWidget_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CurrencyWidget.CurrencyWidget_C.SetActive
// 0x0018 (0x0018 - 0x0000)
struct CurrencyWidget_C_SetActive final
{
public:
	bool                                          bInActive;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bInForce;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B4C[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector2D_X;                          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_1;                        // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_1;                        // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CurrencyWidget_C_SetActive) == 0x000004, "Wrong alignment on CurrencyWidget_C_SetActive");
static_assert(sizeof(CurrencyWidget_C_SetActive) == 0x000018, "Wrong size on CurrencyWidget_C_SetActive");
static_assert(offsetof(CurrencyWidget_C_SetActive, bInActive) == 0x000000, "Member 'CurrencyWidget_C_SetActive::bInActive' has a wrong offset!");
static_assert(offsetof(CurrencyWidget_C_SetActive, bInForce) == 0x000001, "Member 'CurrencyWidget_C_SetActive::bInForce' has a wrong offset!");
static_assert(offsetof(CurrencyWidget_C_SetActive, CallFunc_BreakVector2D_X) == 0x000004, "Member 'CurrencyWidget_C_SetActive::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(CurrencyWidget_C_SetActive, CallFunc_BreakVector2D_Y) == 0x000008, "Member 'CurrencyWidget_C_SetActive::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(CurrencyWidget_C_SetActive, CallFunc_BreakVector2D_X_1) == 0x00000C, "Member 'CurrencyWidget_C_SetActive::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(CurrencyWidget_C_SetActive, CallFunc_BreakVector2D_Y_1) == 0x000010, "Member 'CurrencyWidget_C_SetActive::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(CurrencyWidget_C_SetActive, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000014, "Member 'CurrencyWidget_C_SetActive::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(CurrencyWidget_C_SetActive, CallFunc_BooleanOR_ReturnValue) == 0x000015, "Member 'CurrencyWidget_C_SetActive::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function CurrencyWidget.CurrencyWidget_C.UpdateAmount
// 0x0058 (0x0058 - 0x0000)
struct CurrencyWidget_C_UpdateAmount final
{
public:
	int32                                         NewAmount;                                         // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B4D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    NetworkDataCache;                                  // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECurrencyType                                 Temp_byte_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B4E[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetMoney_ReturnValue;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B4F[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0028(0x0018)()
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B50[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CurrencyWidget_C_UpdateAmount) == 0x000008, "Wrong alignment on CurrencyWidget_C_UpdateAmount");
static_assert(sizeof(CurrencyWidget_C_UpdateAmount) == 0x000058, "Wrong size on CurrencyWidget_C_UpdateAmount");
static_assert(offsetof(CurrencyWidget_C_UpdateAmount, NewAmount) == 0x000000, "Member 'CurrencyWidget_C_UpdateAmount::NewAmount' has a wrong offset!");
static_assert(offsetof(CurrencyWidget_C_UpdateAmount, NetworkDataCache) == 0x000008, "Member 'CurrencyWidget_C_UpdateAmount::NetworkDataCache' has a wrong offset!");
static_assert(offsetof(CurrencyWidget_C_UpdateAmount, Temp_byte_Variable) == 0x000010, "Member 'CurrencyWidget_C_UpdateAmount::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CurrencyWidget_C_UpdateAmount, Temp_int_Variable) == 0x000014, "Member 'CurrencyWidget_C_UpdateAmount::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CurrencyWidget_C_UpdateAmount, Temp_int_Variable_1) == 0x000018, "Member 'CurrencyWidget_C_UpdateAmount::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(CurrencyWidget_C_UpdateAmount, CallFunc_GetMoney_ReturnValue) == 0x00001C, "Member 'CurrencyWidget_C_UpdateAmount::CallFunc_GetMoney_ReturnValue' has a wrong offset!");
static_assert(offsetof(CurrencyWidget_C_UpdateAmount, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'CurrencyWidget_C_UpdateAmount::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CurrencyWidget_C_UpdateAmount, CallFunc_Conv_IntToText_ReturnValue) == 0x000028, "Member 'CurrencyWidget_C_UpdateAmount::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CurrencyWidget_C_UpdateAmount, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000040, "Member 'CurrencyWidget_C_UpdateAmount::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CurrencyWidget_C_UpdateAmount, CallFunc_GetNetworkDataCache_IsValid) == 0x000041, "Member 'CurrencyWidget_C_UpdateAmount::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(CurrencyWidget_C_UpdateAmount, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000048, "Member 'CurrencyWidget_C_UpdateAmount::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(CurrencyWidget_C_UpdateAmount, K2Node_Select_Default) == 0x000050, "Member 'CurrencyWidget_C_UpdateAmount::K2Node_Select_Default' has a wrong offset!");

}

