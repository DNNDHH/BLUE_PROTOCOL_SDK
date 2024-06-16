#pragma once

 

// Package: ChatLogFloatStampIcon

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function ChatLogFloatStampIcon.ChatLogFloatStampIcon_C.ExecuteUbergraph_ChatLogFloatStampIcon
// 0x0050 (0x0050 - 0x0000)
struct ChatLogFloatStampIcon_C_ExecuteUbergraph_ChatLogFloatStampIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0040(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatLogFloatStampIcon_C_ExecuteUbergraph_ChatLogFloatStampIcon) == 0x000008, "Wrong alignment on ChatLogFloatStampIcon_C_ExecuteUbergraph_ChatLogFloatStampIcon");
static_assert(sizeof(ChatLogFloatStampIcon_C_ExecuteUbergraph_ChatLogFloatStampIcon) == 0x000050, "Wrong size on ChatLogFloatStampIcon_C_ExecuteUbergraph_ChatLogFloatStampIcon");
static_assert(offsetof(ChatLogFloatStampIcon_C_ExecuteUbergraph_ChatLogFloatStampIcon, EntryPoint) == 0x000000, "Member 'ChatLogFloatStampIcon_C_ExecuteUbergraph_ChatLogFloatStampIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(ChatLogFloatStampIcon_C_ExecuteUbergraph_ChatLogFloatStampIcon, K2Node_Event_MyGeometry) == 0x000004, "Member 'ChatLogFloatStampIcon_C_ExecuteUbergraph_ChatLogFloatStampIcon::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(ChatLogFloatStampIcon_C_ExecuteUbergraph_ChatLogFloatStampIcon, K2Node_Event_InDeltaTime) == 0x00003C, "Member 'ChatLogFloatStampIcon_C_ExecuteUbergraph_ChatLogFloatStampIcon::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(ChatLogFloatStampIcon_C_ExecuteUbergraph_ChatLogFloatStampIcon, K2Node_Event_Animation) == 0x000040, "Member 'ChatLogFloatStampIcon_C_ExecuteUbergraph_ChatLogFloatStampIcon::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(ChatLogFloatStampIcon_C_ExecuteUbergraph_ChatLogFloatStampIcon, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000048, "Member 'ChatLogFloatStampIcon_C_ExecuteUbergraph_ChatLogFloatStampIcon::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function ChatLogFloatStampIcon.ChatLogFloatStampIcon_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct ChatLogFloatStampIcon_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatLogFloatStampIcon_C_OnAnimationFinished) == 0x000008, "Wrong alignment on ChatLogFloatStampIcon_C_OnAnimationFinished");
static_assert(sizeof(ChatLogFloatStampIcon_C_OnAnimationFinished) == 0x000008, "Wrong size on ChatLogFloatStampIcon_C_OnAnimationFinished");
static_assert(offsetof(ChatLogFloatStampIcon_C_OnAnimationFinished, Animation) == 0x000000, "Member 'ChatLogFloatStampIcon_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function ChatLogFloatStampIcon.ChatLogFloatStampIcon_C.Tick
// 0x003C (0x003C - 0x0000)
struct ChatLogFloatStampIcon_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatLogFloatStampIcon_C_Tick) == 0x000004, "Wrong alignment on ChatLogFloatStampIcon_C_Tick");
static_assert(sizeof(ChatLogFloatStampIcon_C_Tick) == 0x00003C, "Wrong size on ChatLogFloatStampIcon_C_Tick");
static_assert(offsetof(ChatLogFloatStampIcon_C_Tick, MyGeometry) == 0x000000, "Member 'ChatLogFloatStampIcon_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(ChatLogFloatStampIcon_C_Tick, InDeltaTime) == 0x000038, "Member 'ChatLogFloatStampIcon_C_Tick::InDeltaTime' has a wrong offset!");

// Function ChatLogFloatStampIcon.ChatLogFloatStampIcon_C.SetStamp
// 0x0050 (0x0050 - 0x0000)
struct ChatLogFloatStampIcon_C_SetStamp final
{
public:
	int32                                         InStampId;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InDeadIcon;                                        // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F78[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            ParentWidget;                                      // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidStampEmoteTermUpdate_ReturnValue;    // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F79[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F7A[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerState*                         CallFunc_GetSBPlayerState_ReturnValue;             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerStampComponent*                CallFunc_GetPlayerStampComponent_ReturnValue;      // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_GetStampTerm_OutStartTime;                // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_GetStampTerm_OutEndTime;                  // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetStampTerm_ReturnValue;                 // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F7B[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatLogFloatStampIcon_C_SetStamp) == 0x000008, "Wrong alignment on ChatLogFloatStampIcon_C_SetStamp");
static_assert(sizeof(ChatLogFloatStampIcon_C_SetStamp) == 0x000050, "Wrong size on ChatLogFloatStampIcon_C_SetStamp");
static_assert(offsetof(ChatLogFloatStampIcon_C_SetStamp, InStampId) == 0x000000, "Member 'ChatLogFloatStampIcon_C_SetStamp::InStampId' has a wrong offset!");
static_assert(offsetof(ChatLogFloatStampIcon_C_SetStamp, InDeadIcon) == 0x000004, "Member 'ChatLogFloatStampIcon_C_SetStamp::InDeadIcon' has a wrong offset!");
static_assert(offsetof(ChatLogFloatStampIcon_C_SetStamp, ParentWidget) == 0x000008, "Member 'ChatLogFloatStampIcon_C_SetStamp::ParentWidget' has a wrong offset!");
static_assert(offsetof(ChatLogFloatStampIcon_C_SetStamp, Temp_bool_Variable) == 0x000010, "Member 'ChatLogFloatStampIcon_C_SetStamp::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ChatLogFloatStampIcon_C_SetStamp, Temp_byte_Variable) == 0x000011, "Member 'ChatLogFloatStampIcon_C_SetStamp::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ChatLogFloatStampIcon_C_SetStamp, Temp_byte_Variable_1) == 0x000012, "Member 'ChatLogFloatStampIcon_C_SetStamp::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ChatLogFloatStampIcon_C_SetStamp, CallFunc_ValidStampEmoteTermUpdate_ReturnValue) == 0x000013, "Member 'ChatLogFloatStampIcon_C_SetStamp::CallFunc_ValidStampEmoteTermUpdate_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogFloatStampIcon_C_SetStamp, K2Node_Select_Default) == 0x000014, "Member 'ChatLogFloatStampIcon_C_SetStamp::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ChatLogFloatStampIcon_C_SetStamp, CallFunc_GetActiveWidgetIndex_ReturnValue) == 0x000018, "Member 'ChatLogFloatStampIcon_C_SetStamp::CallFunc_GetActiveWidgetIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogFloatStampIcon_C_SetStamp, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00001C, "Member 'ChatLogFloatStampIcon_C_SetStamp::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogFloatStampIcon_C_SetStamp, CallFunc_GetSBPlayerState_ReturnValue) == 0x000020, "Member 'ChatLogFloatStampIcon_C_SetStamp::CallFunc_GetSBPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogFloatStampIcon_C_SetStamp, CallFunc_GetPlayerStampComponent_ReturnValue) == 0x000028, "Member 'ChatLogFloatStampIcon_C_SetStamp::CallFunc_GetPlayerStampComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogFloatStampIcon_C_SetStamp, CallFunc_GetStampTerm_OutStartTime) == 0x000030, "Member 'ChatLogFloatStampIcon_C_SetStamp::CallFunc_GetStampTerm_OutStartTime' has a wrong offset!");
static_assert(offsetof(ChatLogFloatStampIcon_C_SetStamp, CallFunc_GetStampTerm_OutEndTime) == 0x000038, "Member 'ChatLogFloatStampIcon_C_SetStamp::CallFunc_GetStampTerm_OutEndTime' has a wrong offset!");
static_assert(offsetof(ChatLogFloatStampIcon_C_SetStamp, CallFunc_GetStampTerm_ReturnValue) == 0x000040, "Member 'ChatLogFloatStampIcon_C_SetStamp::CallFunc_GetStampTerm_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogFloatStampIcon_C_SetStamp, CallFunc_PlayAnimation_ReturnValue) == 0x000048, "Member 'ChatLogFloatStampIcon_C_SetStamp::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function ChatLogFloatStampIcon.ChatLogFloatStampIcon_C.Finish
// 0x0008 (0x0008 - 0x0000)
struct ChatLogFloatStampIcon_C_Finish final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatLogFloatStampIcon_C_Finish) == 0x000008, "Wrong alignment on ChatLogFloatStampIcon_C_Finish");
static_assert(sizeof(ChatLogFloatStampIcon_C_Finish) == 0x000008, "Wrong size on ChatLogFloatStampIcon_C_Finish");
static_assert(offsetof(ChatLogFloatStampIcon_C_Finish, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'ChatLogFloatStampIcon_C_Finish::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function ChatLogFloatStampIcon.ChatLogFloatStampIcon_C.UpdatePos
// 0x00A0 (0x00A0 - 0x0000)
struct ChatLogFloatStampIcon_C_UpdatePos final
{
public:
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F7C[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetViewPortCalcOffset_Position;           // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetViewPortCalcOffset_Position_1;         // 0x0014(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F7D[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UChatLogMyMessage_C*                    K2Node_DynamicCast_AsChat_Log_My_Message;          // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F7E[0x2];                                     // 0x0032(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetFloatStampPoint_NewParam;              // 0x0034(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Add_Vector2DVector2D_ReturnValue;         // 0x003C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F7F[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UChatStampButtonItem_C*                 K2Node_DynamicCast_AsChat_Stamp_Button_Item;       // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F80[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_Subtract_Vector2DVector2D_ReturnValue;    // 0x0054(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetFloatStampPoint_OutPos;                // 0x005C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Add_Vector2DVector2D_ReturnValue_1;       // 0x0064(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F81[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UChatLogOtherPlayerMessage_C*           K2Node_DynamicCast_AsChat_Log_Other_Player_Message; // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F82[0x3];                                     // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_Subtract_Vector2DVector2D_ReturnValue_1;  // 0x007C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetFloatStampPoint_NewParam_1;            // 0x0084(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Add_Vector2DVector2D_ReturnValue_2;       // 0x008C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Subtract_Vector2DVector2D_ReturnValue_2;  // 0x0094(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChatLogFloatStampIcon_C_UpdatePos) == 0x000008, "Wrong alignment on ChatLogFloatStampIcon_C_UpdatePos");
static_assert(sizeof(ChatLogFloatStampIcon_C_UpdatePos) == 0x0000A0, "Wrong size on ChatLogFloatStampIcon_C_UpdatePos");
static_assert(offsetof(ChatLogFloatStampIcon_C_UpdatePos, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000000, "Member 'ChatLogFloatStampIcon_C_UpdatePos::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogFloatStampIcon_C_UpdatePos, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x000001, "Member 'ChatLogFloatStampIcon_C_UpdatePos::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatLogFloatStampIcon_C_UpdatePos, CallFunc_MakeVector2D_ReturnValue) == 0x000004, "Member 'ChatLogFloatStampIcon_C_UpdatePos::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogFloatStampIcon_C_UpdatePos, CallFunc_GetViewPortCalcOffset_Position) == 0x00000C, "Member 'ChatLogFloatStampIcon_C_UpdatePos::CallFunc_GetViewPortCalcOffset_Position' has a wrong offset!");
static_assert(offsetof(ChatLogFloatStampIcon_C_UpdatePos, CallFunc_GetViewPortCalcOffset_Position_1) == 0x000014, "Member 'ChatLogFloatStampIcon_C_UpdatePos::CallFunc_GetViewPortCalcOffset_Position_1' has a wrong offset!");
static_assert(offsetof(ChatLogFloatStampIcon_C_UpdatePos, CallFunc_MakeVector2D_ReturnValue_1) == 0x00001C, "Member 'ChatLogFloatStampIcon_C_UpdatePos::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatLogFloatStampIcon_C_UpdatePos, K2Node_DynamicCast_AsChat_Log_My_Message) == 0x000028, "Member 'ChatLogFloatStampIcon_C_UpdatePos::K2Node_DynamicCast_AsChat_Log_My_Message' has a wrong offset!");
static_assert(offsetof(ChatLogFloatStampIcon_C_UpdatePos, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'ChatLogFloatStampIcon_C_UpdatePos::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ChatLogFloatStampIcon_C_UpdatePos, CallFunc_IsVisible_ReturnValue) == 0x000031, "Member 'ChatLogFloatStampIcon_C_UpdatePos::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogFloatStampIcon_C_UpdatePos, CallFunc_GetFloatStampPoint_NewParam) == 0x000034, "Member 'ChatLogFloatStampIcon_C_UpdatePos::CallFunc_GetFloatStampPoint_NewParam' has a wrong offset!");
static_assert(offsetof(ChatLogFloatStampIcon_C_UpdatePos, CallFunc_Add_Vector2DVector2D_ReturnValue) == 0x00003C, "Member 'ChatLogFloatStampIcon_C_UpdatePos::CallFunc_Add_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogFloatStampIcon_C_UpdatePos, K2Node_DynamicCast_AsChat_Stamp_Button_Item) == 0x000048, "Member 'ChatLogFloatStampIcon_C_UpdatePos::K2Node_DynamicCast_AsChat_Stamp_Button_Item' has a wrong offset!");
static_assert(offsetof(ChatLogFloatStampIcon_C_UpdatePos, K2Node_DynamicCast_bSuccess_1) == 0x000050, "Member 'ChatLogFloatStampIcon_C_UpdatePos::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(ChatLogFloatStampIcon_C_UpdatePos, CallFunc_Subtract_Vector2DVector2D_ReturnValue) == 0x000054, "Member 'ChatLogFloatStampIcon_C_UpdatePos::CallFunc_Subtract_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatLogFloatStampIcon_C_UpdatePos, CallFunc_GetFloatStampPoint_OutPos) == 0x00005C, "Member 'ChatLogFloatStampIcon_C_UpdatePos::CallFunc_GetFloatStampPoint_OutPos' has a wrong offset!");
static_assert(offsetof(ChatLogFloatStampIcon_C_UpdatePos, CallFunc_Add_Vector2DVector2D_ReturnValue_1) == 0x000064, "Member 'ChatLogFloatStampIcon_C_UpdatePos::CallFunc_Add_Vector2DVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatLogFloatStampIcon_C_UpdatePos, K2Node_DynamicCast_AsChat_Log_Other_Player_Message) == 0x000070, "Member 'ChatLogFloatStampIcon_C_UpdatePos::K2Node_DynamicCast_AsChat_Log_Other_Player_Message' has a wrong offset!");
static_assert(offsetof(ChatLogFloatStampIcon_C_UpdatePos, K2Node_DynamicCast_bSuccess_2) == 0x000078, "Member 'ChatLogFloatStampIcon_C_UpdatePos::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(ChatLogFloatStampIcon_C_UpdatePos, CallFunc_Subtract_Vector2DVector2D_ReturnValue_1) == 0x00007C, "Member 'ChatLogFloatStampIcon_C_UpdatePos::CallFunc_Subtract_Vector2DVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChatLogFloatStampIcon_C_UpdatePos, CallFunc_GetFloatStampPoint_NewParam_1) == 0x000084, "Member 'ChatLogFloatStampIcon_C_UpdatePos::CallFunc_GetFloatStampPoint_NewParam_1' has a wrong offset!");
static_assert(offsetof(ChatLogFloatStampIcon_C_UpdatePos, CallFunc_Add_Vector2DVector2D_ReturnValue_2) == 0x00008C, "Member 'ChatLogFloatStampIcon_C_UpdatePos::CallFunc_Add_Vector2DVector2D_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChatLogFloatStampIcon_C_UpdatePos, CallFunc_Subtract_Vector2DVector2D_ReturnValue_2) == 0x000094, "Member 'ChatLogFloatStampIcon_C_UpdatePos::CallFunc_Subtract_Vector2DVector2D_ReturnValue_2' has a wrong offset!");

// Function ChatLogFloatStampIcon.ChatLogFloatStampIcon_C.UpdateVisible
// 0x0001 (0x0001 - 0x0000)
struct ChatLogFloatStampIcon_C_UpdateVisible final
{
public:
	bool                                          InVisible;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChatLogFloatStampIcon_C_UpdateVisible) == 0x000001, "Wrong alignment on ChatLogFloatStampIcon_C_UpdateVisible");
static_assert(sizeof(ChatLogFloatStampIcon_C_UpdateVisible) == 0x000001, "Wrong size on ChatLogFloatStampIcon_C_UpdateVisible");
static_assert(offsetof(ChatLogFloatStampIcon_C_UpdateVisible, InVisible) == 0x000000, "Member 'ChatLogFloatStampIcon_C_UpdateVisible::InVisible' has a wrong offset!");

}

