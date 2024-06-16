#pragma once

 

// Package: LibraryMenu

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "ELibraryMenuType_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function LibraryMenu.LibraryMenu_C.ExecuteUbergraph_LibraryMenu
// 0x01C8 (0x01C8 - 0x0000)
struct LibraryMenu_C_ExecuteUbergraph_LibraryMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool Result, TArray<struct FSBAchievementInfo>& AchievementList)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_1;             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_2;             // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_3;             // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_4;             // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_WasSuccessful;                        // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E08[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_RetCode;                              // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBLibraryPictureBookType                     K2Node_Event_type;                                 // 0x0030(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E09[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Event_MainPage;                             // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_SubPage;                              // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E0A[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x0040(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_ButtonId_1;             // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E0B[0x2];                                     // 0x004E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_5;             // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_6;             // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELibraryMenuType                              K2Node_CustomEvent_InputPin;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E0C[0x1];                                     // 0x006B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_7;             // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E0D[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E0E[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerAchievementComponent*          CallFunc_GetPlayerAchievementComponent_ReturnValue; // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAchievementsLoadedFromDB_ReturnValue;   // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x009A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E0F[0x1];                                     // 0x009B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_8;             // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_9;             // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_10;            // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Result_1;                       // 0x00AC(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E10[0x3];                                     // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBAchievementInfo>             K2Node_CustomEvent_AchievementList;                // 0x00B0(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_11;            // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_12;            // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_13;            // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E11[0x4];                                     // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E12[0x7];                                     // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBTheaterComponent*                    CallFunc_GetTheaterComponent_ReturnValue;          // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_14;            // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E13[0x4];                                     // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_GetLoadDemoList_ReturnValue;              // 0x00F8(0x0010)(ReferenceParm)
	class FString                                 K2Node_Event_InBookMarkType;                       // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ELibraryMenuType                              CallFunc_BookmarkTypeToMenueType_ReturnValue;      // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELibraryMenuType                              CallFunc_BookmarkTypeToMenueType_ReturnValue_1;    // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E14[0x2];                                     // 0x011A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_15;            // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0121(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E15[0x2];                                     // 0x0122(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_16;            // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELibraryMenuType                              Temp_byte_Variable;                                // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E16[0x3];                                     // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_ComponentBoundEvent_ButtonId;               // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E17[0x4];                                     // 0x0134(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_17;            // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0144(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E18[0x3];                                     // 0x0145(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_18;            // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_19;            // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELibraryMenuType                              Temp_byte_Variable_1;                              // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E19[0x3];                                     // 0x0151(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_1;                           // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0158(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E1A[0x3];                                     // 0x0159(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool Result, int32 RetCode)>   K2Node_CreateDelegate_OutputDelegate_1;            // 0x015C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x016C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E1B[0x3];                                     // 0x016D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBAchievementInfo>             CallFunc_GetAchievementList_ReturnValue;           // 0x0178(0x0010)(ConstParm, ReferenceParm)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsLoginBonusBtnEnable_Enable;             // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ELibraryMenuType                              Temp_byte_Variable_2;                              // 0x018A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E1C[0x1];                                     // 0x018B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_2;                           // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ValidAddLibraryPic_ReturnValue;           // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ELibraryMenuType                              Temp_byte_Variable_3;                              // 0x0191(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E1D[0x2];                                     // 0x0192(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default_3;                           // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerAchievementComponent*          CallFunc_GetPlayerAchievementComponent_ReturnValue_1; // 0x01A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Result;                         // 0x01A8(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E1E[0x3];                                     // 0x01A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_RetCode;                        // 0x01AC(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsRunRequiredDataInfoList_ReturnValue;    // 0x01B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E1F[0x6];                                     // 0x01B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue_1;      // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerAchievementComponent*          CallFunc_GetPlayerAchievementComponent_ReturnValue_2; // 0x01C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu) == 0x000008, "Wrong alignment on LibraryMenu_C_ExecuteUbergraph_LibraryMenu");
static_assert(sizeof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu) == 0x0001C8, "Wrong size on LibraryMenu_C_ExecuteUbergraph_LibraryMenu");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, EntryPoint) == 0x000000, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_MakeLiteralInt_ReturnValue) == 0x000004, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_MakeLiteralInt_ReturnValue_1) == 0x000018, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_MakeLiteralInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_MakeLiteralInt_ReturnValue_2) == 0x00001C, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_MakeLiteralInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_MakeLiteralInt_ReturnValue_3) == 0x000020, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_MakeLiteralInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_MakeLiteralInt_ReturnValue_4) == 0x000024, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_MakeLiteralInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_MakeLiteralByte_ReturnValue) == 0x000028, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, K2Node_Event_WasSuccessful) == 0x000029, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::K2Node_Event_WasSuccessful' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, K2Node_Event_RetCode) == 0x00002C, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::K2Node_Event_RetCode' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, K2Node_Event_type) == 0x000030, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::K2Node_Event_type' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, K2Node_Event_MainPage) == 0x000034, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::K2Node_Event_MainPage' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, K2Node_Event_SubPage) == 0x000038, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::K2Node_Event_SubPage' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, K2Node_Event_Animation) == 0x000040, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, K2Node_ComponentBoundEvent_ButtonId_1) == 0x000048, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::K2Node_ComponentBoundEvent_ButtonId_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x00004C, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, K2Node_SwitchInteger_CmpSuccess) == 0x00004D, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_PlayAnimation_ReturnValue) == 0x000050, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_PlayAnimation_ReturnValue_1) == 0x000058, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_MakeLiteralInt_ReturnValue_5) == 0x000060, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_MakeLiteralInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_MakeLiteralInt_ReturnValue_6) == 0x000064, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_MakeLiteralInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, K2Node_CustomEvent_InputPin) == 0x000068, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::K2Node_CustomEvent_InputPin' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000069, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_NotEqual_ByteByte_ReturnValue_1) == 0x00006A, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_NotEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_MakeLiteralInt_ReturnValue_7) == 0x00006C, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_MakeLiteralInt_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_GetPlayerController_ReturnValue) == 0x000070, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, Temp_int_Variable) == 0x000078, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000080, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, K2Node_DynamicCast_bSuccess) == 0x000088, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_GetPlayerAchievementComponent_ReturnValue) == 0x000090, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_GetPlayerAchievementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_IsAchievementsLoadedFromDB_ReturnValue) == 0x000098, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_IsAchievementsLoadedFromDB_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_IsValid_ReturnValue) == 0x000099, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00009A, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_Add_IntInt_ReturnValue) == 0x00009C, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_MakeLiteralInt_ReturnValue_8) == 0x0000A0, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_MakeLiteralInt_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_MakeLiteralInt_ReturnValue_9) == 0x0000A4, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_MakeLiteralInt_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_MakeLiteralInt_ReturnValue_10) == 0x0000A8, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_MakeLiteralInt_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, K2Node_CustomEvent_Result_1) == 0x0000AC, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::K2Node_CustomEvent_Result_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, K2Node_CustomEvent_AchievementList) == 0x0000B0, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::K2Node_CustomEvent_AchievementList' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_MakeLiteralInt_ReturnValue_11) == 0x0000C0, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_MakeLiteralInt_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_MakeLiteralInt_ReturnValue_12) == 0x0000C4, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_MakeLiteralInt_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_GetPlayerController_ReturnValue_1) == 0x0000C8, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_MakeLiteralInt_ReturnValue_13) == 0x0000D0, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_MakeLiteralInt_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x0000D8, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, K2Node_DynamicCast_bSuccess_1) == 0x0000E0, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_GetTheaterComponent_ReturnValue) == 0x0000E8, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_GetTheaterComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_MakeLiteralInt_ReturnValue_14) == 0x0000F0, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_MakeLiteralInt_ReturnValue_14' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_GetLoadDemoList_ReturnValue) == 0x0000F8, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_GetLoadDemoList_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, K2Node_Event_InBookMarkType) == 0x000108, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::K2Node_Event_InBookMarkType' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_BookmarkTypeToMenueType_ReturnValue) == 0x000118, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_BookmarkTypeToMenueType_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_BookmarkTypeToMenueType_ReturnValue_1) == 0x000119, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_BookmarkTypeToMenueType_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_MakeLiteralInt_ReturnValue_15) == 0x00011C, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_MakeLiteralInt_ReturnValue_15' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_GetVisibility_ReturnValue) == 0x000120, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000121, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_MakeLiteralInt_ReturnValue_16) == 0x000124, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_MakeLiteralInt_ReturnValue_16' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, Temp_byte_Variable) == 0x000128, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, K2Node_ComponentBoundEvent_ButtonId) == 0x00012C, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::K2Node_ComponentBoundEvent_ButtonId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, K2Node_Select_Default) == 0x000130, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_PlayAnimation_ReturnValue_2) == 0x000138, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_MakeLiteralInt_ReturnValue_17) == 0x000140, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_MakeLiteralInt_ReturnValue_17' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000144, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_MakeLiteralInt_ReturnValue_18) == 0x000148, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_MakeLiteralInt_ReturnValue_18' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_MakeLiteralInt_ReturnValue_19) == 0x00014C, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_MakeLiteralInt_ReturnValue_19' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, Temp_byte_Variable_1) == 0x000150, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, K2Node_Select_Default_1) == 0x000154, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, Temp_bool_Variable) == 0x000158, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, K2Node_CreateDelegate_OutputDelegate_1) == 0x00015C, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_GetNetworkDataCache_IsValid) == 0x00016C, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000170, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_GetAchievementList_ReturnValue) == 0x000178, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_GetAchievementList_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000188, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_IsLoginBonusBtnEnable_Enable) == 0x000189, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_IsLoginBonusBtnEnable_Enable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, Temp_byte_Variable_2) == 0x00018A, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, K2Node_Select_Default_2) == 0x00018C, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_ValidAddLibraryPic_ReturnValue) == 0x000190, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_ValidAddLibraryPic_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, Temp_byte_Variable_3) == 0x000191, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, K2Node_Select_Default_3) == 0x000194, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_GetSBPlayerController_ReturnValue) == 0x000198, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_GetPlayerAchievementComponent_ReturnValue_1) == 0x0001A0, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_GetPlayerAchievementComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, K2Node_CustomEvent_Result) == 0x0001A8, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, K2Node_CustomEvent_RetCode) == 0x0001AC, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::K2Node_CustomEvent_RetCode' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_IsValid_ReturnValue_1) == 0x0001B0, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_IsRunRequiredDataInfoList_ReturnValue) == 0x0001B1, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_IsRunRequiredDataInfoList_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_GetSBPlayerController_ReturnValue_1) == 0x0001B8, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_GetSBPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_ExecuteUbergraph_LibraryMenu, CallFunc_GetPlayerAchievementComponent_ReturnValue_2) == 0x0001C0, "Member 'LibraryMenu_C_ExecuteUbergraph_LibraryMenu::CallFunc_GetPlayerAchievementComponent_ReturnValue_2' has a wrong offset!");

// Function LibraryMenu.LibraryMenu_C.OnLoadAchievementDataDelegate_Event
// 0x0008 (0x0008 - 0x0000)
struct LibraryMenu_C_OnLoadAchievementDataDelegate_Event final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E20[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RetCode;                                           // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_C_OnLoadAchievementDataDelegate_Event) == 0x000004, "Wrong alignment on LibraryMenu_C_OnLoadAchievementDataDelegate_Event");
static_assert(sizeof(LibraryMenu_C_OnLoadAchievementDataDelegate_Event) == 0x000008, "Wrong size on LibraryMenu_C_OnLoadAchievementDataDelegate_Event");
static_assert(offsetof(LibraryMenu_C_OnLoadAchievementDataDelegate_Event, Result) == 0x000000, "Member 'LibraryMenu_C_OnLoadAchievementDataDelegate_Event::Result' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_OnLoadAchievementDataDelegate_Event, RetCode) == 0x000004, "Member 'LibraryMenu_C_OnLoadAchievementDataDelegate_Event::RetCode' has a wrong offset!");

// Function LibraryMenu.LibraryMenu_C.BndEvt__LibraryMenu_SubButtonList_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct LibraryMenu_C_BndEvt__LibraryMenu_SubButtonList_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature final
{
public:
	int32                                         ButtonId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_C_BndEvt__LibraryMenu_SubButtonList_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature) == 0x000004, "Wrong alignment on LibraryMenu_C_BndEvt__LibraryMenu_SubButtonList_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");
static_assert(sizeof(LibraryMenu_C_BndEvt__LibraryMenu_SubButtonList_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature) == 0x000004, "Wrong size on LibraryMenu_C_BndEvt__LibraryMenu_SubButtonList_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");
static_assert(offsetof(LibraryMenu_C_BndEvt__LibraryMenu_SubButtonList_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature, ButtonId) == 0x000000, "Member 'LibraryMenu_C_BndEvt__LibraryMenu_SubButtonList_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature::ButtonId' has a wrong offset!");

// Function LibraryMenu.LibraryMenu_C.OnSameMenuBookmarkAccessNew
// 0x0010 (0x0010 - 0x0000)
struct LibraryMenu_C_OnSameMenuBookmarkAccessNew final
{
public:
	class FString                                 InBookMarkType;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_C_OnSameMenuBookmarkAccessNew) == 0x000008, "Wrong alignment on LibraryMenu_C_OnSameMenuBookmarkAccessNew");
static_assert(sizeof(LibraryMenu_C_OnSameMenuBookmarkAccessNew) == 0x000010, "Wrong size on LibraryMenu_C_OnSameMenuBookmarkAccessNew");
static_assert(offsetof(LibraryMenu_C_OnSameMenuBookmarkAccessNew, InBookMarkType) == 0x000000, "Member 'LibraryMenu_C_OnSameMenuBookmarkAccessNew::InBookMarkType' has a wrong offset!");

// Function LibraryMenu.LibraryMenu_C.OnLoadAchivementDelegate_event
// 0x0018 (0x0018 - 0x0000)
struct LibraryMenu_C_OnLoadAchivementDelegate_event final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E21[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBAchievementInfo>             AchievementList;                                   // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(LibraryMenu_C_OnLoadAchivementDelegate_event) == 0x000008, "Wrong alignment on LibraryMenu_C_OnLoadAchivementDelegate_event");
static_assert(sizeof(LibraryMenu_C_OnLoadAchivementDelegate_event) == 0x000018, "Wrong size on LibraryMenu_C_OnLoadAchivementDelegate_event");
static_assert(offsetof(LibraryMenu_C_OnLoadAchivementDelegate_event, Result) == 0x000000, "Member 'LibraryMenu_C_OnLoadAchivementDelegate_event::Result' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_OnLoadAchivementDelegate_event, AchievementList) == 0x000008, "Member 'LibraryMenu_C_OnLoadAchivementDelegate_event::AchievementList' has a wrong offset!");

// Function LibraryMenu.LibraryMenu_C.SelectTab
// 0x0001 (0x0001 - 0x0000)
struct LibraryMenu_C_SelectTab final
{
public:
	ELibraryMenuType                              InputPin;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_C_SelectTab) == 0x000001, "Wrong alignment on LibraryMenu_C_SelectTab");
static_assert(sizeof(LibraryMenu_C_SelectTab) == 0x000001, "Wrong size on LibraryMenu_C_SelectTab");
static_assert(offsetof(LibraryMenu_C_SelectTab, InputPin) == 0x000000, "Member 'LibraryMenu_C_SelectTab::InputPin' has a wrong offset!");

// Function LibraryMenu.LibraryMenu_C.BndEvt__CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct LibraryMenu_C_BndEvt__CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature final
{
public:
	int32                                         ButtonId;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_C_BndEvt__CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature) == 0x000004, "Wrong alignment on LibraryMenu_C_BndEvt__CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");
static_assert(sizeof(LibraryMenu_C_BndEvt__CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature) == 0x000004, "Wrong size on LibraryMenu_C_BndEvt__CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");
static_assert(offsetof(LibraryMenu_C_BndEvt__CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature, ButtonId) == 0x000000, "Member 'LibraryMenu_C_BndEvt__CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature::ButtonId' has a wrong offset!");

// Function LibraryMenu.LibraryMenu_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct LibraryMenu_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_C_OnAnimationFinished) == 0x000008, "Wrong alignment on LibraryMenu_C_OnAnimationFinished");
static_assert(sizeof(LibraryMenu_C_OnAnimationFinished) == 0x000008, "Wrong size on LibraryMenu_C_OnAnimationFinished");
static_assert(offsetof(LibraryMenu_C_OnAnimationFinished, Animation) == 0x000000, "Member 'LibraryMenu_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function LibraryMenu.LibraryMenu_C.OnSubMenuUpdate
// 0x0008 (0x0008 - 0x0000)
struct LibraryMenu_C_OnSubMenuUpdate final
{
public:
	int32                                         MainPage;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SubPage;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_C_OnSubMenuUpdate) == 0x000004, "Wrong alignment on LibraryMenu_C_OnSubMenuUpdate");
static_assert(sizeof(LibraryMenu_C_OnSubMenuUpdate) == 0x000008, "Wrong size on LibraryMenu_C_OnSubMenuUpdate");
static_assert(offsetof(LibraryMenu_C_OnSubMenuUpdate, MainPage) == 0x000000, "Member 'LibraryMenu_C_OnSubMenuUpdate::MainPage' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_OnSubMenuUpdate, SubPage) == 0x000004, "Member 'LibraryMenu_C_OnSubMenuUpdate::SubPage' has a wrong offset!");

// Function LibraryMenu.LibraryMenu_C.GetIdListCallback
// 0x000C (0x000C - 0x0000)
struct LibraryMenu_C_GetIdListCallback final
{
public:
	bool                                          WasSuccessful;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E22[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         RetCode;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBLibraryPictureBookType                     Type;                                              // 0x0008(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_C_GetIdListCallback) == 0x000004, "Wrong alignment on LibraryMenu_C_GetIdListCallback");
static_assert(sizeof(LibraryMenu_C_GetIdListCallback) == 0x00000C, "Wrong size on LibraryMenu_C_GetIdListCallback");
static_assert(offsetof(LibraryMenu_C_GetIdListCallback, WasSuccessful) == 0x000000, "Member 'LibraryMenu_C_GetIdListCallback::WasSuccessful' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_GetIdListCallback, RetCode) == 0x000004, "Member 'LibraryMenu_C_GetIdListCallback::RetCode' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_GetIdListCallback, Type) == 0x000008, "Member 'LibraryMenu_C_GetIdListCallback::Type' has a wrong offset!");

// Function LibraryMenu.LibraryMenu_C.Setup Selected Menu
// 0x0088 (0x0088 - 0x0000)
struct LibraryMenu_C_Setup_Selected_Menu final
{
public:
	ELibraryMenuType                              InSelectedMenuType;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E23[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E24[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 MenuButtonListId)>       K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	class ULibraryMenu_Monster_C*                 CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULibraryMenu_Bookmark_C*                CallFunc_Create_ReturnValue_1;                     // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate_2;            // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate_3;            // 0x0048(0x0010)(ZeroConstructor, NoDestructor)
	class ULibraryMenu_Theater_C*                 CallFunc_Create_ReturnValue_2;                     // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E25[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E26[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ULibraryMenu_Achievement_C*             CallFunc_Create_ReturnValue_3;                     // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULibraryMenu_LoginBonus_C*              CallFunc_Create_ReturnValue_4;                     // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_C_Setup_Selected_Menu) == 0x000008, "Wrong alignment on LibraryMenu_C_Setup_Selected_Menu");
static_assert(sizeof(LibraryMenu_C_Setup_Selected_Menu) == 0x000088, "Wrong size on LibraryMenu_C_Setup_Selected_Menu");
static_assert(offsetof(LibraryMenu_C_Setup_Selected_Menu, InSelectedMenuType) == 0x000000, "Member 'LibraryMenu_C_Setup_Selected_Menu::InSelectedMenuType' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Selected_Menu, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'LibraryMenu_C_Setup_Selected_Menu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Selected_Menu, K2Node_SwitchEnum_CmpSuccess) == 0x000014, "Member 'LibraryMenu_C_Setup_Selected_Menu::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Selected_Menu, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'LibraryMenu_C_Setup_Selected_Menu::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Selected_Menu, CallFunc_Create_ReturnValue) == 0x000028, "Member 'LibraryMenu_C_Setup_Selected_Menu::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Selected_Menu, CallFunc_Create_ReturnValue_1) == 0x000030, "Member 'LibraryMenu_C_Setup_Selected_Menu::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Selected_Menu, K2Node_CreateDelegate_OutputDelegate_2) == 0x000038, "Member 'LibraryMenu_C_Setup_Selected_Menu::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Selected_Menu, K2Node_CreateDelegate_OutputDelegate_3) == 0x000048, "Member 'LibraryMenu_C_Setup_Selected_Menu::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Selected_Menu, CallFunc_Create_ReturnValue_2) == 0x000058, "Member 'LibraryMenu_C_Setup_Selected_Menu::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Selected_Menu, CallFunc_IsValid_ReturnValue) == 0x000060, "Member 'LibraryMenu_C_Setup_Selected_Menu::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Selected_Menu, CallFunc_AddChildToCanvas_ReturnValue) == 0x000068, "Member 'LibraryMenu_C_Setup_Selected_Menu::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Selected_Menu, CallFunc_IsValid_ReturnValue_1) == 0x000070, "Member 'LibraryMenu_C_Setup_Selected_Menu::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Selected_Menu, CallFunc_Create_ReturnValue_3) == 0x000078, "Member 'LibraryMenu_C_Setup_Selected_Menu::CallFunc_Create_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Selected_Menu, CallFunc_Create_ReturnValue_4) == 0x000080, "Member 'LibraryMenu_C_Setup_Selected_Menu::CallFunc_Create_ReturnValue_4' has a wrong offset!");

// Function LibraryMenu.LibraryMenu_C.SetupMenuButtonExcrametion
// 0x0308 (0x0308 - 0x0000)
struct LibraryMenu_C_SetupMenuButtonExcrametion final
{
public:
	int32                                         Selection;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDefaultShowAllRead;                              // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E27[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UDataTable*                             TutorialHelpDB;                                    // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCharactersLogComponent*              LogComponent;                                      // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CheckNameList;                                     // 0x0018(0x0010)(Edit, BlueprintVisible)
	TArray<int32>                                 CheckList;                                         // 0x0028(0x0010)(Edit, BlueprintVisible)
	class USBLibrarySaveManager*                  SaveManager;                                       // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectNum;                                         // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E28[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_1;             // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_2;             // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_3;             // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_4;             // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_5;             // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetCharacterId_ReturnValue_1;             // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_6;             // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_7;             // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0088(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ELibraryMenuType                              Temp_byte_Variable;                                // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAllReadDefaultBookmark_ReturnValue;     // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x008B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_8;             // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E29[0x3];                                     // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_9;             // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAllReadBookmark_ReturnValue;            // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E2A[0x3];                                     // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ELibraryMenuType                              Temp_byte_Variable_1;                              // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E2B[0x6];                                     // 0x00B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBCharactersLogComponent*              CallFunc_GetCharacterLogComponent_ReturnValue;     // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_1;                           // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E2C[0x4];                                     // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetLibrarySaveManager_IsValid;            // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E2D[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBLibrarySaveManager*                  CallFunc_GetLibrarySaveManager_ReturnValue;        // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E2E[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLibrarySaveData                     CallFunc_LoadLibraryData_ReturnValue;              // 0x00F0(0x0218)()
};
static_assert(alignof(LibraryMenu_C_SetupMenuButtonExcrametion) == 0x000008, "Wrong alignment on LibraryMenu_C_SetupMenuButtonExcrametion");
static_assert(sizeof(LibraryMenu_C_SetupMenuButtonExcrametion) == 0x000308, "Wrong size on LibraryMenu_C_SetupMenuButtonExcrametion");
static_assert(offsetof(LibraryMenu_C_SetupMenuButtonExcrametion, Selection) == 0x000000, "Member 'LibraryMenu_C_SetupMenuButtonExcrametion::Selection' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupMenuButtonExcrametion, IsDefaultShowAllRead) == 0x000004, "Member 'LibraryMenu_C_SetupMenuButtonExcrametion::IsDefaultShowAllRead' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupMenuButtonExcrametion, TutorialHelpDB) == 0x000008, "Member 'LibraryMenu_C_SetupMenuButtonExcrametion::TutorialHelpDB' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupMenuButtonExcrametion, LogComponent) == 0x000010, "Member 'LibraryMenu_C_SetupMenuButtonExcrametion::LogComponent' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupMenuButtonExcrametion, CheckNameList) == 0x000018, "Member 'LibraryMenu_C_SetupMenuButtonExcrametion::CheckNameList' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupMenuButtonExcrametion, CheckList) == 0x000028, "Member 'LibraryMenu_C_SetupMenuButtonExcrametion::CheckList' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupMenuButtonExcrametion, SaveManager) == 0x000038, "Member 'LibraryMenu_C_SetupMenuButtonExcrametion::SaveManager' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupMenuButtonExcrametion, SelectNum) == 0x000040, "Member 'LibraryMenu_C_SetupMenuButtonExcrametion::SelectNum' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupMenuButtonExcrametion, CallFunc_MakeLiteralInt_ReturnValue) == 0x000044, "Member 'LibraryMenu_C_SetupMenuButtonExcrametion::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupMenuButtonExcrametion, CallFunc_MakeLiteralByte_ReturnValue) == 0x000048, "Member 'LibraryMenu_C_SetupMenuButtonExcrametion::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupMenuButtonExcrametion, CallFunc_MakeLiteralInt_ReturnValue_1) == 0x00004C, "Member 'LibraryMenu_C_SetupMenuButtonExcrametion::CallFunc_MakeLiteralInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupMenuButtonExcrametion, CallFunc_MakeLiteralInt_ReturnValue_2) == 0x000050, "Member 'LibraryMenu_C_SetupMenuButtonExcrametion::CallFunc_MakeLiteralInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupMenuButtonExcrametion, CallFunc_MakeLiteralInt_ReturnValue_3) == 0x000054, "Member 'LibraryMenu_C_SetupMenuButtonExcrametion::CallFunc_MakeLiteralInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupMenuButtonExcrametion, CallFunc_MakeLiteralInt_ReturnValue_4) == 0x000058, "Member 'LibraryMenu_C_SetupMenuButtonExcrametion::CallFunc_MakeLiteralInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupMenuButtonExcrametion, CallFunc_MakeLiteralInt_ReturnValue_5) == 0x00005C, "Member 'LibraryMenu_C_SetupMenuButtonExcrametion::CallFunc_MakeLiteralInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupMenuButtonExcrametion, CallFunc_GetCharacterId_ReturnValue) == 0x000060, "Member 'LibraryMenu_C_SetupMenuButtonExcrametion::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupMenuButtonExcrametion, CallFunc_GetCharacterId_ReturnValue_1) == 0x000070, "Member 'LibraryMenu_C_SetupMenuButtonExcrametion::CallFunc_GetCharacterId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupMenuButtonExcrametion, CallFunc_MakeLiteralInt_ReturnValue_6) == 0x000080, "Member 'LibraryMenu_C_SetupMenuButtonExcrametion::CallFunc_MakeLiteralInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupMenuButtonExcrametion, CallFunc_MakeLiteralInt_ReturnValue_7) == 0x000084, "Member 'LibraryMenu_C_SetupMenuButtonExcrametion::CallFunc_MakeLiteralInt_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupMenuButtonExcrametion, Temp_bool_Variable) == 0x000088, "Member 'LibraryMenu_C_SetupMenuButtonExcrametion::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupMenuButtonExcrametion, Temp_byte_Variable) == 0x000089, "Member 'LibraryMenu_C_SetupMenuButtonExcrametion::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupMenuButtonExcrametion, CallFunc_IsAllReadDefaultBookmark_ReturnValue) == 0x00008A, "Member 'LibraryMenu_C_SetupMenuButtonExcrametion::CallFunc_IsAllReadDefaultBookmark_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupMenuButtonExcrametion, CallFunc_Not_PreBool_ReturnValue) == 0x00008B, "Member 'LibraryMenu_C_SetupMenuButtonExcrametion::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupMenuButtonExcrametion, CallFunc_MakeLiteralInt_ReturnValue_8) == 0x00008C, "Member 'LibraryMenu_C_SetupMenuButtonExcrametion::CallFunc_MakeLiteralInt_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupMenuButtonExcrametion, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000090, "Member 'LibraryMenu_C_SetupMenuButtonExcrametion::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupMenuButtonExcrametion, CallFunc_MakeLiteralInt_ReturnValue_9) == 0x000094, "Member 'LibraryMenu_C_SetupMenuButtonExcrametion::CallFunc_MakeLiteralInt_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupMenuButtonExcrametion, K2Node_Select_Default) == 0x000098, "Member 'LibraryMenu_C_SetupMenuButtonExcrametion::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupMenuButtonExcrametion, CallFunc_IsAllReadBookmark_ReturnValue) == 0x00009C, "Member 'LibraryMenu_C_SetupMenuButtonExcrametion::CallFunc_IsAllReadBookmark_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupMenuButtonExcrametion, CallFunc_GetPlayerController_ReturnValue) == 0x0000A0, "Member 'LibraryMenu_C_SetupMenuButtonExcrametion::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupMenuButtonExcrametion, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x0000A8, "Member 'LibraryMenu_C_SetupMenuButtonExcrametion::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupMenuButtonExcrametion, K2Node_DynamicCast_bSuccess) == 0x0000B0, "Member 'LibraryMenu_C_SetupMenuButtonExcrametion::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupMenuButtonExcrametion, Temp_byte_Variable_1) == 0x0000B1, "Member 'LibraryMenu_C_SetupMenuButtonExcrametion::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupMenuButtonExcrametion, CallFunc_GetCharacterLogComponent_ReturnValue) == 0x0000B8, "Member 'LibraryMenu_C_SetupMenuButtonExcrametion::CallFunc_GetCharacterLogComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupMenuButtonExcrametion, K2Node_Select_Default_1) == 0x0000C0, "Member 'LibraryMenu_C_SetupMenuButtonExcrametion::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupMenuButtonExcrametion, CallFunc_GetPlayerId_ReturnValue) == 0x0000C8, "Member 'LibraryMenu_C_SetupMenuButtonExcrametion::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupMenuButtonExcrametion, CallFunc_GetLibrarySaveManager_IsValid) == 0x0000D8, "Member 'LibraryMenu_C_SetupMenuButtonExcrametion::CallFunc_GetLibrarySaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupMenuButtonExcrametion, CallFunc_GetLibrarySaveManager_ReturnValue) == 0x0000E0, "Member 'LibraryMenu_C_SetupMenuButtonExcrametion::CallFunc_GetLibrarySaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupMenuButtonExcrametion, K2Node_SwitchInteger_CmpSuccess) == 0x0000E8, "Member 'LibraryMenu_C_SetupMenuButtonExcrametion::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupMenuButtonExcrametion, CallFunc_LoadLibraryData_ReturnValue) == 0x0000F0, "Member 'LibraryMenu_C_SetupMenuButtonExcrametion::CallFunc_LoadLibraryData_ReturnValue' has a wrong offset!");

// Function LibraryMenu.LibraryMenu_C.SetupAchievementButtonExcrametion
// 0x0068 (0x0068 - 0x0000)
struct LibraryMenu_C_SetupAchievementButtonExcrametion final
{
public:
	TArray<int32>                                 NewLocalVar_0;                                     // 0x0000(0x0010)(Edit, BlueprintVisible)
	TArray<int32>                                 CheckList;                                         // 0x0010(0x0010)(Edit, BlueprintVisible)
	class USBLibrarySaveManager*                  SaveManager;                                       // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELibraryMenuType                              Temp_byte_Variable;                                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E2F[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_1;             // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_2;             // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E30[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_3;             // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELibraryMenuType                              Temp_byte_Variable_1;                              // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNewInformationAchievementLibrary_ReturnValue; // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E31[0x1];                                     // 0x0043(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_4;             // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_5;             // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_6;             // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_7;             // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E32[0x3];                                     // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_8;             // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_9;             // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_1;                           // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_C_SetupAchievementButtonExcrametion) == 0x000008, "Wrong alignment on LibraryMenu_C_SetupAchievementButtonExcrametion");
static_assert(sizeof(LibraryMenu_C_SetupAchievementButtonExcrametion) == 0x000068, "Wrong size on LibraryMenu_C_SetupAchievementButtonExcrametion");
static_assert(offsetof(LibraryMenu_C_SetupAchievementButtonExcrametion, NewLocalVar_0) == 0x000000, "Member 'LibraryMenu_C_SetupAchievementButtonExcrametion::NewLocalVar_0' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupAchievementButtonExcrametion, CheckList) == 0x000010, "Member 'LibraryMenu_C_SetupAchievementButtonExcrametion::CheckList' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupAchievementButtonExcrametion, SaveManager) == 0x000020, "Member 'LibraryMenu_C_SetupAchievementButtonExcrametion::SaveManager' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupAchievementButtonExcrametion, Temp_byte_Variable) == 0x000028, "Member 'LibraryMenu_C_SetupAchievementButtonExcrametion::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupAchievementButtonExcrametion, CallFunc_MakeLiteralInt_ReturnValue) == 0x00002C, "Member 'LibraryMenu_C_SetupAchievementButtonExcrametion::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupAchievementButtonExcrametion, CallFunc_MakeLiteralInt_ReturnValue_1) == 0x000030, "Member 'LibraryMenu_C_SetupAchievementButtonExcrametion::CallFunc_MakeLiteralInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupAchievementButtonExcrametion, CallFunc_MakeLiteralInt_ReturnValue_2) == 0x000034, "Member 'LibraryMenu_C_SetupAchievementButtonExcrametion::CallFunc_MakeLiteralInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupAchievementButtonExcrametion, CallFunc_MakeLiteralByte_ReturnValue) == 0x000038, "Member 'LibraryMenu_C_SetupAchievementButtonExcrametion::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupAchievementButtonExcrametion, CallFunc_MakeLiteralInt_ReturnValue_3) == 0x00003C, "Member 'LibraryMenu_C_SetupAchievementButtonExcrametion::CallFunc_MakeLiteralInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupAchievementButtonExcrametion, Temp_byte_Variable_1) == 0x000040, "Member 'LibraryMenu_C_SetupAchievementButtonExcrametion::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupAchievementButtonExcrametion, CallFunc_IsNewInformationAchievementLibrary_ReturnValue) == 0x000041, "Member 'LibraryMenu_C_SetupAchievementButtonExcrametion::CallFunc_IsNewInformationAchievementLibrary_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupAchievementButtonExcrametion, CallFunc_Not_PreBool_ReturnValue) == 0x000042, "Member 'LibraryMenu_C_SetupAchievementButtonExcrametion::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupAchievementButtonExcrametion, CallFunc_MakeLiteralInt_ReturnValue_4) == 0x000044, "Member 'LibraryMenu_C_SetupAchievementButtonExcrametion::CallFunc_MakeLiteralInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupAchievementButtonExcrametion, CallFunc_MakeLiteralInt_ReturnValue_5) == 0x000048, "Member 'LibraryMenu_C_SetupAchievementButtonExcrametion::CallFunc_MakeLiteralInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupAchievementButtonExcrametion, CallFunc_MakeLiteralInt_ReturnValue_6) == 0x00004C, "Member 'LibraryMenu_C_SetupAchievementButtonExcrametion::CallFunc_MakeLiteralInt_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupAchievementButtonExcrametion, CallFunc_MakeLiteralInt_ReturnValue_7) == 0x000050, "Member 'LibraryMenu_C_SetupAchievementButtonExcrametion::CallFunc_MakeLiteralInt_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupAchievementButtonExcrametion, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000054, "Member 'LibraryMenu_C_SetupAchievementButtonExcrametion::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupAchievementButtonExcrametion, CallFunc_MakeLiteralInt_ReturnValue_8) == 0x000058, "Member 'LibraryMenu_C_SetupAchievementButtonExcrametion::CallFunc_MakeLiteralInt_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupAchievementButtonExcrametion, CallFunc_MakeLiteralInt_ReturnValue_9) == 0x00005C, "Member 'LibraryMenu_C_SetupAchievementButtonExcrametion::CallFunc_MakeLiteralInt_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupAchievementButtonExcrametion, K2Node_Select_Default) == 0x000060, "Member 'LibraryMenu_C_SetupAchievementButtonExcrametion::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupAchievementButtonExcrametion, K2Node_Select_Default_1) == 0x000064, "Member 'LibraryMenu_C_SetupAchievementButtonExcrametion::K2Node_Select_Default_1' has a wrong offset!");

// Function LibraryMenu.LibraryMenu_C.SetupTheaterButtonExcrametion
// 0x0278 (0x0278 - 0x0000)
struct LibraryMenu_C_SetupTheaterButtonExcrametion final
{
public:
	class USBLibrarySaveManager*                  L_SaveManager;                                     // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         L_BtnId;                                           // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_1;             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_2;             // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_3;             // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_4;             // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetReadDemoIdList_ReturnValue;            // 0x0020(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsReadNameList_ReturnValue;               // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ELibraryMenuType                              Temp_byte_Variable;                                // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E33[0x5];                                     // 0x0033(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetLibrarySaveManager_IsValid;            // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E34[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBLibrarySaveManager*                  CallFunc_GetLibrarySaveManager_ReturnValue;        // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E35[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLibrarySaveData                     CallFunc_LoadLibraryData_ReturnValue;              // 0x0060(0x0218)()
};
static_assert(alignof(LibraryMenu_C_SetupTheaterButtonExcrametion) == 0x000008, "Wrong alignment on LibraryMenu_C_SetupTheaterButtonExcrametion");
static_assert(sizeof(LibraryMenu_C_SetupTheaterButtonExcrametion) == 0x000278, "Wrong size on LibraryMenu_C_SetupTheaterButtonExcrametion");
static_assert(offsetof(LibraryMenu_C_SetupTheaterButtonExcrametion, L_SaveManager) == 0x000000, "Member 'LibraryMenu_C_SetupTheaterButtonExcrametion::L_SaveManager' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupTheaterButtonExcrametion, L_BtnId) == 0x000008, "Member 'LibraryMenu_C_SetupTheaterButtonExcrametion::L_BtnId' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupTheaterButtonExcrametion, CallFunc_MakeLiteralInt_ReturnValue) == 0x00000C, "Member 'LibraryMenu_C_SetupTheaterButtonExcrametion::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupTheaterButtonExcrametion, CallFunc_MakeLiteralInt_ReturnValue_1) == 0x000010, "Member 'LibraryMenu_C_SetupTheaterButtonExcrametion::CallFunc_MakeLiteralInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupTheaterButtonExcrametion, CallFunc_MakeLiteralInt_ReturnValue_2) == 0x000014, "Member 'LibraryMenu_C_SetupTheaterButtonExcrametion::CallFunc_MakeLiteralInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupTheaterButtonExcrametion, CallFunc_MakeLiteralInt_ReturnValue_3) == 0x000018, "Member 'LibraryMenu_C_SetupTheaterButtonExcrametion::CallFunc_MakeLiteralInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupTheaterButtonExcrametion, CallFunc_MakeLiteralInt_ReturnValue_4) == 0x00001C, "Member 'LibraryMenu_C_SetupTheaterButtonExcrametion::CallFunc_MakeLiteralInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupTheaterButtonExcrametion, CallFunc_GetReadDemoIdList_ReturnValue) == 0x000020, "Member 'LibraryMenu_C_SetupTheaterButtonExcrametion::CallFunc_GetReadDemoIdList_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupTheaterButtonExcrametion, CallFunc_IsReadNameList_ReturnValue) == 0x000030, "Member 'LibraryMenu_C_SetupTheaterButtonExcrametion::CallFunc_IsReadNameList_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupTheaterButtonExcrametion, CallFunc_Not_PreBool_ReturnValue) == 0x000031, "Member 'LibraryMenu_C_SetupTheaterButtonExcrametion::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupTheaterButtonExcrametion, Temp_byte_Variable) == 0x000032, "Member 'LibraryMenu_C_SetupTheaterButtonExcrametion::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupTheaterButtonExcrametion, CallFunc_GetPlayerId_ReturnValue) == 0x000038, "Member 'LibraryMenu_C_SetupTheaterButtonExcrametion::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupTheaterButtonExcrametion, CallFunc_GetLibrarySaveManager_IsValid) == 0x000048, "Member 'LibraryMenu_C_SetupTheaterButtonExcrametion::CallFunc_GetLibrarySaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupTheaterButtonExcrametion, CallFunc_GetLibrarySaveManager_ReturnValue) == 0x000050, "Member 'LibraryMenu_C_SetupTheaterButtonExcrametion::CallFunc_GetLibrarySaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupTheaterButtonExcrametion, K2Node_Select_Default) == 0x000058, "Member 'LibraryMenu_C_SetupTheaterButtonExcrametion::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupTheaterButtonExcrametion, CallFunc_LoadLibraryData_ReturnValue) == 0x000060, "Member 'LibraryMenu_C_SetupTheaterButtonExcrametion::CallFunc_LoadLibraryData_ReturnValue' has a wrong offset!");

// Function LibraryMenu.LibraryMenu_C.RefleshNewIcon
// 0x0020 (0x0020 - 0x0000)
struct LibraryMenu_C_RefleshNewIcon final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E36[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class ISBCommandMenuInterface> K2Node_DynamicCast_AsSBCommand_Menu_Interface;     // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_C_RefleshNewIcon) == 0x000008, "Wrong alignment on LibraryMenu_C_RefleshNewIcon");
static_assert(sizeof(LibraryMenu_C_RefleshNewIcon) == 0x000020, "Wrong size on LibraryMenu_C_RefleshNewIcon");
static_assert(offsetof(LibraryMenu_C_RefleshNewIcon, Param_Index) == 0x000000, "Member 'LibraryMenu_C_RefleshNewIcon::Param_Index' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_RefleshNewIcon, K2Node_DynamicCast_AsSBCommand_Menu_Interface) == 0x000008, "Member 'LibraryMenu_C_RefleshNewIcon::K2Node_DynamicCast_AsSBCommand_Menu_Interface' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_RefleshNewIcon, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'LibraryMenu_C_RefleshNewIcon::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function LibraryMenu.LibraryMenu_C.Set Title And Help Text Id
// 0x0028 (0x0028 - 0x0000)
struct LibraryMenu_C_Set_Title_And_Help_Text_Id final
{
public:
	ELibraryMenuType                              InSelectedMenuType;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E37[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InSubIndex;                                        // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E38[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_C_Set_Title_And_Help_Text_Id) == 0x000004, "Wrong alignment on LibraryMenu_C_Set_Title_And_Help_Text_Id");
static_assert(sizeof(LibraryMenu_C_Set_Title_And_Help_Text_Id) == 0x000028, "Wrong size on LibraryMenu_C_Set_Title_And_Help_Text_Id");
static_assert(offsetof(LibraryMenu_C_Set_Title_And_Help_Text_Id, InSelectedMenuType) == 0x000000, "Member 'LibraryMenu_C_Set_Title_And_Help_Text_Id::InSelectedMenuType' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Set_Title_And_Help_Text_Id, InSubIndex) == 0x000004, "Member 'LibraryMenu_C_Set_Title_And_Help_Text_Id::InSubIndex' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Set_Title_And_Help_Text_Id, Temp_int_Variable) == 0x000008, "Member 'LibraryMenu_C_Set_Title_And_Help_Text_Id::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Set_Title_And_Help_Text_Id, K2Node_SwitchEnum_CmpSuccess) == 0x00000C, "Member 'LibraryMenu_C_Set_Title_And_Help_Text_Id::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Set_Title_And_Help_Text_Id, Temp_int_Variable_1) == 0x000010, "Member 'LibraryMenu_C_Set_Title_And_Help_Text_Id::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Set_Title_And_Help_Text_Id, Temp_int_Variable_2) == 0x000014, "Member 'LibraryMenu_C_Set_Title_And_Help_Text_Id::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Set_Title_And_Help_Text_Id, Temp_int_Variable_3) == 0x000018, "Member 'LibraryMenu_C_Set_Title_And_Help_Text_Id::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Set_Title_And_Help_Text_Id, Temp_int_Variable_4) == 0x00001C, "Member 'LibraryMenu_C_Set_Title_And_Help_Text_Id::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Set_Title_And_Help_Text_Id, Temp_int_Variable_5) == 0x000020, "Member 'LibraryMenu_C_Set_Title_And_Help_Text_Id::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Set_Title_And_Help_Text_Id, K2Node_Select_Default) == 0x000024, "Member 'LibraryMenu_C_Set_Title_And_Help_Text_Id::K2Node_Select_Default' has a wrong offset!");

// Function LibraryMenu.LibraryMenu_C.BookmarkTypeToMenueType
// 0x0018 (0x0018 - 0x0000)
struct LibraryMenu_C_BookmarkTypeToMenueType final
{
public:
	class FString                                 Key;                                               // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	ELibraryMenuType                              ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELibraryMenuType                              L_LibMenuType_Dummy;                               // 0x0011(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELibraryMenuType                              CallFunc_Map_Find_Value;                           // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_C_BookmarkTypeToMenueType) == 0x000008, "Wrong alignment on LibraryMenu_C_BookmarkTypeToMenueType");
static_assert(sizeof(LibraryMenu_C_BookmarkTypeToMenueType) == 0x000018, "Wrong size on LibraryMenu_C_BookmarkTypeToMenueType");
static_assert(offsetof(LibraryMenu_C_BookmarkTypeToMenueType, Key) == 0x000000, "Member 'LibraryMenu_C_BookmarkTypeToMenueType::Key' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_BookmarkTypeToMenueType, ReturnValue) == 0x000010, "Member 'LibraryMenu_C_BookmarkTypeToMenueType::ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_BookmarkTypeToMenueType, L_LibMenuType_Dummy) == 0x000011, "Member 'LibraryMenu_C_BookmarkTypeToMenueType::L_LibMenuType_Dummy' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_BookmarkTypeToMenueType, CallFunc_Map_Find_Value) == 0x000012, "Member 'LibraryMenu_C_BookmarkTypeToMenueType::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_BookmarkTypeToMenueType, CallFunc_Map_Find_ReturnValue) == 0x000013, "Member 'LibraryMenu_C_BookmarkTypeToMenueType::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_BookmarkTypeToMenueType, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000014, "Member 'LibraryMenu_C_BookmarkTypeToMenueType::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function LibraryMenu.LibraryMenu_C.SetupSelectedSubMenu
// 0x00B8 (0x00B8 - 0x0000)
struct LibraryMenu_C_SetupSelectedSubMenu final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E39[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate_1;            // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_8E3A[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ULibraryMenu_Imagine_C*                 CallFunc_Create_ReturnValue;                       // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_1;             // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_2;             // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELibraryMenuType                              Temp_byte_Variable;                                // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E3B[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate_2;            // 0x0044(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_3;             // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_4;             // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E3C[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ULibraryMenu_Monster_C*                 CallFunc_Create_ReturnValue_1;                     // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULibraryMenu_Item_C*                    CallFunc_Create_ReturnValue_2;                     // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate_3;            // 0x0074(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E3D[0x3];                                     // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_AddChildToCanvas_ReturnValue;             // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate_4;            // 0x0090(0x0010)(ZeroConstructor, NoDestructor)
	class ULibraryMenu_Weapon_C*                  CallFunc_Create_ReturnValue_3;                     // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULibraryMenu_Imagine_C*                 CallFunc_Create_ReturnValue_4;                     // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_C_SetupSelectedSubMenu) == 0x000008, "Wrong alignment on LibraryMenu_C_SetupSelectedSubMenu");
static_assert(sizeof(LibraryMenu_C_SetupSelectedSubMenu) == 0x0000B8, "Wrong size on LibraryMenu_C_SetupSelectedSubMenu");
static_assert(offsetof(LibraryMenu_C_SetupSelectedSubMenu, Param_Index) == 0x000000, "Member 'LibraryMenu_C_SetupSelectedSubMenu::Param_Index' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupSelectedSubMenu, CallFunc_MakeLiteralInt_ReturnValue) == 0x000004, "Member 'LibraryMenu_C_SetupSelectedSubMenu::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupSelectedSubMenu, K2Node_SwitchInteger_CmpSuccess) == 0x000008, "Member 'LibraryMenu_C_SetupSelectedSubMenu::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupSelectedSubMenu, CallFunc_IsValid_ReturnValue) == 0x000009, "Member 'LibraryMenu_C_SetupSelectedSubMenu::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupSelectedSubMenu, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'LibraryMenu_C_SetupSelectedSubMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupSelectedSubMenu, K2Node_CreateDelegate_OutputDelegate_1) == 0x00001C, "Member 'LibraryMenu_C_SetupSelectedSubMenu::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupSelectedSubMenu, CallFunc_Create_ReturnValue) == 0x000030, "Member 'LibraryMenu_C_SetupSelectedSubMenu::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupSelectedSubMenu, CallFunc_MakeLiteralInt_ReturnValue_1) == 0x000038, "Member 'LibraryMenu_C_SetupSelectedSubMenu::CallFunc_MakeLiteralInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupSelectedSubMenu, CallFunc_MakeLiteralInt_ReturnValue_2) == 0x00003C, "Member 'LibraryMenu_C_SetupSelectedSubMenu::CallFunc_MakeLiteralInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupSelectedSubMenu, Temp_byte_Variable) == 0x000040, "Member 'LibraryMenu_C_SetupSelectedSubMenu::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupSelectedSubMenu, K2Node_CreateDelegate_OutputDelegate_2) == 0x000044, "Member 'LibraryMenu_C_SetupSelectedSubMenu::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupSelectedSubMenu, CallFunc_MakeLiteralInt_ReturnValue_3) == 0x000054, "Member 'LibraryMenu_C_SetupSelectedSubMenu::CallFunc_MakeLiteralInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupSelectedSubMenu, CallFunc_MakeLiteralInt_ReturnValue_4) == 0x000058, "Member 'LibraryMenu_C_SetupSelectedSubMenu::CallFunc_MakeLiteralInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupSelectedSubMenu, CallFunc_MakeLiteralByte_ReturnValue) == 0x00005C, "Member 'LibraryMenu_C_SetupSelectedSubMenu::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupSelectedSubMenu, CallFunc_Create_ReturnValue_1) == 0x000060, "Member 'LibraryMenu_C_SetupSelectedSubMenu::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupSelectedSubMenu, CallFunc_Create_ReturnValue_2) == 0x000068, "Member 'LibraryMenu_C_SetupSelectedSubMenu::CallFunc_Create_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupSelectedSubMenu, K2Node_Select_Default) == 0x000070, "Member 'LibraryMenu_C_SetupSelectedSubMenu::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupSelectedSubMenu, K2Node_CreateDelegate_OutputDelegate_3) == 0x000074, "Member 'LibraryMenu_C_SetupSelectedSubMenu::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupSelectedSubMenu, CallFunc_IsValid_ReturnValue_1) == 0x000084, "Member 'LibraryMenu_C_SetupSelectedSubMenu::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupSelectedSubMenu, CallFunc_AddChildToCanvas_ReturnValue) == 0x000088, "Member 'LibraryMenu_C_SetupSelectedSubMenu::CallFunc_AddChildToCanvas_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupSelectedSubMenu, K2Node_CreateDelegate_OutputDelegate_4) == 0x000090, "Member 'LibraryMenu_C_SetupSelectedSubMenu::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupSelectedSubMenu, CallFunc_Create_ReturnValue_3) == 0x0000A0, "Member 'LibraryMenu_C_SetupSelectedSubMenu::CallFunc_Create_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupSelectedSubMenu, CallFunc_Create_ReturnValue_4) == 0x0000A8, "Member 'LibraryMenu_C_SetupSelectedSubMenu::CallFunc_Create_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_SetupSelectedSubMenu, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x0000B0, "Member 'LibraryMenu_C_SetupSelectedSubMenu::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");

// Function LibraryMenu.LibraryMenu_C.GetCharacterAchievementData
// 0x0034 (0x0034 - 0x0000)
struct LibraryMenu_C_GetCharacterAchievementData final
{
public:
	int32                                         InputPin;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBAchievementInfo                     Output;                                            // 0x0004(0x0004)(Parm, OutParm, NoDestructor)
	int32                                         Idx;                                               // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E3E[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E3F[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBAchievementInfo                     K2Node_MakeStruct_SBAchievementInfo;               // 0x001C(0x0004)(NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBAchievementInfo                     CallFunc_Array_Get_Item;                           // 0x0024(0x0004)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x002F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSBAchievementInfo                     CallFunc_Array_Get_Item_1;                         // 0x0030(0x0004)(NoDestructor)
};
static_assert(alignof(LibraryMenu_C_GetCharacterAchievementData) == 0x000004, "Wrong alignment on LibraryMenu_C_GetCharacterAchievementData");
static_assert(sizeof(LibraryMenu_C_GetCharacterAchievementData) == 0x000034, "Wrong size on LibraryMenu_C_GetCharacterAchievementData");
static_assert(offsetof(LibraryMenu_C_GetCharacterAchievementData, InputPin) == 0x000000, "Member 'LibraryMenu_C_GetCharacterAchievementData::InputPin' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_GetCharacterAchievementData, Output) == 0x000004, "Member 'LibraryMenu_C_GetCharacterAchievementData::Output' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_GetCharacterAchievementData, Idx) == 0x000008, "Member 'LibraryMenu_C_GetCharacterAchievementData::Idx' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_GetCharacterAchievementData, Temp_bool_True_if_break_was_hit_Variable) == 0x00000C, "Member 'LibraryMenu_C_GetCharacterAchievementData::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_GetCharacterAchievementData, Temp_int_Array_Index_Variable) == 0x000010, "Member 'LibraryMenu_C_GetCharacterAchievementData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_GetCharacterAchievementData, CallFunc_Not_PreBool_ReturnValue) == 0x000014, "Member 'LibraryMenu_C_GetCharacterAchievementData::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_GetCharacterAchievementData, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'LibraryMenu_C_GetCharacterAchievementData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_GetCharacterAchievementData, K2Node_MakeStruct_SBAchievementInfo) == 0x00001C, "Member 'LibraryMenu_C_GetCharacterAchievementData::K2Node_MakeStruct_SBAchievementInfo' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_GetCharacterAchievementData, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'LibraryMenu_C_GetCharacterAchievementData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_GetCharacterAchievementData, CallFunc_Array_Get_Item) == 0x000024, "Member 'LibraryMenu_C_GetCharacterAchievementData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_GetCharacterAchievementData, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'LibraryMenu_C_GetCharacterAchievementData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_GetCharacterAchievementData, CallFunc_Less_IntInt_ReturnValue) == 0x00002C, "Member 'LibraryMenu_C_GetCharacterAchievementData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_GetCharacterAchievementData, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00002D, "Member 'LibraryMenu_C_GetCharacterAchievementData::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_GetCharacterAchievementData, CallFunc_BooleanAND_ReturnValue) == 0x00002E, "Member 'LibraryMenu_C_GetCharacterAchievementData::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_GetCharacterAchievementData, CallFunc_NotEqual_IntInt_ReturnValue) == 0x00002F, "Member 'LibraryMenu_C_GetCharacterAchievementData::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_GetCharacterAchievementData, CallFunc_Array_Get_Item_1) == 0x000030, "Member 'LibraryMenu_C_GetCharacterAchievementData::CallFunc_Array_Get_Item_1' has a wrong offset!");

// Function LibraryMenu.LibraryMenu_C.Setup Library Button Excrametion
// 0x0358 (0x0358 - 0x0000)
struct LibraryMenu_C_Setup_Library_Button_Excrametion final
{
public:
	bool                                          MainTabNewIconVisible;                             // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Excrametion;                                       // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E40[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBLibraryEnemyData>            EnemyList;                                         // 0x0008(0x0010)(Edit, BlueprintVisible)
	class USBLibrarySaveManager*                  SaveManager;                                       // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0020(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ELibraryMenuType                              Temp_byte_Variable;                                // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0022(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0023(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ValidAddLibraryPic_ReturnValue;           // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_3;                              // 0x0025(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E41[0x2];                                     // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNewInformationEnemyLibrary_ReturnValue; // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E42[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           K2Node_MakeArray_Array;                            // 0x0030(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_1;             // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E43[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue;               // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FName>                           K2Node_MakeArray_Array_1;                          // 0x0058(0x0010)(ConstParm, ReferenceParm)
	TArray<bool>                                  CallFunc_GetReadImagineCategoryList_ReturnValue;   // 0x0068(0x0010)(ReferenceParm)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_2;             // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E44[0x3];                                     // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue_1;             // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_3;             // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E45[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<bool>                                  CallFunc_GetReadImagineCategoryList_ReturnValue_1; // 0x0098(0x0010)(ReferenceParm)
	bool                                          CallFunc_Array_Contains_ReturnValue_1;             // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E46[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue_2;             // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<ESBClassType>                          CallFunc_GetSortedPlayerClassList_ReturnValue;     // 0x00C0(0x0010)(ReferenceParm)
	int32                                         CallFunc_MakeLiteralInt_ReturnValue_4;             // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E47[0x4];                                     // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<bool>                                  CallFunc_GetReadWeaponCategoryList_ReturnValue;    // 0x00D8(0x0010)(ReferenceParm)
	bool                                          CallFunc_Array_Contains_ReturnValue_2;             // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x00E9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E48[0x2];                                     // 0x00EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E49[0x7];                                     // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetCharacterId_ReturnValue_3;             // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<bool>                                  CallFunc_GetReadItemCategoryList_ReturnValue;      // 0x0108(0x0010)(ReferenceParm)
	bool                                          CallFunc_Array_Contains_ReturnValue_3;             // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E4A[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetLibrarySaveManager_IsValid;            // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E4B[0x7];                                     // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBLibrarySaveManager*                  CallFunc_GetLibrarySaveManager_ReturnValue;        // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBLibrarySaveData                     CallFunc_LoadLibraryData_ReturnValue;              // 0x0140(0x0218)()
};
static_assert(alignof(LibraryMenu_C_Setup_Library_Button_Excrametion) == 0x000008, "Wrong alignment on LibraryMenu_C_Setup_Library_Button_Excrametion");
static_assert(sizeof(LibraryMenu_C_Setup_Library_Button_Excrametion) == 0x000358, "Wrong size on LibraryMenu_C_Setup_Library_Button_Excrametion");
static_assert(offsetof(LibraryMenu_C_Setup_Library_Button_Excrametion, MainTabNewIconVisible) == 0x000000, "Member 'LibraryMenu_C_Setup_Library_Button_Excrametion::MainTabNewIconVisible' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Library_Button_Excrametion, Excrametion) == 0x000001, "Member 'LibraryMenu_C_Setup_Library_Button_Excrametion::Excrametion' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Library_Button_Excrametion, EnemyList) == 0x000008, "Member 'LibraryMenu_C_Setup_Library_Button_Excrametion::EnemyList' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Library_Button_Excrametion, SaveManager) == 0x000018, "Member 'LibraryMenu_C_Setup_Library_Button_Excrametion::SaveManager' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Library_Button_Excrametion, Temp_bool_Variable) == 0x000020, "Member 'LibraryMenu_C_Setup_Library_Button_Excrametion::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Library_Button_Excrametion, Temp_byte_Variable) == 0x000021, "Member 'LibraryMenu_C_Setup_Library_Button_Excrametion::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Library_Button_Excrametion, Temp_bool_Variable_1) == 0x000022, "Member 'LibraryMenu_C_Setup_Library_Button_Excrametion::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Library_Button_Excrametion, Temp_bool_Variable_2) == 0x000023, "Member 'LibraryMenu_C_Setup_Library_Button_Excrametion::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Library_Button_Excrametion, CallFunc_ValidAddLibraryPic_ReturnValue) == 0x000024, "Member 'LibraryMenu_C_Setup_Library_Button_Excrametion::CallFunc_ValidAddLibraryPic_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Library_Button_Excrametion, Temp_bool_Variable_3) == 0x000025, "Member 'LibraryMenu_C_Setup_Library_Button_Excrametion::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Library_Button_Excrametion, CallFunc_MakeLiteralInt_ReturnValue) == 0x000028, "Member 'LibraryMenu_C_Setup_Library_Button_Excrametion::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Library_Button_Excrametion, CallFunc_IsNewInformationEnemyLibrary_ReturnValue) == 0x00002C, "Member 'LibraryMenu_C_Setup_Library_Button_Excrametion::CallFunc_IsNewInformationEnemyLibrary_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Library_Button_Excrametion, K2Node_MakeArray_Array) == 0x000030, "Member 'LibraryMenu_C_Setup_Library_Button_Excrametion::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Library_Button_Excrametion, CallFunc_MakeLiteralInt_ReturnValue_1) == 0x000040, "Member 'LibraryMenu_C_Setup_Library_Button_Excrametion::CallFunc_MakeLiteralInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Library_Button_Excrametion, CallFunc_GetCharacterId_ReturnValue) == 0x000048, "Member 'LibraryMenu_C_Setup_Library_Button_Excrametion::CallFunc_GetCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Library_Button_Excrametion, K2Node_MakeArray_Array_1) == 0x000058, "Member 'LibraryMenu_C_Setup_Library_Button_Excrametion::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Library_Button_Excrametion, CallFunc_GetReadImagineCategoryList_ReturnValue) == 0x000068, "Member 'LibraryMenu_C_Setup_Library_Button_Excrametion::CallFunc_GetReadImagineCategoryList_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Library_Button_Excrametion, CallFunc_MakeLiteralInt_ReturnValue_2) == 0x000078, "Member 'LibraryMenu_C_Setup_Library_Button_Excrametion::CallFunc_MakeLiteralInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Library_Button_Excrametion, CallFunc_Array_Contains_ReturnValue) == 0x00007C, "Member 'LibraryMenu_C_Setup_Library_Button_Excrametion::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Library_Button_Excrametion, CallFunc_GetCharacterId_ReturnValue_1) == 0x000080, "Member 'LibraryMenu_C_Setup_Library_Button_Excrametion::CallFunc_GetCharacterId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Library_Button_Excrametion, CallFunc_MakeLiteralInt_ReturnValue_3) == 0x000090, "Member 'LibraryMenu_C_Setup_Library_Button_Excrametion::CallFunc_MakeLiteralInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Library_Button_Excrametion, CallFunc_GetReadImagineCategoryList_ReturnValue_1) == 0x000098, "Member 'LibraryMenu_C_Setup_Library_Button_Excrametion::CallFunc_GetReadImagineCategoryList_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Library_Button_Excrametion, CallFunc_Array_Contains_ReturnValue_1) == 0x0000A8, "Member 'LibraryMenu_C_Setup_Library_Button_Excrametion::CallFunc_Array_Contains_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Library_Button_Excrametion, CallFunc_GetCharacterId_ReturnValue_2) == 0x0000B0, "Member 'LibraryMenu_C_Setup_Library_Button_Excrametion::CallFunc_GetCharacterId_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Library_Button_Excrametion, CallFunc_GetSortedPlayerClassList_ReturnValue) == 0x0000C0, "Member 'LibraryMenu_C_Setup_Library_Button_Excrametion::CallFunc_GetSortedPlayerClassList_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Library_Button_Excrametion, CallFunc_MakeLiteralInt_ReturnValue_4) == 0x0000D0, "Member 'LibraryMenu_C_Setup_Library_Button_Excrametion::CallFunc_MakeLiteralInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Library_Button_Excrametion, CallFunc_GetReadWeaponCategoryList_ReturnValue) == 0x0000D8, "Member 'LibraryMenu_C_Setup_Library_Button_Excrametion::CallFunc_GetReadWeaponCategoryList_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Library_Button_Excrametion, CallFunc_Array_Contains_ReturnValue_2) == 0x0000E8, "Member 'LibraryMenu_C_Setup_Library_Button_Excrametion::CallFunc_Array_Contains_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Library_Button_Excrametion, CallFunc_MakeLiteralByte_ReturnValue) == 0x0000E9, "Member 'LibraryMenu_C_Setup_Library_Button_Excrametion::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Library_Button_Excrametion, K2Node_Select_Default) == 0x0000EC, "Member 'LibraryMenu_C_Setup_Library_Button_Excrametion::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Library_Button_Excrametion, CallFunc_Not_PreBool_ReturnValue) == 0x0000F0, "Member 'LibraryMenu_C_Setup_Library_Button_Excrametion::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Library_Button_Excrametion, CallFunc_GetCharacterId_ReturnValue_3) == 0x0000F8, "Member 'LibraryMenu_C_Setup_Library_Button_Excrametion::CallFunc_GetCharacterId_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Library_Button_Excrametion, CallFunc_GetReadItemCategoryList_ReturnValue) == 0x000108, "Member 'LibraryMenu_C_Setup_Library_Button_Excrametion::CallFunc_GetReadItemCategoryList_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Library_Button_Excrametion, CallFunc_Array_Contains_ReturnValue_3) == 0x000118, "Member 'LibraryMenu_C_Setup_Library_Button_Excrametion::CallFunc_Array_Contains_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Library_Button_Excrametion, CallFunc_GetPlayerId_ReturnValue) == 0x000120, "Member 'LibraryMenu_C_Setup_Library_Button_Excrametion::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Library_Button_Excrametion, CallFunc_GetLibrarySaveManager_IsValid) == 0x000130, "Member 'LibraryMenu_C_Setup_Library_Button_Excrametion::CallFunc_GetLibrarySaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Library_Button_Excrametion, CallFunc_GetLibrarySaveManager_ReturnValue) == 0x000138, "Member 'LibraryMenu_C_Setup_Library_Button_Excrametion::CallFunc_GetLibrarySaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_Setup_Library_Button_Excrametion, CallFunc_LoadLibraryData_ReturnValue) == 0x000140, "Member 'LibraryMenu_C_Setup_Library_Button_Excrametion::CallFunc_LoadLibraryData_ReturnValue' has a wrong offset!");

// Function LibraryMenu.LibraryMenu_C.CheckReadDemoIdList
// 0x00F8 (0x00F8 - 0x0000)
struct LibraryMenu_C_CheckReadDemoIdList final
{
public:
	TArray<class FName>                           In;                                                // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class FName>                           L_RemoveLists;                                     // 0x0010(0x0010)(Edit, BlueprintVisible)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E4C[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0034(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E4D[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBDemoData                            CallFunc_GetDataTableRowFromName_OutRow;           // 0x0040(0x0090)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E4E[0x3];                                     // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_AddUnique_ReturnValue;              // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8E4F[0x3];                                     // 0x00E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item_1;                         // 0x00EC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_C_CheckReadDemoIdList) == 0x000008, "Wrong alignment on LibraryMenu_C_CheckReadDemoIdList");
static_assert(sizeof(LibraryMenu_C_CheckReadDemoIdList) == 0x0000F8, "Wrong size on LibraryMenu_C_CheckReadDemoIdList");
static_assert(offsetof(LibraryMenu_C_CheckReadDemoIdList, In) == 0x000000, "Member 'LibraryMenu_C_CheckReadDemoIdList::In' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_CheckReadDemoIdList, L_RemoveLists) == 0x000010, "Member 'LibraryMenu_C_CheckReadDemoIdList::L_RemoveLists' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_CheckReadDemoIdList, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'LibraryMenu_C_CheckReadDemoIdList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_CheckReadDemoIdList, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'LibraryMenu_C_CheckReadDemoIdList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_CheckReadDemoIdList, CallFunc_Less_IntInt_ReturnValue) == 0x000028, "Member 'LibraryMenu_C_CheckReadDemoIdList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_CheckReadDemoIdList, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'LibraryMenu_C_CheckReadDemoIdList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_CheckReadDemoIdList, Temp_int_Array_Index_Variable) == 0x000030, "Member 'LibraryMenu_C_CheckReadDemoIdList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_CheckReadDemoIdList, CallFunc_Array_Get_Item) == 0x000034, "Member 'LibraryMenu_C_CheckReadDemoIdList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_CheckReadDemoIdList, CallFunc_GetDataTableRowFromName_OutRow) == 0x000040, "Member 'LibraryMenu_C_CheckReadDemoIdList::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_CheckReadDemoIdList, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000D0, "Member 'LibraryMenu_C_CheckReadDemoIdList::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_CheckReadDemoIdList, Temp_int_Loop_Counter_Variable_1) == 0x0000D4, "Member 'LibraryMenu_C_CheckReadDemoIdList::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_CheckReadDemoIdList, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000D8, "Member 'LibraryMenu_C_CheckReadDemoIdList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_CheckReadDemoIdList, CallFunc_Array_Length_ReturnValue_1) == 0x0000DC, "Member 'LibraryMenu_C_CheckReadDemoIdList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_CheckReadDemoIdList, CallFunc_Array_AddUnique_ReturnValue) == 0x0000E0, "Member 'LibraryMenu_C_CheckReadDemoIdList::CallFunc_Array_AddUnique_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_CheckReadDemoIdList, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000E4, "Member 'LibraryMenu_C_CheckReadDemoIdList::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_CheckReadDemoIdList, Temp_int_Array_Index_Variable_1) == 0x0000E8, "Member 'LibraryMenu_C_CheckReadDemoIdList::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_CheckReadDemoIdList, CallFunc_Array_Get_Item_1) == 0x0000EC, "Member 'LibraryMenu_C_CheckReadDemoIdList::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_CheckReadDemoIdList, CallFunc_Array_RemoveItem_ReturnValue) == 0x0000F4, "Member 'LibraryMenu_C_CheckReadDemoIdList::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");

// Function LibraryMenu.LibraryMenu_C.TermRequest
// 0x0018 (0x0018 - 0x0000)
struct LibraryMenu_C_TermRequest final
{
public:
	ESubMenuTermReason                            InReason;                                          // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESubMenuTermRequestReply                      ReturnValue;                                       // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESubMenuTermReason                            Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESubMenuTermRequestReply                      Temp_byte_Variable_1;                              // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESubMenuTermRequestReply                      Temp_byte_Variable_2;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESubMenuTermRequestReply                      K2Node_Select_Default;                             // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8E50[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_C_TermRequest) == 0x000008, "Wrong alignment on LibraryMenu_C_TermRequest");
static_assert(sizeof(LibraryMenu_C_TermRequest) == 0x000018, "Wrong size on LibraryMenu_C_TermRequest");
static_assert(offsetof(LibraryMenu_C_TermRequest, InReason) == 0x000000, "Member 'LibraryMenu_C_TermRequest::InReason' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_TermRequest, ReturnValue) == 0x000001, "Member 'LibraryMenu_C_TermRequest::ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_TermRequest, Temp_byte_Variable) == 0x000002, "Member 'LibraryMenu_C_TermRequest::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_TermRequest, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000003, "Member 'LibraryMenu_C_TermRequest::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_TermRequest, Temp_byte_Variable_1) == 0x000004, "Member 'LibraryMenu_C_TermRequest::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_TermRequest, Temp_byte_Variable_2) == 0x000005, "Member 'LibraryMenu_C_TermRequest::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_TermRequest, K2Node_Select_Default) == 0x000006, "Member 'LibraryMenu_C_TermRequest::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_TermRequest, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'LibraryMenu_C_TermRequest::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_C_TermRequest, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'LibraryMenu_C_TermRequest::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

}

