#pragma once

 

// Package: NotifyScreenshot

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function NotifyScreenshot.NotifyScreenshot_C.ExecuteUbergraph_NotifyScreenshot
// 0x0168 (0x0168 - 0x0000)
struct NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_44EE[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            K2Node_CustomEvent_Widget;                         // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          K2Node_CustomEvent_Sound;                          // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44EF[0x2];                                     // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0044(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44F0[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44F1[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNotifyMessageItem_Holder_C*            K2Node_DynamicCast_AsNotify_Message_Item_Holder;   // 0x0098(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44F2[0x6];                                     // 0x00A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBoxSlot*                       CallFunc_SlotAsVerticalBoxSlot_ReturnValue;        // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                CallFunc_GetAnimatedPosition_Position;             // 0x00B0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void(class UObject* Sender, class UObject* Param)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x00C0(0x0010)(ZeroConstructor, NoDestructor)
	class FString                                 K2Node_CustomEvent_FileName;                       // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UNotifyMessageItem_Holder_C*            CallFunc_Create_ReturnValue;                       // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNotifyMessageItem_C*                   CallFunc_Create_ReturnValue_1;                     // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x00F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender_2;                       // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_2;                        // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBStringParam*                         K2Node_DynamicCast_AsSBString_Param;               // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_44F3[0x7];                                     // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue;             // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Temp_object_Variable;                              // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender_1;                       // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param_1;                        // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Sender;                         // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                K2Node_CustomEvent_Param;                          // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          K2Node_Select_Default;                             // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44F4[0x4];                                     // 0x0154(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_1;           // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventExecutor*                       CallFunc_GetEventExecutor_ReturnValue_2;           // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot) == 0x000008, "Wrong alignment on NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot");
static_assert(sizeof(NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot) == 0x000168, "Wrong size on NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot");
static_assert(offsetof(NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot, EntryPoint) == 0x000000, "Member 'NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot::EntryPoint' has a wrong offset!");
static_assert(offsetof(NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot, Temp_int_Variable) == 0x000004, "Member 'NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot, K2Node_CreateDelegate_OutputDelegate_1) == 0x00001C, "Member 'NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot, K2Node_CustomEvent_Widget) == 0x000030, "Member 'NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot::K2Node_CustomEvent_Widget' has a wrong offset!");
static_assert(offsetof(NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot, K2Node_CustomEvent_Sound) == 0x000038, "Member 'NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot::K2Node_CustomEvent_Sound' has a wrong offset!");
static_assert(offsetof(NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot, Temp_bool_Variable) == 0x000041, "Member 'NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot, K2Node_Event_MyGeometry) == 0x000044, "Member 'NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot, K2Node_Event_InDeltaTime) == 0x00007C, "Member 'NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot, CallFunc_GetChildrenCount_ReturnValue) == 0x000080, "Member 'NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot, CallFunc_GetChildAt_ReturnValue) == 0x000088, "Member 'NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot, CallFunc_Subtract_IntInt_ReturnValue) == 0x000090, "Member 'NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot, K2Node_DynamicCast_AsNotify_Message_Item_Holder) == 0x000098, "Member 'NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot::K2Node_DynamicCast_AsNotify_Message_Item_Holder' has a wrong offset!");
static_assert(offsetof(NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot, K2Node_DynamicCast_bSuccess) == 0x0000A0, "Member 'NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000A1, "Member 'NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot, CallFunc_SlotAsVerticalBoxSlot_ReturnValue) == 0x0000A8, "Member 'NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot::CallFunc_SlotAsVerticalBoxSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot, CallFunc_GetAnimatedPosition_Position) == 0x0000B0, "Member 'NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot::CallFunc_GetAnimatedPosition_Position' has a wrong offset!");
static_assert(offsetof(NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000C0, "Member 'NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot, K2Node_CustomEvent_FileName) == 0x0000D0, "Member 'NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot::K2Node_CustomEvent_FileName' has a wrong offset!");
static_assert(offsetof(NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot, CallFunc_Create_ReturnValue) == 0x0000E0, "Member 'NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot, CallFunc_Create_ReturnValue_1) == 0x0000E8, "Member 'NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x0000F0, "Member 'NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot, K2Node_CustomEvent_Sender_2) == 0x0000F8, "Member 'NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot::K2Node_CustomEvent_Sender_2' has a wrong offset!");
static_assert(offsetof(NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot, K2Node_CustomEvent_Param_2) == 0x000100, "Member 'NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot::K2Node_CustomEvent_Param_2' has a wrong offset!");
static_assert(offsetof(NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot, K2Node_DynamicCast_AsSBString_Param) == 0x000108, "Member 'NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot::K2Node_DynamicCast_AsSBString_Param' has a wrong offset!");
static_assert(offsetof(NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot, K2Node_DynamicCast_bSuccess_1) == 0x000110, "Member 'NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot, CallFunc_GetEventExecutor_ReturnValue) == 0x000118, "Member 'NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot::CallFunc_GetEventExecutor_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot, Temp_object_Variable) == 0x000120, "Member 'NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot, K2Node_CustomEvent_Sender_1) == 0x000128, "Member 'NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot::K2Node_CustomEvent_Sender_1' has a wrong offset!");
static_assert(offsetof(NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot, K2Node_CustomEvent_Param_1) == 0x000130, "Member 'NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot::K2Node_CustomEvent_Param_1' has a wrong offset!");
static_assert(offsetof(NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot, K2Node_CustomEvent_Sender) == 0x000138, "Member 'NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot, K2Node_CustomEvent_Param) == 0x000140, "Member 'NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot::K2Node_CustomEvent_Param' has a wrong offset!");
static_assert(offsetof(NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot, K2Node_Select_Default) == 0x000148, "Member 'NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot, CallFunc_PlaySE_ReturnValue) == 0x000150, "Member 'NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot, CallFunc_GetEventExecutor_ReturnValue_1) == 0x000158, "Member 'NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot::CallFunc_GetEventExecutor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot, CallFunc_GetEventExecutor_ReturnValue_2) == 0x000160, "Member 'NotifyScreenshot_C_ExecuteUbergraph_NotifyScreenshot::CallFunc_GetEventExecutor_ReturnValue_2' has a wrong offset!");

// Function NotifyScreenshot.NotifyScreenshot_C.FinishScreenshot
// 0x0010 (0x0010 - 0x0000)
struct NotifyScreenshot_C_FinishScreenshot final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NotifyScreenshot_C_FinishScreenshot) == 0x000008, "Wrong alignment on NotifyScreenshot_C_FinishScreenshot");
static_assert(sizeof(NotifyScreenshot_C_FinishScreenshot) == 0x000010, "Wrong size on NotifyScreenshot_C_FinishScreenshot");
static_assert(offsetof(NotifyScreenshot_C_FinishScreenshot, Sender) == 0x000000, "Member 'NotifyScreenshot_C_FinishScreenshot::Sender' has a wrong offset!");
static_assert(offsetof(NotifyScreenshot_C_FinishScreenshot, Param) == 0x000008, "Member 'NotifyScreenshot_C_FinishScreenshot::Param' has a wrong offset!");

// Function NotifyScreenshot.NotifyScreenshot_C.PrepareScreens
// 0x0010 (0x0010 - 0x0000)
struct NotifyScreenshot_C_PrepareScreens final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NotifyScreenshot_C_PrepareScreens) == 0x000008, "Wrong alignment on NotifyScreenshot_C_PrepareScreens");
static_assert(sizeof(NotifyScreenshot_C_PrepareScreens) == 0x000010, "Wrong size on NotifyScreenshot_C_PrepareScreens");
static_assert(offsetof(NotifyScreenshot_C_PrepareScreens, Sender) == 0x000000, "Member 'NotifyScreenshot_C_PrepareScreens::Sender' has a wrong offset!");
static_assert(offsetof(NotifyScreenshot_C_PrepareScreens, Param) == 0x000008, "Member 'NotifyScreenshot_C_PrepareScreens::Param' has a wrong offset!");

// Function NotifyScreenshot.NotifyScreenshot_C.OnScreenshotCaptured
// 0x0010 (0x0010 - 0x0000)
struct NotifyScreenshot_C_OnScreenshotCaptured final
{
public:
	class UObject*                                Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                Param;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NotifyScreenshot_C_OnScreenshotCaptured) == 0x000008, "Wrong alignment on NotifyScreenshot_C_OnScreenshotCaptured");
static_assert(sizeof(NotifyScreenshot_C_OnScreenshotCaptured) == 0x000010, "Wrong size on NotifyScreenshot_C_OnScreenshotCaptured");
static_assert(offsetof(NotifyScreenshot_C_OnScreenshotCaptured, Sender) == 0x000000, "Member 'NotifyScreenshot_C_OnScreenshotCaptured::Sender' has a wrong offset!");
static_assert(offsetof(NotifyScreenshot_C_OnScreenshotCaptured, Param) == 0x000008, "Member 'NotifyScreenshot_C_OnScreenshotCaptured::Param' has a wrong offset!");

// Function NotifyScreenshot.NotifyScreenshot_C.AddScreenshotCaptured
// 0x0010 (0x0010 - 0x0000)
struct NotifyScreenshot_C_AddScreenshotCaptured final
{
public:
	class FString                                 Filename;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(NotifyScreenshot_C_AddScreenshotCaptured) == 0x000008, "Wrong alignment on NotifyScreenshot_C_AddScreenshotCaptured");
static_assert(sizeof(NotifyScreenshot_C_AddScreenshotCaptured) == 0x000010, "Wrong size on NotifyScreenshot_C_AddScreenshotCaptured");
static_assert(offsetof(NotifyScreenshot_C_AddScreenshotCaptured, Filename) == 0x000000, "Member 'NotifyScreenshot_C_AddScreenshotCaptured::Filename' has a wrong offset!");

// Function NotifyScreenshot.NotifyScreenshot_C.Tick
// 0x003C (0x003C - 0x0000)
struct NotifyScreenshot_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NotifyScreenshot_C_Tick) == 0x000004, "Wrong alignment on NotifyScreenshot_C_Tick");
static_assert(sizeof(NotifyScreenshot_C_Tick) == 0x00003C, "Wrong size on NotifyScreenshot_C_Tick");
static_assert(offsetof(NotifyScreenshot_C_Tick, MyGeometry) == 0x000000, "Member 'NotifyScreenshot_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(NotifyScreenshot_C_Tick, InDeltaTime) == 0x000038, "Member 'NotifyScreenshot_C_Tick::InDeltaTime' has a wrong offset!");

// Function NotifyScreenshot.NotifyScreenshot_C.AddNotifyMessageItem
// 0x0010 (0x0010 - 0x0000)
struct NotifyScreenshot_C_AddNotifyMessageItem final
{
public:
	class UUserWidget*                            Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          Sound;                                             // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NotifyScreenshot_C_AddNotifyMessageItem) == 0x000008, "Wrong alignment on NotifyScreenshot_C_AddNotifyMessageItem");
static_assert(sizeof(NotifyScreenshot_C_AddNotifyMessageItem) == 0x000010, "Wrong size on NotifyScreenshot_C_AddNotifyMessageItem");
static_assert(offsetof(NotifyScreenshot_C_AddNotifyMessageItem, Widget) == 0x000000, "Member 'NotifyScreenshot_C_AddNotifyMessageItem::Widget' has a wrong offset!");
static_assert(offsetof(NotifyScreenshot_C_AddNotifyMessageItem, Sound) == 0x000008, "Member 'NotifyScreenshot_C_AddNotifyMessageItem::Sound' has a wrong offset!");

}

