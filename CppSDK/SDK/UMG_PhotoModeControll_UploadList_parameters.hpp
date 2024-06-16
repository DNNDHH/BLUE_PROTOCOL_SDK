#pragma once

 

// Package: UMG_PhotoModeControll_UploadList

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "EPhotoModeUploadList_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.ExecuteUbergraph_UMG_PhotoModeControll_UploadList
// 0x0110 (0x0110 - 0x0000)
struct UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EPhotoModeUploadList                          Temp_byte_Variable_4;                              // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPhotoModeUploadList                          Temp_byte_Variable_5;                              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_96C1[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_96C2[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UTexture2DDynamic*>              K2Node_Event_InThumbnailImage_1;                   // 0x0020(0x0010)(ConstParm, ReferenceParm)
	TArray<class UTexture2DDynamic*>              K2Node_Event_InThumbnailImage;                     // 0x0030(0x0010)(ConstParm, ReferenceParm)
	uint8                                         K2Node_Event_InMode;                               // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPhotoModeUploadList                          K2Node_CustomEvent_InMode;                         // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSlateBrush>                    K2Node_CustomEvent_InThumbnailImage;               // 0x0048(0x0010)(ConstParm, ReferenceParm)
	TArray<bool>                                  K2Node_CustomEvent_InReturnValue;                  // 0x0058(0x0010)(ConstParm, ReferenceParm)
	bool                                          K2Node_CustomEvent_InIsClickCheck;                 // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPhotoModeUploadList                          K2Node_Select_Default_1;                           // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Get_Item;                           // 0x006B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96C3[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            CallFunc_Array_Get_Item_1;                         // 0x0070(0x0088)()
	ESlateVisibility                              K2Node_Select_Default_2;                           // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_96C4[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_PhotoModeControll_UploadListSlot_C* CallFunc_Array_Get_Item_2;                         // 0x0100(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList) == 0x000008, "Wrong alignment on UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList");
static_assert(sizeof(UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList) == 0x000110, "Wrong size on UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList, EntryPoint) == 0x000000, "Member 'UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList, Temp_bool_Variable) == 0x000004, "Member 'UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList, Temp_byte_Variable) == 0x000005, "Member 'UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList, Temp_byte_Variable_1) == 0x000006, "Member 'UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList, Temp_bool_Variable_1) == 0x000007, "Member 'UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList, Temp_byte_Variable_2) == 0x000008, "Member 'UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList, Temp_byte_Variable_3) == 0x000009, "Member 'UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList, Temp_bool_Variable_2) == 0x00000A, "Member 'UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList, Temp_byte_Variable_4) == 0x00000B, "Member 'UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList, Temp_byte_Variable_5) == 0x00000C, "Member 'UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList, Temp_int_Array_Index_Variable) == 0x000010, "Member 'UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList, K2Node_Event_InThumbnailImage_1) == 0x000020, "Member 'UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList::K2Node_Event_InThumbnailImage_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList, K2Node_Event_InThumbnailImage) == 0x000030, "Member 'UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList::K2Node_Event_InThumbnailImage' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList, K2Node_Event_InMode) == 0x000040, "Member 'UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList::K2Node_Event_InMode' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList, K2Node_CustomEvent_InMode) == 0x000041, "Member 'UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList::K2Node_CustomEvent_InMode' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList, CallFunc_GetValidValue_ReturnValue) == 0x000042, "Member 'UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList, K2Node_SwitchEnum_CmpSuccess) == 0x000043, "Member 'UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000044, "Member 'UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList, K2Node_CustomEvent_InThumbnailImage) == 0x000048, "Member 'UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList::K2Node_CustomEvent_InThumbnailImage' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList, K2Node_CustomEvent_InReturnValue) == 0x000058, "Member 'UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList::K2Node_CustomEvent_InReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList, K2Node_CustomEvent_InIsClickCheck) == 0x000068, "Member 'UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList::K2Node_CustomEvent_InIsClickCheck' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList, K2Node_Select_Default) == 0x000069, "Member 'UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList, K2Node_Select_Default_1) == 0x00006A, "Member 'UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList, CallFunc_Array_Get_Item) == 0x00006B, "Member 'UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList, CallFunc_Array_Get_Item_1) == 0x000070, "Member 'UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList, K2Node_Select_Default_2) == 0x0000F8, "Member 'UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList, CallFunc_Array_Get_Item_2) == 0x000100, "Member 'UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList, CallFunc_Array_Length_ReturnValue) == 0x000108, "Member 'UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList, CallFunc_Less_IntInt_ReturnValue) == 0x00010C, "Member 'UMG_PhotoModeControll_UploadList_C_ExecuteUbergraph_UMG_PhotoModeControll_UploadList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.UploadFinish
// 0x0028 (0x0028 - 0x0000)
struct UMG_PhotoModeControll_UploadList_C_UploadFinish final
{
public:
	TArray<struct FSlateBrush>                    InThumbnailImage;                                  // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<bool>                                  InReturnValue;                                     // 0x0010(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          InIsClickCheck;                                    // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_PhotoModeControll_UploadList_C_UploadFinish) == 0x000008, "Wrong alignment on UMG_PhotoModeControll_UploadList_C_UploadFinish");
static_assert(sizeof(UMG_PhotoModeControll_UploadList_C_UploadFinish) == 0x000028, "Wrong size on UMG_PhotoModeControll_UploadList_C_UploadFinish");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_UploadFinish, InThumbnailImage) == 0x000000, "Member 'UMG_PhotoModeControll_UploadList_C_UploadFinish::InThumbnailImage' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_UploadFinish, InReturnValue) == 0x000010, "Member 'UMG_PhotoModeControll_UploadList_C_UploadFinish::InReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_UploadFinish, InIsClickCheck) == 0x000020, "Member 'UMG_PhotoModeControll_UploadList_C_UploadFinish::InIsClickCheck' has a wrong offset!");

// Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.UploadWidgetSwitcher
// 0x0001 (0x0001 - 0x0000)
struct UMG_PhotoModeControll_UploadList_C_UploadWidgetSwitcher final
{
public:
	EPhotoModeUploadList                          InMode;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeControll_UploadList_C_UploadWidgetSwitcher) == 0x000001, "Wrong alignment on UMG_PhotoModeControll_UploadList_C_UploadWidgetSwitcher");
static_assert(sizeof(UMG_PhotoModeControll_UploadList_C_UploadWidgetSwitcher) == 0x000001, "Wrong size on UMG_PhotoModeControll_UploadList_C_UploadWidgetSwitcher");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_UploadWidgetSwitcher, InMode) == 0x000000, "Member 'UMG_PhotoModeControll_UploadList_C_UploadWidgetSwitcher::InMode' has a wrong offset!");

// Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.UploadWidgetSwitcher_Bp
// 0x0001 (0x0001 - 0x0000)
struct UMG_PhotoModeControll_UploadList_C_UploadWidgetSwitcher_Bp final
{
public:
	uint8                                         InMode;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeControll_UploadList_C_UploadWidgetSwitcher_Bp) == 0x000001, "Wrong alignment on UMG_PhotoModeControll_UploadList_C_UploadWidgetSwitcher_Bp");
static_assert(sizeof(UMG_PhotoModeControll_UploadList_C_UploadWidgetSwitcher_Bp) == 0x000001, "Wrong size on UMG_PhotoModeControll_UploadList_C_UploadWidgetSwitcher_Bp");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_UploadWidgetSwitcher_Bp, InMode) == 0x000000, "Member 'UMG_PhotoModeControll_UploadList_C_UploadWidgetSwitcher_Bp::InMode' has a wrong offset!");

// Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.SetUploadThumbnail_Bp
// 0x0010 (0x0010 - 0x0000)
struct UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail_Bp final
{
public:
	TArray<class UTexture2DDynamic*>              InThumbnailImage;                                  // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail_Bp) == 0x000008, "Wrong alignment on UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail_Bp");
static_assert(sizeof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail_Bp) == 0x000010, "Wrong size on UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail_Bp");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail_Bp, InThumbnailImage) == 0x000000, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail_Bp::InThumbnailImage' has a wrong offset!");

// Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.ScreenshotCapturedEvent_Bp
// 0x0010 (0x0010 - 0x0000)
struct UMG_PhotoModeControll_UploadList_C_ScreenshotCapturedEvent_Bp final
{
public:
	TArray<class UTexture2DDynamic*>              InThumbnailImage;                                  // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(UMG_PhotoModeControll_UploadList_C_ScreenshotCapturedEvent_Bp) == 0x000008, "Wrong alignment on UMG_PhotoModeControll_UploadList_C_ScreenshotCapturedEvent_Bp");
static_assert(sizeof(UMG_PhotoModeControll_UploadList_C_ScreenshotCapturedEvent_Bp) == 0x000010, "Wrong size on UMG_PhotoModeControll_UploadList_C_ScreenshotCapturedEvent_Bp");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_ScreenshotCapturedEvent_Bp, InThumbnailImage) == 0x000000, "Member 'UMG_PhotoModeControll_UploadList_C_ScreenshotCapturedEvent_Bp::InThumbnailImage' has a wrong offset!");

// Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.InitUploadPanel
// 0x0080 (0x0080 - 0x0000)
struct UMG_PhotoModeControll_UploadList_C_InitUploadPanel final
{
public:
	class USBPhotoModeImageComponent*             InPhotoModeImageComponent;                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96C5[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_96C6[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UTexture2DDynamic*>              CallFunc_GetSaveUploadImageTextureAll_ReturnValue; // 0x0028(0x0010)(ReferenceParm)
	class UTexture2DDynamic*                      CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96C7[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96C8[0x2];                                     // 0x004E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0050(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                                CallFunc_Array_Get_Item_1;                         // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_96C9[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_PhotoModeControll_UploadListSlot_C* K2Node_DynamicCast_AsUMG_Photo_Mode_Controll_Upload_List_Slot; // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96CA[0x2];                                     // 0x007A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeControll_UploadList_C_InitUploadPanel) == 0x000008, "Wrong alignment on UMG_PhotoModeControll_UploadList_C_InitUploadPanel");
static_assert(sizeof(UMG_PhotoModeControll_UploadList_C_InitUploadPanel) == 0x000080, "Wrong size on UMG_PhotoModeControll_UploadList_C_InitUploadPanel");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_InitUploadPanel, InPhotoModeImageComponent) == 0x000000, "Member 'UMG_PhotoModeControll_UploadList_C_InitUploadPanel::InPhotoModeImageComponent' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_InitUploadPanel, Temp_int_Array_Index_Variable) == 0x000008, "Member 'UMG_PhotoModeControll_UploadList_C_InitUploadPanel::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_InitUploadPanel, Temp_bool_True_if_break_was_hit_Variable) == 0x00000C, "Member 'UMG_PhotoModeControll_UploadList_C_InitUploadPanel::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_InitUploadPanel, CallFunc_Not_PreBool_ReturnValue) == 0x00000D, "Member 'UMG_PhotoModeControll_UploadList_C_InitUploadPanel::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_InitUploadPanel, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'UMG_PhotoModeControll_UploadList_C_InitUploadPanel::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_InitUploadPanel, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'UMG_PhotoModeControll_UploadList_C_InitUploadPanel::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_InitUploadPanel, Temp_int_Array_Index_Variable_1) == 0x000018, "Member 'UMG_PhotoModeControll_UploadList_C_InitUploadPanel::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_InitUploadPanel, Temp_int_Loop_Counter_Variable_1) == 0x00001C, "Member 'UMG_PhotoModeControll_UploadList_C_InitUploadPanel::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_InitUploadPanel, CallFunc_Add_IntInt_ReturnValue_1) == 0x000020, "Member 'UMG_PhotoModeControll_UploadList_C_InitUploadPanel::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_InitUploadPanel, CallFunc_GetSaveUploadImageTextureAll_ReturnValue) == 0x000028, "Member 'UMG_PhotoModeControll_UploadList_C_InitUploadPanel::CallFunc_GetSaveUploadImageTextureAll_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_InitUploadPanel, CallFunc_Array_Get_Item) == 0x000038, "Member 'UMG_PhotoModeControll_UploadList_C_InitUploadPanel::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_InitUploadPanel, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'UMG_PhotoModeControll_UploadList_C_InitUploadPanel::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_InitUploadPanel, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000044, "Member 'UMG_PhotoModeControll_UploadList_C_InitUploadPanel::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_InitUploadPanel, CallFunc_Array_Length_ReturnValue_1) == 0x000048, "Member 'UMG_PhotoModeControll_UploadList_C_InitUploadPanel::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_InitUploadPanel, CallFunc_Less_IntInt_ReturnValue) == 0x00004C, "Member 'UMG_PhotoModeControll_UploadList_C_InitUploadPanel::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_InitUploadPanel, CallFunc_BooleanAND_ReturnValue) == 0x00004D, "Member 'UMG_PhotoModeControll_UploadList_C_InitUploadPanel::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_InitUploadPanel, CallFunc_GetAllChildren_ReturnValue) == 0x000050, "Member 'UMG_PhotoModeControll_UploadList_C_InitUploadPanel::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_InitUploadPanel, CallFunc_Array_Get_Item_1) == 0x000060, "Member 'UMG_PhotoModeControll_UploadList_C_InitUploadPanel::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_InitUploadPanel, CallFunc_Array_Length_ReturnValue_2) == 0x000068, "Member 'UMG_PhotoModeControll_UploadList_C_InitUploadPanel::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_InitUploadPanel, K2Node_DynamicCast_AsUMG_Photo_Mode_Controll_Upload_List_Slot) == 0x000070, "Member 'UMG_PhotoModeControll_UploadList_C_InitUploadPanel::K2Node_DynamicCast_AsUMG_Photo_Mode_Controll_Upload_List_Slot' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_InitUploadPanel, K2Node_DynamicCast_bSuccess) == 0x000078, "Member 'UMG_PhotoModeControll_UploadList_C_InitUploadPanel::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_InitUploadPanel, CallFunc_Less_IntInt_ReturnValue_1) == 0x000079, "Member 'UMG_PhotoModeControll_UploadList_C_InitUploadPanel::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_InitUploadPanel, CallFunc_Array_Add_ReturnValue) == 0x00007C, "Member 'UMG_PhotoModeControll_UploadList_C_InitUploadPanel::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.SetUploadThumbnail
// 0x0160 (0x0160 - 0x0000)
struct UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail final
{
public:
	TArray<class UTexture2DDynamic*>              InThumbnailImage;                                  // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UUMG_PhotoModeControll_UploadListSlot_C* TmpThumbnailImage;                                 // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpCnt;                                            // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_96CB[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UTexture2DDynamic*>              TmpTextureList;                                    // 0x0020(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x003C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Array_Get_Item;                           // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Array_Get_Item_1;                         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_1;                        // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_1;                        // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetPosition_ReturnValue;                  // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_2;                        // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_2;                        // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_1;             // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_2;           // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetPosition_ReturnValue_1;                // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_3;                        // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_3;                        // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_3;           // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_2;             // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_3;             // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_2;               // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_4;                        // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_4;                        // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_4;           // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_5;           // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetPosition_ReturnValue_2;                // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_5;                        // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_5;                        // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_6;           // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_4;             // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue_5;             // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_3;               // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_96CC[0x4];                                     // 0x0114(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_PhotoModeControll_UploadListSlot_C* CallFunc_Array_Get_Item_2;                         // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96CD[0x3];                                     // 0x0121(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96CE[0x7];                                     // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2DDynamic*                      CallFunc_Array_Get_Item_3;                         // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96CF[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2DDynamic*                      CallFunc_Array_Get_Item_4;                         // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue_1;      // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_96D0[0x3];                                     // 0x0149(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_PhotoModeControll_UploadListSlot_C* CallFunc_Array_Get_Item_5;                         // 0x0150(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x015C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail) == 0x000008, "Wrong alignment on UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail");
static_assert(sizeof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail) == 0x000160, "Wrong size on UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, InThumbnailImage) == 0x000000, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::InThumbnailImage' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, TmpThumbnailImage) == 0x000010, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::TmpThumbnailImage' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, TmpCnt) == 0x000018, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::TmpCnt' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, TmpTextureList) == 0x000020, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::TmpTextureList' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, Temp_int_Loop_Counter_Variable) == 0x000030, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, Temp_int_Array_Index_Variable) == 0x000038, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, CallFunc_MakeVector2D_ReturnValue) == 0x00003C, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, Temp_int_Loop_Counter_Variable_1) == 0x000044, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, CallFunc_Add_IntInt_ReturnValue_1) == 0x000048, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, Temp_int_Array_Index_Variable_1) == 0x00004C, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, CallFunc_Array_Get_Item) == 0x000050, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, CallFunc_BreakVector2D_X) == 0x000058, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, CallFunc_BreakVector2D_Y) == 0x00005C, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, CallFunc_Array_Get_Item_1) == 0x000060, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000068, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, CallFunc_BreakVector2D_X_1) == 0x000070, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, CallFunc_BreakVector2D_Y_1) == 0x000074, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::CallFunc_BreakVector2D_Y_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, CallFunc_GetPosition_ReturnValue) == 0x000078, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::CallFunc_GetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, CallFunc_BreakVector2D_X_2) == 0x000080, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::CallFunc_BreakVector2D_X_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, CallFunc_BreakVector2D_Y_2) == 0x000084, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::CallFunc_BreakVector2D_Y_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000088, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, CallFunc_Add_FloatFloat_ReturnValue) == 0x000090, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, CallFunc_Add_FloatFloat_ReturnValue_1) == 0x000094, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::CallFunc_Add_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, CallFunc_MakeVector2D_ReturnValue_1) == 0x000098, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, CallFunc_SlotAsCanvasSlot_ReturnValue_2) == 0x0000A0, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::CallFunc_SlotAsCanvasSlot_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, CallFunc_GetPosition_ReturnValue_1) == 0x0000A8, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::CallFunc_GetPosition_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, CallFunc_BreakVector2D_X_3) == 0x0000B0, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::CallFunc_BreakVector2D_X_3' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, CallFunc_BreakVector2D_Y_3) == 0x0000B4, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::CallFunc_BreakVector2D_Y_3' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, CallFunc_SlotAsCanvasSlot_ReturnValue_3) == 0x0000B8, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::CallFunc_SlotAsCanvasSlot_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, CallFunc_Add_FloatFloat_ReturnValue_2) == 0x0000C0, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::CallFunc_Add_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, CallFunc_Add_FloatFloat_ReturnValue_3) == 0x0000C4, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::CallFunc_Add_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, CallFunc_MakeVector2D_ReturnValue_2) == 0x0000C8, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::CallFunc_MakeVector2D_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, CallFunc_BreakVector2D_X_4) == 0x0000D0, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::CallFunc_BreakVector2D_X_4' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, CallFunc_BreakVector2D_Y_4) == 0x0000D4, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::CallFunc_BreakVector2D_Y_4' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, CallFunc_SlotAsCanvasSlot_ReturnValue_4) == 0x0000D8, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::CallFunc_SlotAsCanvasSlot_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, CallFunc_SlotAsCanvasSlot_ReturnValue_5) == 0x0000E0, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::CallFunc_SlotAsCanvasSlot_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, CallFunc_GetPosition_ReturnValue_2) == 0x0000E8, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::CallFunc_GetPosition_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, CallFunc_BreakVector2D_X_5) == 0x0000F0, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::CallFunc_BreakVector2D_X_5' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, CallFunc_BreakVector2D_Y_5) == 0x0000F4, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::CallFunc_BreakVector2D_Y_5' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, CallFunc_SlotAsCanvasSlot_ReturnValue_6) == 0x0000F8, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::CallFunc_SlotAsCanvasSlot_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, CallFunc_Add_FloatFloat_ReturnValue_4) == 0x000100, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::CallFunc_Add_FloatFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, CallFunc_Add_FloatFloat_ReturnValue_5) == 0x000104, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::CallFunc_Add_FloatFloat_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, CallFunc_MakeVector2D_ReturnValue_3) == 0x000108, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::CallFunc_MakeVector2D_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, Temp_int_Variable) == 0x000110, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, CallFunc_Array_Get_Item_2) == 0x000118, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, K2Node_SwitchInteger_CmpSuccess) == 0x000120, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, CallFunc_Array_Length_ReturnValue) == 0x000124, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, CallFunc_Less_IntInt_ReturnValue) == 0x000128, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, CallFunc_Array_Get_Item_3) == 0x000130, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000138, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, CallFunc_Array_Get_Item_4) == 0x000140, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, CallFunc_NotEqual_ObjectObject_ReturnValue_1) == 0x000148, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::CallFunc_NotEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, CallFunc_Add_IntInt_ReturnValue_2) == 0x00014C, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, CallFunc_Array_Get_Item_5) == 0x000150, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::CallFunc_Array_Get_Item_5' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, CallFunc_Array_Length_ReturnValue_1) == 0x000158, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail, CallFunc_Less_IntInt_ReturnValue_1) == 0x00015C, "Member 'UMG_PhotoModeControll_UploadList_C_SetUploadThumbnail::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function UMG_PhotoModeControll_UploadList.UMG_PhotoModeControll_UploadList_C.Screenshot Captured Event
// 0x0018 (0x0018 - 0x0000)
struct UMG_PhotoModeControll_UploadList_C_Screenshot_Captured_Event final
{
public:
	TArray<class UTexture2DDynamic*>              InThumbnailImage;                                  // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_PhotoModeControll_UploadList_C_Screenshot_Captured_Event) == 0x000008, "Wrong alignment on UMG_PhotoModeControll_UploadList_C_Screenshot_Captured_Event");
static_assert(sizeof(UMG_PhotoModeControll_UploadList_C_Screenshot_Captured_Event) == 0x000018, "Wrong size on UMG_PhotoModeControll_UploadList_C_Screenshot_Captured_Event");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_Screenshot_Captured_Event, InThumbnailImage) == 0x000000, "Member 'UMG_PhotoModeControll_UploadList_C_Screenshot_Captured_Event::InThumbnailImage' has a wrong offset!");
static_assert(offsetof(UMG_PhotoModeControll_UploadList_C_Screenshot_Captured_Event, CallFunc_MakeLiteralByte_ReturnValue) == 0x000010, "Member 'UMG_PhotoModeControll_UploadList_C_Screenshot_Captured_Event::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");

}

