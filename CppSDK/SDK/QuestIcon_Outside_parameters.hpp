#pragma once

 

// Package: QuestIcon_Outside

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function QuestIcon_Outside.QuestIcon_Outside_C.ExecuteUbergraph_QuestIcon_Outside
// 0x0004 (0x0004 - 0x0000)
struct QuestIcon_Outside_C_ExecuteUbergraph_QuestIcon_Outside final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestIcon_Outside_C_ExecuteUbergraph_QuestIcon_Outside) == 0x000004, "Wrong alignment on QuestIcon_Outside_C_ExecuteUbergraph_QuestIcon_Outside");
static_assert(sizeof(QuestIcon_Outside_C_ExecuteUbergraph_QuestIcon_Outside) == 0x000004, "Wrong size on QuestIcon_Outside_C_ExecuteUbergraph_QuestIcon_Outside");
static_assert(offsetof(QuestIcon_Outside_C_ExecuteUbergraph_QuestIcon_Outside, EntryPoint) == 0x000000, "Member 'QuestIcon_Outside_C_ExecuteUbergraph_QuestIcon_Outside::EntryPoint' has a wrong offset!");

// Function QuestIcon_Outside.QuestIcon_Outside_C.SetIconZOrder
// 0x0060 (0x0060 - 0x0000)
struct QuestIcon_Outside_C_SetIconZOrder final
{
public:
	TMap<EQuestStatus, ESBMiniMapIconType>        IconTypeList;                                      // 0x0000(0x0050)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	EQuestStatus                                  Status;                                            // 0x0050(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBMiniMapIconType                            CallFunc_Map_Find_Value;                           // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_708D[0x1];                                     // 0x0053(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetMiniMapIconZOrder_ReturnValue;         // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_setZOrder_CheckLog_ReturnValue;           // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestIcon_Outside_C_SetIconZOrder) == 0x000008, "Wrong alignment on QuestIcon_Outside_C_SetIconZOrder");
static_assert(sizeof(QuestIcon_Outside_C_SetIconZOrder) == 0x000060, "Wrong size on QuestIcon_Outside_C_SetIconZOrder");
static_assert(offsetof(QuestIcon_Outside_C_SetIconZOrder, IconTypeList) == 0x000000, "Member 'QuestIcon_Outside_C_SetIconZOrder::IconTypeList' has a wrong offset!");
static_assert(offsetof(QuestIcon_Outside_C_SetIconZOrder, Status) == 0x000050, "Member 'QuestIcon_Outside_C_SetIconZOrder::Status' has a wrong offset!");
static_assert(offsetof(QuestIcon_Outside_C_SetIconZOrder, CallFunc_Map_Find_Value) == 0x000051, "Member 'QuestIcon_Outside_C_SetIconZOrder::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(QuestIcon_Outside_C_SetIconZOrder, CallFunc_Map_Find_ReturnValue) == 0x000052, "Member 'QuestIcon_Outside_C_SetIconZOrder::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestIcon_Outside_C_SetIconZOrder, CallFunc_GetMiniMapIconZOrder_ReturnValue) == 0x000054, "Member 'QuestIcon_Outside_C_SetIconZOrder::CallFunc_GetMiniMapIconZOrder_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestIcon_Outside_C_SetIconZOrder, CallFunc_setZOrder_CheckLog_ReturnValue) == 0x000058, "Member 'QuestIcon_Outside_C_SetIconZOrder::CallFunc_setZOrder_CheckLog_ReturnValue' has a wrong offset!");

// Function QuestIcon_Outside.QuestIcon_Outside_C.SetIconTexture
// 0x0068 (0x0068 - 0x0000)
struct QuestIcon_Outside_C_SetIconTexture final
{
public:
	TMap<EQuestStatus, class UTexture2D*>         TextureList;                                       // 0x0000(0x0050)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	EQuestStatus                                  Key;                                               // 0x0050(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_708E[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_Map_Find_Value;                           // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestIcon_Outside_C_SetIconTexture) == 0x000008, "Wrong alignment on QuestIcon_Outside_C_SetIconTexture");
static_assert(sizeof(QuestIcon_Outside_C_SetIconTexture) == 0x000068, "Wrong size on QuestIcon_Outside_C_SetIconTexture");
static_assert(offsetof(QuestIcon_Outside_C_SetIconTexture, TextureList) == 0x000000, "Member 'QuestIcon_Outside_C_SetIconTexture::TextureList' has a wrong offset!");
static_assert(offsetof(QuestIcon_Outside_C_SetIconTexture, Key) == 0x000050, "Member 'QuestIcon_Outside_C_SetIconTexture::Key' has a wrong offset!");
static_assert(offsetof(QuestIcon_Outside_C_SetIconTexture, CallFunc_Map_Find_Value) == 0x000058, "Member 'QuestIcon_Outside_C_SetIconTexture::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(QuestIcon_Outside_C_SetIconTexture, CallFunc_Map_Find_ReturnValue) == 0x000060, "Member 'QuestIcon_Outside_C_SetIconTexture::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function QuestIcon_Outside.QuestIcon_Outside_C.SetQuestIcon
// 0x0790 (0x0790 - 0x0000)
struct QuestIcon_Outside_C_SetQuestIcon final
{
public:
	int32                                         QuestID;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EQuestStatus                                  TmpQuestStatus;                                    // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_708F[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TmpQuestId;                                        // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7090[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<EQuestStatus, ESBMiniMapIconType>        ReleaseFunctionsQuestIconType;                     // 0x0010(0x0050)(Edit, BlueprintVisible)
	TMap<EQuestStatus, ESBMiniMapIconType>        ClassQuestIconType;                                // 0x0060(0x0050)(Edit, BlueprintVisible)
	TMap<EQuestStatus, ESBMiniMapIconType>        ExtraQuestIconType;                                // 0x00B0(0x0050)(Edit, BlueprintVisible)
	TMap<EQuestStatus, ESBMiniMapIconType>        SubQuestIconType;                                  // 0x0100(0x0050)(Edit, BlueprintVisible)
	TMap<EQuestStatus, ESBMiniMapIconType>        MainQuestIconType;                                 // 0x0150(0x0050)(Edit, BlueprintVisible)
	TMap<EQuestStatus, class UTexture2D*>         ReleaseFunctionsQuestIcons;                        // 0x01A0(0x0050)(Edit, BlueprintVisible)
	TMap<EQuestStatus, class UTexture2D*>         ClassQuestIcons;                                   // 0x01F0(0x0050)(Edit, BlueprintVisible)
	TMap<EQuestStatus, class UTexture2D*>         ExtraQuestIcons;                                   // 0x0240(0x0050)(Edit, BlueprintVisible)
	TMap<EQuestStatus, class UTexture2D*>         SubQuestIcons;                                     // 0x0290(0x0050)(Edit, BlueprintVisible)
	TMap<EQuestStatus, class UTexture2D*>         MainQuestIcons;                                    // 0x02E0(0x0050)(Edit, BlueprintVisible)
	TMap<EQuestStatus, ESBMiniMapIconType>        K2Node_MakeVariable_MakeVariableOutput;            // 0x0330(0x0050)()
	TMap<EQuestStatus, ESBMiniMapIconType>        K2Node_MakeVariable_MakeVariableOutput_1;          // 0x0380(0x0050)()
	TMap<EQuestStatus, class UTexture2D*>         K2Node_MakeVariable_MakeVariableOutput_2;          // 0x03D0(0x0050)()
	TMap<EQuestStatus, class UTexture2D*>         K2Node_MakeVariable_MakeVariableOutput_3;          // 0x0420(0x0050)()
	TMap<EQuestStatus, class UTexture2D*>         K2Node_MakeVariable_MakeVariableOutput_4;          // 0x0470(0x0050)()
	TMap<EQuestStatus, class UTexture2D*>         K2Node_MakeVariable_MakeVariableOutput_5;          // 0x04C0(0x0050)()
	TMap<EQuestStatus, class UTexture2D*>         K2Node_MakeVariable_MakeVariableOutput_6;          // 0x0510(0x0050)()
	TMap<EQuestStatus, ESBMiniMapIconType>        K2Node_MakeVariable_MakeVariableOutput_7;          // 0x0560(0x0050)()
	struct FQuestMasterData                       CallFunc_FindQuestMasterData_QuestMasterData;      // 0x05B0(0x0118)()
	bool                                          CallFunc_FindQuestMasterData_Exist;                // 0x06C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EQuestStatus                                  CallFunc_GetQuestStatus_QuestStatus;               // 0x06C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x06CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x06CB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x06CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7091[0x3];                                     // 0x06CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x06D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckPreconditionByIndex_ReturnValue;     // 0x06D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x06D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7092[0x6];                                     // 0x06DA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<EQuestStatus, ESBMiniMapIconType>        K2Node_MakeVariable_MakeVariableOutput_8;          // 0x06E0(0x0050)()
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0730(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0731(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7093[0x6];                                     // 0x0732(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<EQuestStatus, ESBMiniMapIconType>        K2Node_MakeVariable_MakeVariableOutput_9;          // 0x0738(0x0050)()
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue_1;              // 0x0788(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x0789(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestIcon_Outside_C_SetQuestIcon) == 0x000008, "Wrong alignment on QuestIcon_Outside_C_SetQuestIcon");
static_assert(sizeof(QuestIcon_Outside_C_SetQuestIcon) == 0x000790, "Wrong size on QuestIcon_Outside_C_SetQuestIcon");
static_assert(offsetof(QuestIcon_Outside_C_SetQuestIcon, QuestID) == 0x000000, "Member 'QuestIcon_Outside_C_SetQuestIcon::QuestID' has a wrong offset!");
static_assert(offsetof(QuestIcon_Outside_C_SetQuestIcon, TmpQuestStatus) == 0x000004, "Member 'QuestIcon_Outside_C_SetQuestIcon::TmpQuestStatus' has a wrong offset!");
static_assert(offsetof(QuestIcon_Outside_C_SetQuestIcon, TmpQuestId) == 0x000008, "Member 'QuestIcon_Outside_C_SetQuestIcon::TmpQuestId' has a wrong offset!");
static_assert(offsetof(QuestIcon_Outside_C_SetQuestIcon, ReleaseFunctionsQuestIconType) == 0x000010, "Member 'QuestIcon_Outside_C_SetQuestIcon::ReleaseFunctionsQuestIconType' has a wrong offset!");
static_assert(offsetof(QuestIcon_Outside_C_SetQuestIcon, ClassQuestIconType) == 0x000060, "Member 'QuestIcon_Outside_C_SetQuestIcon::ClassQuestIconType' has a wrong offset!");
static_assert(offsetof(QuestIcon_Outside_C_SetQuestIcon, ExtraQuestIconType) == 0x0000B0, "Member 'QuestIcon_Outside_C_SetQuestIcon::ExtraQuestIconType' has a wrong offset!");
static_assert(offsetof(QuestIcon_Outside_C_SetQuestIcon, SubQuestIconType) == 0x000100, "Member 'QuestIcon_Outside_C_SetQuestIcon::SubQuestIconType' has a wrong offset!");
static_assert(offsetof(QuestIcon_Outside_C_SetQuestIcon, MainQuestIconType) == 0x000150, "Member 'QuestIcon_Outside_C_SetQuestIcon::MainQuestIconType' has a wrong offset!");
static_assert(offsetof(QuestIcon_Outside_C_SetQuestIcon, ReleaseFunctionsQuestIcons) == 0x0001A0, "Member 'QuestIcon_Outside_C_SetQuestIcon::ReleaseFunctionsQuestIcons' has a wrong offset!");
static_assert(offsetof(QuestIcon_Outside_C_SetQuestIcon, ClassQuestIcons) == 0x0001F0, "Member 'QuestIcon_Outside_C_SetQuestIcon::ClassQuestIcons' has a wrong offset!");
static_assert(offsetof(QuestIcon_Outside_C_SetQuestIcon, ExtraQuestIcons) == 0x000240, "Member 'QuestIcon_Outside_C_SetQuestIcon::ExtraQuestIcons' has a wrong offset!");
static_assert(offsetof(QuestIcon_Outside_C_SetQuestIcon, SubQuestIcons) == 0x000290, "Member 'QuestIcon_Outside_C_SetQuestIcon::SubQuestIcons' has a wrong offset!");
static_assert(offsetof(QuestIcon_Outside_C_SetQuestIcon, MainQuestIcons) == 0x0002E0, "Member 'QuestIcon_Outside_C_SetQuestIcon::MainQuestIcons' has a wrong offset!");
static_assert(offsetof(QuestIcon_Outside_C_SetQuestIcon, K2Node_MakeVariable_MakeVariableOutput) == 0x000330, "Member 'QuestIcon_Outside_C_SetQuestIcon::K2Node_MakeVariable_MakeVariableOutput' has a wrong offset!");
static_assert(offsetof(QuestIcon_Outside_C_SetQuestIcon, K2Node_MakeVariable_MakeVariableOutput_1) == 0x000380, "Member 'QuestIcon_Outside_C_SetQuestIcon::K2Node_MakeVariable_MakeVariableOutput_1' has a wrong offset!");
static_assert(offsetof(QuestIcon_Outside_C_SetQuestIcon, K2Node_MakeVariable_MakeVariableOutput_2) == 0x0003D0, "Member 'QuestIcon_Outside_C_SetQuestIcon::K2Node_MakeVariable_MakeVariableOutput_2' has a wrong offset!");
static_assert(offsetof(QuestIcon_Outside_C_SetQuestIcon, K2Node_MakeVariable_MakeVariableOutput_3) == 0x000420, "Member 'QuestIcon_Outside_C_SetQuestIcon::K2Node_MakeVariable_MakeVariableOutput_3' has a wrong offset!");
static_assert(offsetof(QuestIcon_Outside_C_SetQuestIcon, K2Node_MakeVariable_MakeVariableOutput_4) == 0x000470, "Member 'QuestIcon_Outside_C_SetQuestIcon::K2Node_MakeVariable_MakeVariableOutput_4' has a wrong offset!");
static_assert(offsetof(QuestIcon_Outside_C_SetQuestIcon, K2Node_MakeVariable_MakeVariableOutput_5) == 0x0004C0, "Member 'QuestIcon_Outside_C_SetQuestIcon::K2Node_MakeVariable_MakeVariableOutput_5' has a wrong offset!");
static_assert(offsetof(QuestIcon_Outside_C_SetQuestIcon, K2Node_MakeVariable_MakeVariableOutput_6) == 0x000510, "Member 'QuestIcon_Outside_C_SetQuestIcon::K2Node_MakeVariable_MakeVariableOutput_6' has a wrong offset!");
static_assert(offsetof(QuestIcon_Outside_C_SetQuestIcon, K2Node_MakeVariable_MakeVariableOutput_7) == 0x000560, "Member 'QuestIcon_Outside_C_SetQuestIcon::K2Node_MakeVariable_MakeVariableOutput_7' has a wrong offset!");
static_assert(offsetof(QuestIcon_Outside_C_SetQuestIcon, CallFunc_FindQuestMasterData_QuestMasterData) == 0x0005B0, "Member 'QuestIcon_Outside_C_SetQuestIcon::CallFunc_FindQuestMasterData_QuestMasterData' has a wrong offset!");
static_assert(offsetof(QuestIcon_Outside_C_SetQuestIcon, CallFunc_FindQuestMasterData_Exist) == 0x0006C8, "Member 'QuestIcon_Outside_C_SetQuestIcon::CallFunc_FindQuestMasterData_Exist' has a wrong offset!");
static_assert(offsetof(QuestIcon_Outside_C_SetQuestIcon, CallFunc_GetQuestStatus_QuestStatus) == 0x0006C9, "Member 'QuestIcon_Outside_C_SetQuestIcon::CallFunc_GetQuestStatus_QuestStatus' has a wrong offset!");
static_assert(offsetof(QuestIcon_Outside_C_SetQuestIcon, K2Node_SwitchEnum_CmpSuccess) == 0x0006CA, "Member 'QuestIcon_Outside_C_SetQuestIcon::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(QuestIcon_Outside_C_SetQuestIcon, CallFunc_Greater_IntInt_ReturnValue) == 0x0006CB, "Member 'QuestIcon_Outside_C_SetQuestIcon::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestIcon_Outside_C_SetQuestIcon, CallFunc_GetNetworkDataCache_IsValid) == 0x0006CC, "Member 'QuestIcon_Outside_C_SetQuestIcon::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(QuestIcon_Outside_C_SetQuestIcon, CallFunc_GetNetworkDataCache_ReturnValue) == 0x0006D0, "Member 'QuestIcon_Outside_C_SetQuestIcon::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestIcon_Outside_C_SetQuestIcon, CallFunc_CheckPreconditionByIndex_ReturnValue) == 0x0006D8, "Member 'QuestIcon_Outside_C_SetQuestIcon::CallFunc_CheckPreconditionByIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestIcon_Outside_C_SetQuestIcon, CallFunc_Not_PreBool_ReturnValue) == 0x0006D9, "Member 'QuestIcon_Outside_C_SetQuestIcon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestIcon_Outside_C_SetQuestIcon, K2Node_MakeVariable_MakeVariableOutput_8) == 0x0006E0, "Member 'QuestIcon_Outside_C_SetQuestIcon::K2Node_MakeVariable_MakeVariableOutput_8' has a wrong offset!");
static_assert(offsetof(QuestIcon_Outside_C_SetQuestIcon, CallFunc_GetVisibility_ReturnValue) == 0x000730, "Member 'QuestIcon_Outside_C_SetQuestIcon::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestIcon_Outside_C_SetQuestIcon, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000731, "Member 'QuestIcon_Outside_C_SetQuestIcon::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestIcon_Outside_C_SetQuestIcon, K2Node_MakeVariable_MakeVariableOutput_9) == 0x000738, "Member 'QuestIcon_Outside_C_SetQuestIcon::K2Node_MakeVariable_MakeVariableOutput_9' has a wrong offset!");
static_assert(offsetof(QuestIcon_Outside_C_SetQuestIcon, CallFunc_GetVisibility_ReturnValue_1) == 0x000788, "Member 'QuestIcon_Outside_C_SetQuestIcon::CallFunc_GetVisibility_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestIcon_Outside_C_SetQuestIcon, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x000789, "Member 'QuestIcon_Outside_C_SetQuestIcon::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");

// Function QuestIcon_Outside.QuestIcon_Outside_C.PlayAnim
// 0x0010 (0x0010 - 0x0000)
struct QuestIcon_Outside_C_PlayAnim final
{
public:
	float                                         StartAtTime;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PlaybackSpeed;                                     // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestIcon_Outside_C_PlayAnim) == 0x000008, "Wrong alignment on QuestIcon_Outside_C_PlayAnim");
static_assert(sizeof(QuestIcon_Outside_C_PlayAnim) == 0x000010, "Wrong size on QuestIcon_Outside_C_PlayAnim");
static_assert(offsetof(QuestIcon_Outside_C_PlayAnim, StartAtTime) == 0x000000, "Member 'QuestIcon_Outside_C_PlayAnim::StartAtTime' has a wrong offset!");
static_assert(offsetof(QuestIcon_Outside_C_PlayAnim, PlaybackSpeed) == 0x000004, "Member 'QuestIcon_Outside_C_PlayAnim::PlaybackSpeed' has a wrong offset!");
static_assert(offsetof(QuestIcon_Outside_C_PlayAnim, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'QuestIcon_Outside_C_PlayAnim::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function QuestIcon_Outside.QuestIcon_Outside_C.PauseAnim
// 0x0004 (0x0004 - 0x0000)
struct QuestIcon_Outside_C_PauseAnim final
{
public:
	float                                         CallFunc_PauseAnimation_ReturnValue;               // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestIcon_Outside_C_PauseAnim) == 0x000004, "Wrong alignment on QuestIcon_Outside_C_PauseAnim");
static_assert(sizeof(QuestIcon_Outside_C_PauseAnim) == 0x000004, "Wrong size on QuestIcon_Outside_C_PauseAnim");
static_assert(offsetof(QuestIcon_Outside_C_PauseAnim, CallFunc_PauseAnimation_ReturnValue) == 0x000000, "Member 'QuestIcon_Outside_C_PauseAnim::CallFunc_PauseAnimation_ReturnValue' has a wrong offset!");

}

