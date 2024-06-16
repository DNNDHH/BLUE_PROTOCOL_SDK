#pragma once

 

// Package: BP_PlayerLevelStartSequenceTaskOpenTheaterMenu

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function BP_PlayerLevelStartSequenceTaskOpenTheaterMenu.BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu
// 0x0068 (0x0068 - 0x0000)
struct BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D13[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBLibrarySaveManager*                  CallFunc_Load_Lib_Save_Data_LibSaveData;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckOpenedLoginBonusWindow_IsOpened;     // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D14[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBTheaterModeInfo                     CallFunc_GetTheaterModeInfo_ReturnValue;           // 0x0014(0x0014)(NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D15[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCityCurrentMapLevel_ReturnValue;        // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsStandalone_ReturnValue;                 // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsStandalone_ReturnValue_1;               // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_2;                // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsCityCurrentMapLevel_ReturnValue_1;      // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_CheckOpenedLoginBonusWindow_IsOpened_1;   // 0x003F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_3;                // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D16[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBLibrarySaveManager*                  CallFunc_Load_Lib_Save_Data_LibSaveData_1;         // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBTheaterModeInfo                     CallFunc_GetTheaterModeInfo_ReturnValue_1;         // 0x0050(0x0014)(NoDestructor)
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu) == 0x000008, "Wrong alignment on BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu) == 0x000068, "Wrong size on BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu, EntryPoint) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu, CallFunc_Load_Lib_Save_Data_LibSaveData) == 0x000008, "Member 'BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu::CallFunc_Load_Lib_Save_Data_LibSaveData' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu, CallFunc_CheckOpenedLoginBonusWindow_IsOpened) == 0x000010, "Member 'BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu::CallFunc_CheckOpenedLoginBonusWindow_IsOpened' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu, CallFunc_GetTheaterModeInfo_ReturnValue) == 0x000014, "Member 'BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu::CallFunc_GetTheaterModeInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu, CallFunc_Not_PreBool_ReturnValue) == 0x000028, "Member 'BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu, CallFunc_GetSBPlayerController_ReturnValue) == 0x000030, "Member 'BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu, CallFunc_IsCityCurrentMapLevel_ReturnValue) == 0x000039, "Member 'BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu::CallFunc_IsCityCurrentMapLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu, CallFunc_IsStandalone_ReturnValue) == 0x00003A, "Member 'BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu::CallFunc_IsStandalone_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu, CallFunc_Not_PreBool_ReturnValue_1) == 0x00003B, "Member 'BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu, CallFunc_IsStandalone_ReturnValue_1) == 0x00003C, "Member 'BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu::CallFunc_IsStandalone_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu, CallFunc_Not_PreBool_ReturnValue_2) == 0x00003D, "Member 'BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu::CallFunc_Not_PreBool_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu, CallFunc_IsCityCurrentMapLevel_ReturnValue_1) == 0x00003E, "Member 'BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu::CallFunc_IsCityCurrentMapLevel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu, CallFunc_CheckOpenedLoginBonusWindow_IsOpened_1) == 0x00003F, "Member 'BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu::CallFunc_CheckOpenedLoginBonusWindow_IsOpened_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu, CallFunc_Not_PreBool_ReturnValue_3) == 0x000040, "Member 'BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu::CallFunc_Not_PreBool_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu, CallFunc_Load_Lib_Save_Data_LibSaveData_1) == 0x000048, "Member 'BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu::CallFunc_Load_Lib_Save_Data_LibSaveData_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu, CallFunc_GetTheaterModeInfo_ReturnValue_1) == 0x000050, "Member 'BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu::CallFunc_GetTheaterModeInfo_ReturnValue_1' has a wrong offset!");

// Function BP_PlayerLevelStartSequenceTaskOpenTheaterMenu.BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C.Load Lib Save Data
// 0x0240 (0x0240 - 0x0000)
struct BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_Load_Lib_Save_Data final
{
public:
	class USBLibrarySaveManager*                  LibSaveData;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetPlayerId_ReturnValue;                  // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetLibrarySaveManager_IsValid;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D17[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBLibrarySaveManager*                  CallFunc_GetLibrarySaveManager_ReturnValue;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBLibrarySaveData                     CallFunc_LoadLibraryData_ReturnValue;              // 0x0028(0x0218)()
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_Load_Lib_Save_Data) == 0x000008, "Wrong alignment on BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_Load_Lib_Save_Data");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_Load_Lib_Save_Data) == 0x000240, "Wrong size on BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_Load_Lib_Save_Data");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_Load_Lib_Save_Data, LibSaveData) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_Load_Lib_Save_Data::LibSaveData' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_Load_Lib_Save_Data, CallFunc_GetPlayerId_ReturnValue) == 0x000008, "Member 'BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_Load_Lib_Save_Data::CallFunc_GetPlayerId_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_Load_Lib_Save_Data, CallFunc_GetLibrarySaveManager_IsValid) == 0x000018, "Member 'BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_Load_Lib_Save_Data::CallFunc_GetLibrarySaveManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_Load_Lib_Save_Data, CallFunc_GetLibrarySaveManager_ReturnValue) == 0x000020, "Member 'BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_Load_Lib_Save_Data::CallFunc_GetLibrarySaveManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_Load_Lib_Save_Data, CallFunc_LoadLibraryData_ReturnValue) == 0x000028, "Member 'BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_Load_Lib_Save_Data::CallFunc_LoadLibraryData_ReturnValue' has a wrong offset!");

// Function BP_PlayerLevelStartSequenceTaskOpenTheaterMenu.BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C.CheckOpenedLoginBonusWindow
// 0x0020 (0x0020 - 0x0000)
struct BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_CheckOpenedLoginBonusWindow final
{
public:
	bool                                          IsOpened;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D18[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerLoginBonusComponent*           CallFunc_GetLoginBonusComponent_ReturnValue;       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNeedLoginBonusWindow_ReturnValue;       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_CheckOpenedLoginBonusWindow) == 0x000008, "Wrong alignment on BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_CheckOpenedLoginBonusWindow");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_CheckOpenedLoginBonusWindow) == 0x000020, "Wrong size on BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_CheckOpenedLoginBonusWindow");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_CheckOpenedLoginBonusWindow, IsOpened) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_CheckOpenedLoginBonusWindow::IsOpened' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_CheckOpenedLoginBonusWindow, CallFunc_GetSBPlayerController_ReturnValue) == 0x000008, "Member 'BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_CheckOpenedLoginBonusWindow::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_CheckOpenedLoginBonusWindow, CallFunc_GetLoginBonusComponent_ReturnValue) == 0x000010, "Member 'BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_CheckOpenedLoginBonusWindow::CallFunc_GetLoginBonusComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_CheckOpenedLoginBonusWindow, CallFunc_IsNeedLoginBonusWindow_ReturnValue) == 0x000018, "Member 'BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_CheckOpenedLoginBonusWindow::CallFunc_IsNeedLoginBonusWindow_ReturnValue' has a wrong offset!");

}

