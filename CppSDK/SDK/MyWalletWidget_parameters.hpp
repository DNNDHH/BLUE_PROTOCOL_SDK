#pragma once

 

// Package: MyWalletWidget

#include "Basic.hpp"

#include "CurrencyType_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function MyWalletWidget.MyWalletWidget_C.ExecuteUbergraph_MyWalletWidget
// 0x0030 (0x0030 - 0x0000)
struct MyWalletWidget_C_ExecuteUbergraph_MyWalletWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44FE[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UCurrencyWidget_C*>              K2Node_MakeArray_Array;                            // 0x0008(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44FF[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UCurrencyWidget_C*>              K2Node_MakeArray_Array_1;                          // 0x0020(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(MyWalletWidget_C_ExecuteUbergraph_MyWalletWidget) == 0x000008, "Wrong alignment on MyWalletWidget_C_ExecuteUbergraph_MyWalletWidget");
static_assert(sizeof(MyWalletWidget_C_ExecuteUbergraph_MyWalletWidget) == 0x000030, "Wrong size on MyWalletWidget_C_ExecuteUbergraph_MyWalletWidget");
static_assert(offsetof(MyWalletWidget_C_ExecuteUbergraph_MyWalletWidget, EntryPoint) == 0x000000, "Member 'MyWalletWidget_C_ExecuteUbergraph_MyWalletWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(MyWalletWidget_C_ExecuteUbergraph_MyWalletWidget, K2Node_MakeArray_Array) == 0x000008, "Member 'MyWalletWidget_C_ExecuteUbergraph_MyWalletWidget::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(MyWalletWidget_C_ExecuteUbergraph_MyWalletWidget, K2Node_Event_IsDesignTime) == 0x000018, "Member 'MyWalletWidget_C_ExecuteUbergraph_MyWalletWidget::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(MyWalletWidget_C_ExecuteUbergraph_MyWalletWidget, K2Node_MakeArray_Array_1) == 0x000020, "Member 'MyWalletWidget_C_ExecuteUbergraph_MyWalletWidget::K2Node_MakeArray_Array_1' has a wrong offset!");

// Function MyWalletWidget.MyWalletWidget_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct MyWalletWidget_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyWalletWidget_C_PreConstruct) == 0x000001, "Wrong alignment on MyWalletWidget_C_PreConstruct");
static_assert(sizeof(MyWalletWidget_C_PreConstruct) == 0x000001, "Wrong size on MyWalletWidget_C_PreConstruct");
static_assert(offsetof(MyWalletWidget_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'MyWalletWidget_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function MyWalletWidget.MyWalletWidget_C.PreConstruct_Internal
// 0x0058 (0x0058 - 0x0000)
struct MyWalletWidget_C_PreConstruct_Internal final
{
public:
	TArray<class UCurrencyWidget_C*>              Array;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UCurrencyWidget_C*>              LocalCurrencyWidgets;                              // 0x0010(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurrencyWidget_C*                      CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4500[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0034(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_Get_Item_1;                         // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4501[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4502[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyWalletWidget_C_PreConstruct_Internal) == 0x000008, "Wrong alignment on MyWalletWidget_C_PreConstruct_Internal");
static_assert(sizeof(MyWalletWidget_C_PreConstruct_Internal) == 0x000058, "Wrong size on MyWalletWidget_C_PreConstruct_Internal");
static_assert(offsetof(MyWalletWidget_C_PreConstruct_Internal, Array) == 0x000000, "Member 'MyWalletWidget_C_PreConstruct_Internal::Array' has a wrong offset!");
static_assert(offsetof(MyWalletWidget_C_PreConstruct_Internal, LocalCurrencyWidgets) == 0x000010, "Member 'MyWalletWidget_C_PreConstruct_Internal::LocalCurrencyWidgets' has a wrong offset!");
static_assert(offsetof(MyWalletWidget_C_PreConstruct_Internal, Temp_int_Array_Index_Variable) == 0x000020, "Member 'MyWalletWidget_C_PreConstruct_Internal::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MyWalletWidget_C_PreConstruct_Internal, CallFunc_Array_Length_ReturnValue) == 0x000024, "Member 'MyWalletWidget_C_PreConstruct_Internal::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyWalletWidget_C_PreConstruct_Internal, CallFunc_Array_Get_Item) == 0x000028, "Member 'MyWalletWidget_C_PreConstruct_Internal::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MyWalletWidget_C_PreConstruct_Internal, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'MyWalletWidget_C_PreConstruct_Internal::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyWalletWidget_C_PreConstruct_Internal, K2Node_MakeStruct_Margin) == 0x000034, "Member 'MyWalletWidget_C_PreConstruct_Internal::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(MyWalletWidget_C_PreConstruct_Internal, CallFunc_Array_Get_Item_1) == 0x000044, "Member 'MyWalletWidget_C_PreConstruct_Internal::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(MyWalletWidget_C_PreConstruct_Internal, Temp_int_Loop_Counter_Variable) == 0x000048, "Member 'MyWalletWidget_C_PreConstruct_Internal::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MyWalletWidget_C_PreConstruct_Internal, CallFunc_Less_IntInt_ReturnValue) == 0x00004C, "Member 'MyWalletWidget_C_PreConstruct_Internal::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyWalletWidget_C_PreConstruct_Internal, CallFunc_Add_IntInt_ReturnValue) == 0x000050, "Member 'MyWalletWidget_C_PreConstruct_Internal::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function MyWalletWidget.MyWalletWidget_C.SetActive
// 0x0010 (0x0010 - 0x0000)
struct MyWalletWidget_C_SetActive final
{
public:
	ECurrencyType                                 InCurrencyType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bInActive;                                         // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4503[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurrencyWidget_C*                      CallFunc_Array_Get_Item;                           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyWalletWidget_C_SetActive) == 0x000008, "Wrong alignment on MyWalletWidget_C_SetActive");
static_assert(sizeof(MyWalletWidget_C_SetActive) == 0x000010, "Wrong size on MyWalletWidget_C_SetActive");
static_assert(offsetof(MyWalletWidget_C_SetActive, InCurrencyType) == 0x000000, "Member 'MyWalletWidget_C_SetActive::InCurrencyType' has a wrong offset!");
static_assert(offsetof(MyWalletWidget_C_SetActive, bInActive) == 0x000001, "Member 'MyWalletWidget_C_SetActive::bInActive' has a wrong offset!");
static_assert(offsetof(MyWalletWidget_C_SetActive, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000004, "Member 'MyWalletWidget_C_SetActive::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyWalletWidget_C_SetActive, CallFunc_Array_Get_Item) == 0x000008, "Member 'MyWalletWidget_C_SetActive::CallFunc_Array_Get_Item' has a wrong offset!");

// Function MyWalletWidget.MyWalletWidget_C.Show
// 0x0018 (0x0018 - 0x0000)
struct MyWalletWidget_C_Show final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4504[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyWalletWidget_C_Show) == 0x000008, "Wrong alignment on MyWalletWidget_C_Show");
static_assert(sizeof(MyWalletWidget_C_Show) == 0x000018, "Wrong size on MyWalletWidget_C_Show");
static_assert(offsetof(MyWalletWidget_C_Show, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'MyWalletWidget_C_Show::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyWalletWidget_C_Show, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000008, "Member 'MyWalletWidget_C_Show::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyWalletWidget_C_Show, Temp_int_Variable) == 0x00000C, "Member 'MyWalletWidget_C_Show::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MyWalletWidget_C_Show, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'MyWalletWidget_C_Show::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function MyWalletWidget.MyWalletWidget_C.Hide
// 0x0018 (0x0018 - 0x0000)
struct MyWalletWidget_C_Hide final
{
public:
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4505[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyWalletWidget_C_Hide) == 0x000008, "Wrong alignment on MyWalletWidget_C_Hide");
static_assert(sizeof(MyWalletWidget_C_Hide) == 0x000018, "Wrong size on MyWalletWidget_C_Hide");
static_assert(offsetof(MyWalletWidget_C_Hide, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000000, "Member 'MyWalletWidget_C_Hide::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyWalletWidget_C_Hide, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'MyWalletWidget_C_Hide::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyWalletWidget_C_Hide, Temp_int_Variable) == 0x000010, "Member 'MyWalletWidget_C_Hide::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MyWalletWidget_C_Hide, CallFunc_Subtract_IntInt_ReturnValue) == 0x000014, "Member 'MyWalletWidget_C_Hide::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");

// Function MyWalletWidget.MyWalletWidget_C.IsShow
// 0x000C (0x000C - 0x0000)
struct MyWalletWidget_C_IsShow final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4506[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetCount_ShowCount;                       // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyWalletWidget_C_IsShow) == 0x000004, "Wrong alignment on MyWalletWidget_C_IsShow");
static_assert(sizeof(MyWalletWidget_C_IsShow) == 0x00000C, "Wrong size on MyWalletWidget_C_IsShow");
static_assert(offsetof(MyWalletWidget_C_IsShow, Result) == 0x000000, "Member 'MyWalletWidget_C_IsShow::Result' has a wrong offset!");
static_assert(offsetof(MyWalletWidget_C_IsShow, CallFunc_GetCount_ShowCount) == 0x000004, "Member 'MyWalletWidget_C_IsShow::CallFunc_GetCount_ShowCount' has a wrong offset!");
static_assert(offsetof(MyWalletWidget_C_IsShow, CallFunc_Less_IntInt_ReturnValue) == 0x000008, "Member 'MyWalletWidget_C_IsShow::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function MyWalletWidget.MyWalletWidget_C.GetCount
// 0x0004 (0x0004 - 0x0000)
struct MyWalletWidget_C_GetCount final
{
public:
	int32                                         Param_ShowCount;                                   // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyWalletWidget_C_GetCount) == 0x000004, "Wrong alignment on MyWalletWidget_C_GetCount");
static_assert(sizeof(MyWalletWidget_C_GetCount) == 0x000004, "Wrong size on MyWalletWidget_C_GetCount");
static_assert(offsetof(MyWalletWidget_C_GetCount, Param_ShowCount) == 0x000000, "Member 'MyWalletWidget_C_GetCount::Param_ShowCount' has a wrong offset!");

}

