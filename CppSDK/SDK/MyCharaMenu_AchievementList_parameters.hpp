#pragma once

 

// Package: MyCharaMenu_AchievementList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.OnLoadAchievement__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_AchievementList_C_OnLoadAchievement__DelegateSignature final
{
public:
	bool                                          InResult;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_AchievementList_C_OnLoadAchievement__DelegateSignature) == 0x000001, "Wrong alignment on MyCharaMenu_AchievementList_C_OnLoadAchievement__DelegateSignature");
static_assert(sizeof(MyCharaMenu_AchievementList_C_OnLoadAchievement__DelegateSignature) == 0x000001, "Wrong size on MyCharaMenu_AchievementList_C_OnLoadAchievement__DelegateSignature");
static_assert(offsetof(MyCharaMenu_AchievementList_C_OnLoadAchievement__DelegateSignature, InResult) == 0x000000, "Member 'MyCharaMenu_AchievementList_C_OnLoadAchievement__DelegateSignature::InResult' has a wrong offset!");

// Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.OnSelectAchievement__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct MyCharaMenu_AchievementList_C_OnSelectAchievement__DelegateSignature final
{
public:
	int32                                         InAchievementId;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_AchievementList_C_OnSelectAchievement__DelegateSignature) == 0x000004, "Wrong alignment on MyCharaMenu_AchievementList_C_OnSelectAchievement__DelegateSignature");
static_assert(sizeof(MyCharaMenu_AchievementList_C_OnSelectAchievement__DelegateSignature) == 0x000004, "Wrong size on MyCharaMenu_AchievementList_C_OnSelectAchievement__DelegateSignature");
static_assert(offsetof(MyCharaMenu_AchievementList_C_OnSelectAchievement__DelegateSignature, InAchievementId) == 0x000000, "Member 'MyCharaMenu_AchievementList_C_OnSelectAchievement__DelegateSignature::InAchievementId' has a wrong offset!");

// Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.ExecuteUbergraph_MyCharaMenu_AchievementList
// 0x02E8 (0x02E8 - 0x0000)
struct MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue;                       // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F3C[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UMyCharaMenu_AchievementList_Item_C* InSelectedItem)> K2Node_CreateDelegate_OutputDelegate;              // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F3D[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerAchievementComponent*          CallFunc_GetPlayerAchievementComponent_ReturnValue; // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool Result, TArray<struct FSBAchievementInfo>& AchievementList)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0050(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F3E[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F3F[0x2];                                     // 0x006E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UMyCharaMenu_AchievementList_Item_C* InSelectedItem)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0078(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_GetAchievementNum_ReturnValue;            // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F40[0x3];                                     // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_1;        // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_1;        // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F41[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerAchievementComponent*          CallFunc_GetPlayerAchievementComponent_ReturnValue_1; // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAchievementsLoadedFromDB_ReturnValue;   // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x00B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F42[0x5];                                     // 0x00B3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool Result, TArray<struct FSBAchievementInfo>& AchievementList)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x00C0(0x0010)(ZeroConstructor, NoDestructor)
	TArray<struct FSBAchievementInfo>             CallFunc_GetAchievementList_ReturnValue;           // 0x00D0(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_GetMasterDataManager_IsValid_1;           // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F43[0x7];                                     // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue_1;       // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAchievementNum_ReturnValue_1;          // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F44[0x3];                                     // 0x00FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F45[0x3];                                     // 0x010D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_3;            // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0114(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F46[0x4];                                     // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PlaySE_ReturnValue_1;                     // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F47[0x3];                                     // 0x0135(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBAchievementInfo>             K2Node_CustomEvent_InAchievements;                 // 0x0138(0x0010)(ConstParm, ReferenceParm)
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0148(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBAchievementInfo                     CallFunc_Array_Get_Item;                           // 0x015C(0x0004)(NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindAchievementFromList_IsExists;         // 0x0162(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F48[0x5];                                     // 0x0163(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharaMenu_AchievementList_Item_C*    CallFunc_FindAchievementFromList_OutListItem;      // 0x0168(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0174(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0175(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F49[0x2];                                     // 0x0176(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetAchievementId_ReturnValue;             // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F4A[0x4];                                     // 0x017C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0180(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMyCharaMenu_AchievementList_Item_C*    K2Node_DynamicCast_AsMy_Chara_Menu_Achievement_List_Item; // 0x0188(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F4B[0x7];                                     // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharaMenu_AchievementList_Item_C*    K2Node_CustomEvent_InSelectedItem;                 // 0x0198(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Result;                         // 0x01A0(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F4C[0x7];                                     // 0x01A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBAchievementInfo>             K2Node_CustomEvent_AchievementList;                // 0x01A8(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x01B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F4D[0x6];                                     // 0x01BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue_2;        // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller_2;        // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F4E[0x3];                                     // 0x01D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool Result, TArray<struct FSBAchievementInfo>& AchievementList)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x01D4(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6F4F[0x4];                                     // 0x01E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerAchievementComponent*          CallFunc_GetPlayerAchievementComponent_ReturnValue_2; // 0x01E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F50[0x7];                                     // 0x01F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	const class UWidgetAnimation*                 K2Node_Event_Animation;                            // 0x01F8(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F51[0x3];                                     // 0x0201(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_2;                               // 0x0204(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_1;                 // 0x0208(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMyCharaMenu_AchievementList_Item_C*    K2Node_DynamicCast_AsMy_Chara_Menu_Achievement_List_Item_1; // 0x0210(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0219(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F52[0x2];                                     // 0x021A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x021C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0220(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAchievementMasterDataByNoId_IsExists;  // 0x0224(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F53[0x3];                                     // 0x0225(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAchievementMasterData                 CallFunc_GetAchievementMasterDataByNoId_ReturnValue; // 0x0228(0x0078)()
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x02A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x02A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F54[0x3];                                     // 0x02A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x02A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F55[0x4];                                     // 0x02AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_2;                 // 0x02B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue_1;           // 0x02B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6F56[0x4];                                     // 0x02BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharaMenu_AchievementList_Item_C*    K2Node_DynamicCast_AsMy_Chara_Menu_Achievement_List_Item_2; // 0x02C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_3;           // 0x02C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x02CA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F57[0x5];                                     // 0x02CB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharaMenu_AchievementList_Item_C*    CallFunc_Create_ReturnValue;                       // 0x02D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsAnimationPlaying_ReturnValue;           // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F58[0x7];                                     // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x02E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList) == 0x000008, "Wrong alignment on MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList");
static_assert(sizeof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList) == 0x0002E8, "Wrong size on MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, EntryPoint) == 0x000000, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::EntryPoint' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, Temp_int_Array_Index_Variable) == 0x000004, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, Temp_int_Variable) == 0x000008, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, Temp_int_Variable_1) == 0x00000C, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_Add_IntInt_ReturnValue_1) == 0x000014, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_PlaySE_ReturnValue) == 0x000018, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_PlaySE_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_GetPlayerController_ReturnValue) == 0x000020, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, K2Node_CreateDelegate_OutputDelegate) == 0x000028, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000038, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_GetPlayerAchievementComponent_ReturnValue) == 0x000048, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_GetPlayerAchievementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, K2Node_CreateDelegate_OutputDelegate_1) == 0x000050, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_IsValid_ReturnValue) == 0x000060, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_GetChildrenCount_ReturnValue) == 0x000064, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_Subtract_IntInt_ReturnValue) == 0x000068, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, K2Node_Event_IsDesignTime) == 0x00006C, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_GetMasterDataManager_IsValid) == 0x00006D, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_GetMasterDataManager_ReturnValue) == 0x000070, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, K2Node_CreateDelegate_OutputDelegate_2) == 0x000078, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_GetAchievementNum_ReturnValue) == 0x000088, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_GetAchievementNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00008C, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_GetPlayerController_ReturnValue_1) == 0x000090, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_GetPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, K2Node_DynamicCast_AsSBPlayer_Controller_1) == 0x000098, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::K2Node_DynamicCast_AsSBPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, K2Node_DynamicCast_bSuccess_1) == 0x0000A0, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_GetPlayerAchievementComponent_ReturnValue_1) == 0x0000A8, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_GetPlayerAchievementComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_IsValid_ReturnValue_1) == 0x0000B0, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_IsAchievementsLoadedFromDB_ReturnValue) == 0x0000B1, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_IsAchievementsLoadedFromDB_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_GetNetworkDataCache_IsValid) == 0x0000B2, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_GetNetworkDataCache_ReturnValue) == 0x0000B8, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000C0, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_GetAchievementList_ReturnValue) == 0x0000D0, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_GetAchievementList_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_GetMasterDataManager_IsValid_1) == 0x0000E0, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_GetMasterDataManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_GetMasterDataManager_ReturnValue_1) == 0x0000E8, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_GetMasterDataManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_GetAchievementNum_ReturnValue_1) == 0x0000F0, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_GetAchievementNum_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x0000F4, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, Temp_int_Loop_Counter_Variable) == 0x0000F8, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_Greater_IntInt_ReturnValue) == 0x0000FC, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_Add_IntInt_ReturnValue_2) == 0x000100, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_Array_Length_ReturnValue) == 0x000104, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_Subtract_IntInt_ReturnValue_2) == 0x000108, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_Subtract_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_Less_IntInt_ReturnValue) == 0x00010C, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_Subtract_IntInt_ReturnValue_3) == 0x000110, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_Subtract_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, K2Node_MakeStruct_Margin) == 0x000114, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_PlayAnimation_ReturnValue) == 0x000128, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_PlaySE_ReturnValue_1) == 0x000130, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_PlaySE_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_GetVisibility_ReturnValue) == 0x000134, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, K2Node_CustomEvent_InAchievements) == 0x000138, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::K2Node_CustomEvent_InAchievements' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000148, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_Array_Length_ReturnValue_1) == 0x000158, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_Array_Get_Item) == 0x00015C, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000160, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000161, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_FindAchievementFromList_IsExists) == 0x000162, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_FindAchievementFromList_IsExists' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_FindAchievementFromList_OutListItem) == 0x000168, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_FindAchievementFromList_OutListItem' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_Array_Length_ReturnValue_2) == 0x000170, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_Less_IntInt_ReturnValue_1) == 0x000174, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000175, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_GetAchievementId_ReturnValue) == 0x000178, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_GetAchievementId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_GetChildAt_ReturnValue) == 0x000180, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, K2Node_DynamicCast_AsMy_Chara_Menu_Achievement_List_Item) == 0x000188, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::K2Node_DynamicCast_AsMy_Chara_Menu_Achievement_List_Item' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, K2Node_DynamicCast_bSuccess_2) == 0x000190, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, K2Node_CustomEvent_InSelectedItem) == 0x000198, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::K2Node_CustomEvent_InSelectedItem' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, K2Node_CustomEvent_Result) == 0x0001A0, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::K2Node_CustomEvent_Result' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, K2Node_CustomEvent_AchievementList) == 0x0001A8, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::K2Node_CustomEvent_AchievementList' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_IsValid_ReturnValue_2) == 0x0001B8, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0001B9, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_GetPlayerController_ReturnValue_2) == 0x0001C0, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_GetPlayerController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, K2Node_DynamicCast_AsSBPlayer_Controller_2) == 0x0001C8, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::K2Node_DynamicCast_AsSBPlayer_Controller_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, K2Node_DynamicCast_bSuccess_3) == 0x0001D0, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, K2Node_CreateDelegate_OutputDelegate_4) == 0x0001D4, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_GetPlayerAchievementComponent_ReturnValue_2) == 0x0001E8, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_GetPlayerAchievementComponent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_IsValid_ReturnValue_3) == 0x0001F0, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, K2Node_Event_Animation) == 0x0001F8, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::K2Node_Event_Animation' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000200, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, Temp_int_Variable_2) == 0x000204, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_GetChildAt_ReturnValue_1) == 0x000208, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_GetChildAt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, K2Node_DynamicCast_AsMy_Chara_Menu_Achievement_List_Item_1) == 0x000210, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::K2Node_DynamicCast_AsMy_Chara_Menu_Achievement_List_Item_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, K2Node_DynamicCast_bSuccess_4) == 0x000218, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000219, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_Add_IntInt_ReturnValue_3) == 0x00021C, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, Temp_int_Variable_3) == 0x000220, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_GetAchievementMasterDataByNoId_IsExists) == 0x000224, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_GetAchievementMasterDataByNoId_IsExists' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_GetAchievementMasterDataByNoId_ReturnValue) == 0x000228, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_GetAchievementMasterDataByNoId_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_Array_Add_ReturnValue) == 0x0002A0, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_LessEqual_IntInt_ReturnValue_2) == 0x0002A4, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_LessEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_Add_IntInt_ReturnValue_4) == 0x0002A8, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_GetChildAt_ReturnValue_2) == 0x0002B0, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_GetChildAt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_GetChildrenCount_ReturnValue_1) == 0x0002B8, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_GetChildrenCount_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, K2Node_DynamicCast_AsMy_Chara_Menu_Achievement_List_Item_2) == 0x0002C0, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::K2Node_DynamicCast_AsMy_Chara_Menu_Achievement_List_Item_2' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, K2Node_DynamicCast_bSuccess_5) == 0x0002C8, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_LessEqual_IntInt_ReturnValue_3) == 0x0002C9, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_LessEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x0002CA, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_Create_ReturnValue) == 0x0002D0, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_IsAnimationPlaying_ReturnValue) == 0x0002D8, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_IsAnimationPlaying_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList, CallFunc_AddChild_ReturnValue) == 0x0002E0, "Member 'MyCharaMenu_AchievementList_C_ExecuteUbergraph_MyCharaMenu_AchievementList::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.OnAnimationFinished
// 0x0008 (0x0008 - 0x0000)
struct MyCharaMenu_AchievementList_C_OnAnimationFinished final
{
public:
	const class UWidgetAnimation*                 Animation;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_AchievementList_C_OnAnimationFinished) == 0x000008, "Wrong alignment on MyCharaMenu_AchievementList_C_OnAnimationFinished");
static_assert(sizeof(MyCharaMenu_AchievementList_C_OnAnimationFinished) == 0x000008, "Wrong size on MyCharaMenu_AchievementList_C_OnAnimationFinished");
static_assert(offsetof(MyCharaMenu_AchievementList_C_OnAnimationFinished, Animation) == 0x000000, "Member 'MyCharaMenu_AchievementList_C_OnAnimationFinished::Animation' has a wrong offset!");

// Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.OnLoadAchievementDelegate
// 0x0018 (0x0018 - 0x0000)
struct MyCharaMenu_AchievementList_C_OnLoadAchievementDelegate final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F59[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBAchievementInfo>             AchievementList;                                   // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(MyCharaMenu_AchievementList_C_OnLoadAchievementDelegate) == 0x000008, "Wrong alignment on MyCharaMenu_AchievementList_C_OnLoadAchievementDelegate");
static_assert(sizeof(MyCharaMenu_AchievementList_C_OnLoadAchievementDelegate) == 0x000018, "Wrong size on MyCharaMenu_AchievementList_C_OnLoadAchievementDelegate");
static_assert(offsetof(MyCharaMenu_AchievementList_C_OnLoadAchievementDelegate, Result) == 0x000000, "Member 'MyCharaMenu_AchievementList_C_OnLoadAchievementDelegate::Result' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_OnLoadAchievementDelegate, AchievementList) == 0x000008, "Member 'MyCharaMenu_AchievementList_C_OnLoadAchievementDelegate::AchievementList' has a wrong offset!");

// Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.OnSelected_Item
// 0x0008 (0x0008 - 0x0000)
struct MyCharaMenu_AchievementList_C_OnSelected_Item final
{
public:
	class UMyCharaMenu_AchievementList_Item_C*    InSelectedItem;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MyCharaMenu_AchievementList_C_OnSelected_Item) == 0x000008, "Wrong alignment on MyCharaMenu_AchievementList_C_OnSelected_Item");
static_assert(sizeof(MyCharaMenu_AchievementList_C_OnSelected_Item) == 0x000008, "Wrong size on MyCharaMenu_AchievementList_C_OnSelected_Item");
static_assert(offsetof(MyCharaMenu_AchievementList_C_OnSelected_Item, InSelectedItem) == 0x000000, "Member 'MyCharaMenu_AchievementList_C_OnSelected_Item::InSelectedItem' has a wrong offset!");

// Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.Setup_AchievementList
// 0x0010 (0x0010 - 0x0000)
struct MyCharaMenu_AchievementList_C_Setup_AchievementList final
{
public:
	TArray<struct FSBAchievementInfo>             InAchievements;                                    // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(MyCharaMenu_AchievementList_C_Setup_AchievementList) == 0x000008, "Wrong alignment on MyCharaMenu_AchievementList_C_Setup_AchievementList");
static_assert(sizeof(MyCharaMenu_AchievementList_C_Setup_AchievementList) == 0x000010, "Wrong size on MyCharaMenu_AchievementList_C_Setup_AchievementList");
static_assert(offsetof(MyCharaMenu_AchievementList_C_Setup_AchievementList, InAchievements) == 0x000000, "Member 'MyCharaMenu_AchievementList_C_Setup_AchievementList::InAchievements' has a wrong offset!");

// Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_AchievementList_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_AchievementList_C_PreConstruct) == 0x000001, "Wrong alignment on MyCharaMenu_AchievementList_C_PreConstruct");
static_assert(sizeof(MyCharaMenu_AchievementList_C_PreConstruct) == 0x000001, "Wrong size on MyCharaMenu_AchievementList_C_PreConstruct");
static_assert(offsetof(MyCharaMenu_AchievementList_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'MyCharaMenu_AchievementList_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.Close
// 0x0010 (0x0010 - 0x0000)
struct MyCharaMenu_AchievementList_C_Close final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_AchievementList_C_Close) == 0x000008, "Wrong alignment on MyCharaMenu_AchievementList_C_Close");
static_assert(sizeof(MyCharaMenu_AchievementList_C_Close) == 0x000010, "Wrong size on MyCharaMenu_AchievementList_C_Close");
static_assert(offsetof(MyCharaMenu_AchievementList_C_Close, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'MyCharaMenu_AchievementList_C_Close::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_Close, CallFunc_Not_PreBool_ReturnValue) == 0x000008, "Member 'MyCharaMenu_AchievementList_C_Close::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.IsClosing
// 0x0001 (0x0001 - 0x0000)
struct MyCharaMenu_AchievementList_C_IsClosing final
{
public:
	bool                                          OutIsClosing;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_AchievementList_C_IsClosing) == 0x000001, "Wrong alignment on MyCharaMenu_AchievementList_C_IsClosing");
static_assert(sizeof(MyCharaMenu_AchievementList_C_IsClosing) == 0x000001, "Wrong size on MyCharaMenu_AchievementList_C_IsClosing");
static_assert(offsetof(MyCharaMenu_AchievementList_C_IsClosing, OutIsClosing) == 0x000000, "Member 'MyCharaMenu_AchievementList_C_IsClosing::OutIsClosing' has a wrong offset!");

// Function MyCharaMenu_AchievementList.MyCharaMenu_AchievementList_C.FindAchievementFromList
// 0x0048 (0x0048 - 0x0000)
struct MyCharaMenu_AchievementList_C_FindAchievementFromList final
{
public:
	int32                                         InAchievementId;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsExists;                                          // 0x0004(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F5A[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMyCharaMenu_AchievementList_Item_C*    OutListItem;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F5B[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F5C[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMyCharaMenu_AchievementList_Item_C*    K2Node_DynamicCast_AsMy_Chara_Menu_Achievement_List_Item; // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F5D[0x2];                                     // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetAchievement_OutAchievementId;          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MyCharaMenu_AchievementList_C_FindAchievementFromList) == 0x000008, "Wrong alignment on MyCharaMenu_AchievementList_C_FindAchievementFromList");
static_assert(sizeof(MyCharaMenu_AchievementList_C_FindAchievementFromList) == 0x000048, "Wrong size on MyCharaMenu_AchievementList_C_FindAchievementFromList");
static_assert(offsetof(MyCharaMenu_AchievementList_C_FindAchievementFromList, InAchievementId) == 0x000000, "Member 'MyCharaMenu_AchievementList_C_FindAchievementFromList::InAchievementId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_FindAchievementFromList, IsExists) == 0x000004, "Member 'MyCharaMenu_AchievementList_C_FindAchievementFromList::IsExists' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_FindAchievementFromList, OutListItem) == 0x000008, "Member 'MyCharaMenu_AchievementList_C_FindAchievementFromList::OutListItem' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_FindAchievementFromList, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'MyCharaMenu_AchievementList_C_FindAchievementFromList::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_FindAchievementFromList, CallFunc_GetChildrenCount_ReturnValue) == 0x000014, "Member 'MyCharaMenu_AchievementList_C_FindAchievementFromList::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_FindAchievementFromList, CallFunc_Greater_IntInt_ReturnValue) == 0x000018, "Member 'MyCharaMenu_AchievementList_C_FindAchievementFromList::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_FindAchievementFromList, CallFunc_Subtract_IntInt_ReturnValue) == 0x00001C, "Member 'MyCharaMenu_AchievementList_C_FindAchievementFromList::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_FindAchievementFromList, Temp_int_Variable) == 0x000020, "Member 'MyCharaMenu_AchievementList_C_FindAchievementFromList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_FindAchievementFromList, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'MyCharaMenu_AchievementList_C_FindAchievementFromList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_FindAchievementFromList, CallFunc_GetChildAt_ReturnValue) == 0x000028, "Member 'MyCharaMenu_AchievementList_C_FindAchievementFromList::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_FindAchievementFromList, K2Node_DynamicCast_AsMy_Chara_Menu_Achievement_List_Item) == 0x000030, "Member 'MyCharaMenu_AchievementList_C_FindAchievementFromList::K2Node_DynamicCast_AsMy_Chara_Menu_Achievement_List_Item' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_FindAchievementFromList, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'MyCharaMenu_AchievementList_C_FindAchievementFromList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_FindAchievementFromList, CallFunc_IsValid_ReturnValue_1) == 0x000039, "Member 'MyCharaMenu_AchievementList_C_FindAchievementFromList::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_FindAchievementFromList, CallFunc_GetAchievement_OutAchievementId) == 0x00003C, "Member 'MyCharaMenu_AchievementList_C_FindAchievementFromList::CallFunc_GetAchievement_OutAchievementId' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_FindAchievementFromList, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000040, "Member 'MyCharaMenu_AchievementList_C_FindAchievementFromList::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(MyCharaMenu_AchievementList_C_FindAchievementFromList, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000041, "Member 'MyCharaMenu_AchievementList_C_FindAchievementFromList::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

}

