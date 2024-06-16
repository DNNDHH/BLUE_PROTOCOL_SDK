#pragma once

 

// Package: NotifyMessageItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "ST_TutorialExtendData_structs.hpp"
#include "ST_TutorialExtendDataMain_structs.hpp"
#include "NotifyMessageItemType_structs.hpp"


namespace SDK::Params
{

// Function NotifyMessageItem.NotifyMessageItem_C.ExecuteUbergraph_NotifyMessageItem
// 0x0008 (0x0008 - 0x0000)
struct NotifyMessageItem_C_ExecuteUbergraph_NotifyMessageItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NotifyMessageItem_C_ExecuteUbergraph_NotifyMessageItem) == 0x000004, "Wrong alignment on NotifyMessageItem_C_ExecuteUbergraph_NotifyMessageItem");
static_assert(sizeof(NotifyMessageItem_C_ExecuteUbergraph_NotifyMessageItem) == 0x000008, "Wrong size on NotifyMessageItem_C_ExecuteUbergraph_NotifyMessageItem");
static_assert(offsetof(NotifyMessageItem_C_ExecuteUbergraph_NotifyMessageItem, EntryPoint) == 0x000000, "Member 'NotifyMessageItem_C_ExecuteUbergraph_NotifyMessageItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_ExecuteUbergraph_NotifyMessageItem, K2Node_Event_IsDesignTime) == 0x000004, "Member 'NotifyMessageItem_C_ExecuteUbergraph_NotifyMessageItem::K2Node_Event_IsDesignTime' has a wrong offset!");

// Function NotifyMessageItem.NotifyMessageItem_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct NotifyMessageItem_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NotifyMessageItem_C_PreConstruct) == 0x000001, "Wrong alignment on NotifyMessageItem_C_PreConstruct");
static_assert(sizeof(NotifyMessageItem_C_PreConstruct) == 0x000001, "Wrong size on NotifyMessageItem_C_PreConstruct");
static_assert(offsetof(NotifyMessageItem_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'NotifyMessageItem_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function NotifyMessageItem.NotifyMessageItem_C.SetSwitcher
// 0x0018 (0x0018 - 0x0000)
struct NotifyMessageItem_C_SetSwitcher final
{
public:
	ENotifyMessageItemType                        Param_Type;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ENotifyMessageItemType                        Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F5D[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NotifyMessageItem_C_SetSwitcher) == 0x000004, "Wrong alignment on NotifyMessageItem_C_SetSwitcher");
static_assert(sizeof(NotifyMessageItem_C_SetSwitcher) == 0x000018, "Wrong size on NotifyMessageItem_C_SetSwitcher");
static_assert(offsetof(NotifyMessageItem_C_SetSwitcher, Param_Type) == 0x000000, "Member 'NotifyMessageItem_C_SetSwitcher::Param_Type' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetSwitcher, Temp_byte_Variable) == 0x000001, "Member 'NotifyMessageItem_C_SetSwitcher::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetSwitcher, Temp_int_Variable) == 0x000004, "Member 'NotifyMessageItem_C_SetSwitcher::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetSwitcher, Temp_int_Variable_1) == 0x000008, "Member 'NotifyMessageItem_C_SetSwitcher::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetSwitcher, Temp_int_Variable_2) == 0x00000C, "Member 'NotifyMessageItem_C_SetSwitcher::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetSwitcher, Temp_int_Variable_3) == 0x000010, "Member 'NotifyMessageItem_C_SetSwitcher::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetSwitcher, K2Node_Select_Default) == 0x000014, "Member 'NotifyMessageItem_C_SetSwitcher::K2Node_Select_Default' has a wrong offset!");

// Function NotifyMessageItem.NotifyMessageItem_C.SetLine1
// 0x0018 (0x0018 - 0x0000)
struct NotifyMessageItem_C_SetLine1 final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(NotifyMessageItem_C_SetLine1) == 0x000008, "Wrong alignment on NotifyMessageItem_C_SetLine1");
static_assert(sizeof(NotifyMessageItem_C_SetLine1) == 0x000018, "Wrong size on NotifyMessageItem_C_SetLine1");
static_assert(offsetof(NotifyMessageItem_C_SetLine1, InText) == 0x000000, "Member 'NotifyMessageItem_C_SetLine1::InText' has a wrong offset!");

// Function NotifyMessageItem.NotifyMessageItem_C.SetLine1L
// 0x0018 (0x0018 - 0x0000)
struct NotifyMessageItem_C_SetLine1L final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(NotifyMessageItem_C_SetLine1L) == 0x000008, "Wrong alignment on NotifyMessageItem_C_SetLine1L");
static_assert(sizeof(NotifyMessageItem_C_SetLine1L) == 0x000018, "Wrong size on NotifyMessageItem_C_SetLine1L");
static_assert(offsetof(NotifyMessageItem_C_SetLine1L, InText) == 0x000000, "Member 'NotifyMessageItem_C_SetLine1L::InText' has a wrong offset!");

// Function NotifyMessageItem.NotifyMessageItem_C.SetLine2
// 0x0030 (0x0030 - 0x0000)
struct NotifyMessageItem_C_SetLine2 final
{
public:
	class FText                                   InTextMain;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   InTextSub;                                         // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(NotifyMessageItem_C_SetLine2) == 0x000008, "Wrong alignment on NotifyMessageItem_C_SetLine2");
static_assert(sizeof(NotifyMessageItem_C_SetLine2) == 0x000030, "Wrong size on NotifyMessageItem_C_SetLine2");
static_assert(offsetof(NotifyMessageItem_C_SetLine2, InTextMain) == 0x000000, "Member 'NotifyMessageItem_C_SetLine2::InTextMain' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetLine2, InTextSub) == 0x000018, "Member 'NotifyMessageItem_C_SetLine2::InTextSub' has a wrong offset!");

// Function NotifyMessageItem.NotifyMessageItem_C.SetScreenshot
// 0x0018 (0x0018 - 0x0000)
struct NotifyMessageItem_C_SetScreenshot final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(NotifyMessageItem_C_SetScreenshot) == 0x000008, "Wrong alignment on NotifyMessageItem_C_SetScreenshot");
static_assert(sizeof(NotifyMessageItem_C_SetScreenshot) == 0x000018, "Wrong size on NotifyMessageItem_C_SetScreenshot");
static_assert(offsetof(NotifyMessageItem_C_SetScreenshot, InText) == 0x000000, "Member 'NotifyMessageItem_C_SetScreenshot::InText' has a wrong offset!");

// Function NotifyMessageItem.NotifyMessageItem_C.SetAchievement
// 0x0160 (0x0160 - 0x0000)
struct NotifyMessageItem_C_SetAchievement final
{
public:
	int32                                         InAchievementId;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F5E[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetAchievementMasterData_IsExists;        // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F5F[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAchievementMasterData                 CallFunc_GetAchievementMasterData_ReturnValue;     // 0x0020(0x0078)()
	class FString                                 CallFunc_GetAchievementName_ReturnValue;           // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F60[0x7];                                     // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00B0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00C8(0x0040)(HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0108(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F61[0x4];                                     // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0110(0x0010)(ReferenceParm)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0130(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0148(0x0018)()
};
static_assert(alignof(NotifyMessageItem_C_SetAchievement) == 0x000008, "Wrong alignment on NotifyMessageItem_C_SetAchievement");
static_assert(sizeof(NotifyMessageItem_C_SetAchievement) == 0x000160, "Wrong size on NotifyMessageItem_C_SetAchievement");
static_assert(offsetof(NotifyMessageItem_C_SetAchievement, InAchievementId) == 0x000000, "Member 'NotifyMessageItem_C_SetAchievement::InAchievementId' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetAchievement, Temp_int_Variable) == 0x000004, "Member 'NotifyMessageItem_C_SetAchievement::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetAchievement, Temp_int_Variable_1) == 0x000008, "Member 'NotifyMessageItem_C_SetAchievement::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetAchievement, Temp_bool_Variable) == 0x00000C, "Member 'NotifyMessageItem_C_SetAchievement::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetAchievement, CallFunc_GetMasterDataManager_IsValid) == 0x00000D, "Member 'NotifyMessageItem_C_SetAchievement::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetAchievement, CallFunc_GetMasterDataManager_ReturnValue) == 0x000010, "Member 'NotifyMessageItem_C_SetAchievement::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetAchievement, CallFunc_GetAchievementMasterData_IsExists) == 0x000018, "Member 'NotifyMessageItem_C_SetAchievement::CallFunc_GetAchievementMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetAchievement, CallFunc_GetAchievementMasterData_ReturnValue) == 0x000020, "Member 'NotifyMessageItem_C_SetAchievement::CallFunc_GetAchievementMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetAchievement, CallFunc_GetAchievementName_ReturnValue) == 0x000098, "Member 'NotifyMessageItem_C_SetAchievement::CallFunc_GetAchievementName_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetAchievement, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000A8, "Member 'NotifyMessageItem_C_SetAchievement::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetAchievement, CallFunc_Conv_StringToText_ReturnValue) == 0x0000B0, "Member 'NotifyMessageItem_C_SetAchievement::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetAchievement, K2Node_MakeStruct_FormatArgumentData) == 0x0000C8, "Member 'NotifyMessageItem_C_SetAchievement::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetAchievement, K2Node_Select_Default) == 0x000108, "Member 'NotifyMessageItem_C_SetAchievement::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetAchievement, K2Node_MakeArray_Array) == 0x000110, "Member 'NotifyMessageItem_C_SetAchievement::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetAchievement, CallFunc_GetTextFromAsset_ReturnValue) == 0x000120, "Member 'NotifyMessageItem_C_SetAchievement::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetAchievement, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000130, "Member 'NotifyMessageItem_C_SetAchievement::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetAchievement, CallFunc_Format_ReturnValue) == 0x000148, "Member 'NotifyMessageItem_C_SetAchievement::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function NotifyMessageItem.NotifyMessageItem_C.SetAdventurerRank
// 0x0001 (0x0001 - 0x0000)
struct NotifyMessageItem_C_SetAdventurerRank final
{
public:
	ESBPlayerPassiveImagineSlotType               Selection;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NotifyMessageItem_C_SetAdventurerRank) == 0x000001, "Wrong alignment on NotifyMessageItem_C_SetAdventurerRank");
static_assert(sizeof(NotifyMessageItem_C_SetAdventurerRank) == 0x000001, "Wrong size on NotifyMessageItem_C_SetAdventurerRank");
static_assert(offsetof(NotifyMessageItem_C_SetAdventurerRank, Selection) == 0x000000, "Member 'NotifyMessageItem_C_SetAdventurerRank::Selection' has a wrong offset!");

// Function NotifyMessageItem.NotifyMessageItem_C.SetRecipe
// 0x0210 (0x0210 - 0x0000)
struct NotifyMessageItem_C_SetRecipe final
{
public:
	ESBRecipeType                                 Selection;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F62[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ID;                                                // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Ability;                                           // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Param_Name;                                        // 0x0010(0x0018)(Edit, BlueprintVisible)
	class FText                                   CallFunc_Get_Reward_Item_Name_and_Type_OutName;    // 0x0028(0x0018)()
	class FText                                   CallFunc_Get_Reward_Item_Name_and_Type_OutType;    // 0x0040(0x0018)()
	bool                                          CallFunc_Get_Reward_Item_Name_and_Type_OutNoName;  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F63[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Get_Reward_Item_Name_and_Type_OutName_1;  // 0x0060(0x0018)()
	class FText                                   CallFunc_Get_Reward_Item_Name_and_Type_OutType_1;  // 0x0078(0x0018)()
	bool                                          CallFunc_Get_Reward_Item_Name_and_Type_OutNoName_1; // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F64[0x5];                                     // 0x0093(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00A0(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindMasterWarehouseAbilityRecipe_bExists; // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F65[0x3];                                     // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWarehouseAbilityRecipeMasterData    CallFunc_BP_FindMasterWarehouseAbilityRecipe_ReturnValue; // 0x00E4(0x0020)(ConstParm, NoDestructor)
	uint8                                         Pad_5F66[0x4];                                     // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0108(0x0010)(ReferenceParm)
	class FString                                 CallFunc_GetText_ReturnValue;                      // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0128(0x0018)()
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0140(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0150(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0190(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x01A8(0x0010)(ReferenceParm)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue_1;     // 0x01B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x01C8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x01E0(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x01F8(0x0018)()
};
static_assert(alignof(NotifyMessageItem_C_SetRecipe) == 0x000008, "Wrong alignment on NotifyMessageItem_C_SetRecipe");
static_assert(sizeof(NotifyMessageItem_C_SetRecipe) == 0x000210, "Wrong size on NotifyMessageItem_C_SetRecipe");
static_assert(offsetof(NotifyMessageItem_C_SetRecipe, Selection) == 0x000000, "Member 'NotifyMessageItem_C_SetRecipe::Selection' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetRecipe, ID) == 0x000004, "Member 'NotifyMessageItem_C_SetRecipe::ID' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetRecipe, Ability) == 0x000008, "Member 'NotifyMessageItem_C_SetRecipe::Ability' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetRecipe, Param_Name) == 0x000010, "Member 'NotifyMessageItem_C_SetRecipe::Param_Name' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetRecipe, CallFunc_Get_Reward_Item_Name_and_Type_OutName) == 0x000028, "Member 'NotifyMessageItem_C_SetRecipe::CallFunc_Get_Reward_Item_Name_and_Type_OutName' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetRecipe, CallFunc_Get_Reward_Item_Name_and_Type_OutType) == 0x000040, "Member 'NotifyMessageItem_C_SetRecipe::CallFunc_Get_Reward_Item_Name_and_Type_OutType' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetRecipe, CallFunc_Get_Reward_Item_Name_and_Type_OutNoName) == 0x000058, "Member 'NotifyMessageItem_C_SetRecipe::CallFunc_Get_Reward_Item_Name_and_Type_OutNoName' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetRecipe, CallFunc_Get_Reward_Item_Name_and_Type_OutName_1) == 0x000060, "Member 'NotifyMessageItem_C_SetRecipe::CallFunc_Get_Reward_Item_Name_and_Type_OutName_1' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetRecipe, CallFunc_Get_Reward_Item_Name_and_Type_OutType_1) == 0x000078, "Member 'NotifyMessageItem_C_SetRecipe::CallFunc_Get_Reward_Item_Name_and_Type_OutType_1' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetRecipe, CallFunc_Get_Reward_Item_Name_and_Type_OutNoName_1) == 0x000090, "Member 'NotifyMessageItem_C_SetRecipe::CallFunc_Get_Reward_Item_Name_and_Type_OutNoName_1' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetRecipe, K2Node_SwitchEnum_CmpSuccess) == 0x000091, "Member 'NotifyMessageItem_C_SetRecipe::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetRecipe, CallFunc_GetMasterDataManager_IsValid) == 0x000092, "Member 'NotifyMessageItem_C_SetRecipe::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetRecipe, CallFunc_GetMasterDataManager_ReturnValue) == 0x000098, "Member 'NotifyMessageItem_C_SetRecipe::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetRecipe, K2Node_MakeStruct_FormatArgumentData) == 0x0000A0, "Member 'NotifyMessageItem_C_SetRecipe::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetRecipe, CallFunc_BP_FindMasterWarehouseAbilityRecipe_bExists) == 0x0000E0, "Member 'NotifyMessageItem_C_SetRecipe::CallFunc_BP_FindMasterWarehouseAbilityRecipe_bExists' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetRecipe, CallFunc_BP_FindMasterWarehouseAbilityRecipe_ReturnValue) == 0x0000E4, "Member 'NotifyMessageItem_C_SetRecipe::CallFunc_BP_FindMasterWarehouseAbilityRecipe_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetRecipe, K2Node_MakeArray_Array) == 0x000108, "Member 'NotifyMessageItem_C_SetRecipe::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetRecipe, CallFunc_GetText_ReturnValue) == 0x000118, "Member 'NotifyMessageItem_C_SetRecipe::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetRecipe, CallFunc_Conv_StringToText_ReturnValue) == 0x000128, "Member 'NotifyMessageItem_C_SetRecipe::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetRecipe, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000140, "Member 'NotifyMessageItem_C_SetRecipe::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetRecipe, K2Node_MakeStruct_FormatArgumentData_1) == 0x000150, "Member 'NotifyMessageItem_C_SetRecipe::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetRecipe, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000190, "Member 'NotifyMessageItem_C_SetRecipe::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetRecipe, K2Node_MakeArray_Array_1) == 0x0001A8, "Member 'NotifyMessageItem_C_SetRecipe::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetRecipe, CallFunc_GetTextFromAssetByName_ReturnValue_1) == 0x0001B8, "Member 'NotifyMessageItem_C_SetRecipe::CallFunc_GetTextFromAssetByName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetRecipe, CallFunc_Format_ReturnValue) == 0x0001C8, "Member 'NotifyMessageItem_C_SetRecipe::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetRecipe, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0001E0, "Member 'NotifyMessageItem_C_SetRecipe::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetRecipe, CallFunc_Format_ReturnValue_1) == 0x0001F8, "Member 'NotifyMessageItem_C_SetRecipe::CallFunc_Format_ReturnValue_1' has a wrong offset!");

// Function NotifyMessageItem.NotifyMessageItem_C.SetPartyMemberDead
// 0x00A8 (0x00A8 - 0x0000)
struct NotifyMessageItem_C_SetPartyMemberDead final
{
public:
	class FText                                   MemberName;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0028(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0068(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0080(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0090(0x0018)()
};
static_assert(alignof(NotifyMessageItem_C_SetPartyMemberDead) == 0x000008, "Wrong alignment on NotifyMessageItem_C_SetPartyMemberDead");
static_assert(sizeof(NotifyMessageItem_C_SetPartyMemberDead) == 0x0000A8, "Wrong size on NotifyMessageItem_C_SetPartyMemberDead");
static_assert(offsetof(NotifyMessageItem_C_SetPartyMemberDead, MemberName) == 0x000000, "Member 'NotifyMessageItem_C_SetPartyMemberDead::MemberName' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetPartyMemberDead, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000018, "Member 'NotifyMessageItem_C_SetPartyMemberDead::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetPartyMemberDead, K2Node_MakeStruct_FormatArgumentData) == 0x000028, "Member 'NotifyMessageItem_C_SetPartyMemberDead::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetPartyMemberDead, CallFunc_Conv_StringToText_ReturnValue) == 0x000068, "Member 'NotifyMessageItem_C_SetPartyMemberDead::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetPartyMemberDead, K2Node_MakeArray_Array) == 0x000080, "Member 'NotifyMessageItem_C_SetPartyMemberDead::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetPartyMemberDead, CallFunc_Format_ReturnValue) == 0x000090, "Member 'NotifyMessageItem_C_SetPartyMemberDead::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function NotifyMessageItem.NotifyMessageItem_C.SetNetworkCafeLoginTimeNotification
// 0x00A0 (0x00A0 - 0x0000)
struct NotifyMessageItem_C_SetNetworkCafeLoginTimeNotification final
{
public:
	int32                                         NetworkCafeTotalTimePlayedToday;                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F67[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F68[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0038(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0078(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0088(0x0018)()
};
static_assert(alignof(NotifyMessageItem_C_SetNetworkCafeLoginTimeNotification) == 0x000008, "Wrong alignment on NotifyMessageItem_C_SetNetworkCafeLoginTimeNotification");
static_assert(sizeof(NotifyMessageItem_C_SetNetworkCafeLoginTimeNotification) == 0x0000A0, "Wrong size on NotifyMessageItem_C_SetNetworkCafeLoginTimeNotification");
static_assert(offsetof(NotifyMessageItem_C_SetNetworkCafeLoginTimeNotification, NetworkCafeTotalTimePlayedToday) == 0x000000, "Member 'NotifyMessageItem_C_SetNetworkCafeLoginTimeNotification::NetworkCafeTotalTimePlayedToday' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetNetworkCafeLoginTimeNotification, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000008, "Member 'NotifyMessageItem_C_SetNetworkCafeLoginTimeNotification::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetNetworkCafeLoginTimeNotification, CallFunc_Divide_IntInt_ReturnValue) == 0x000018, "Member 'NotifyMessageItem_C_SetNetworkCafeLoginTimeNotification::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetNetworkCafeLoginTimeNotification, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'NotifyMessageItem_C_SetNetworkCafeLoginTimeNotification::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetNetworkCafeLoginTimeNotification, K2Node_MakeStruct_FormatArgumentData) == 0x000038, "Member 'NotifyMessageItem_C_SetNetworkCafeLoginTimeNotification::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetNetworkCafeLoginTimeNotification, K2Node_MakeArray_Array) == 0x000078, "Member 'NotifyMessageItem_C_SetNetworkCafeLoginTimeNotification::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetNetworkCafeLoginTimeNotification, CallFunc_Format_ReturnValue) == 0x000088, "Member 'NotifyMessageItem_C_SetNetworkCafeLoginTimeNotification::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function NotifyMessageItem.NotifyMessageItem_C.SetNetworkCafeRewardNotification
// 0x02A0 (0x02A0 - 0x0000)
struct NotifyMessageItem_C_SetNetworkCafeRewardNotification final
{
public:
	struct FSBNetworkCafeReward                   SBNetworkCafeReward;                               // 0x0000(0x000C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                          bSucceed;                                          // 0x000C(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F69[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Count;                                             // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F6A[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Param_Name;                                        // 0x0018(0x0018)(Edit, BlueprintVisible)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0030(0x0040)(HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F6B[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0088(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00C8(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00E0(0x0010)(ReferenceParm)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F6C[0x7];                                     // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0100(0x0018)()
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F6D[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x0120(0x00D0)()
	class FString                                 CallFunc_GetItemText_ReturnValue;                  // 0x01F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BP_FindMasterToken_bIsValid;              // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F6E[0x7];                                     // 0x0201(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMasterToken                           CallFunc_BP_FindMasterToken_ReturnValue;           // 0x0208(0x0058)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0260(0x0018)()
	class FString                                 CallFunc_GetMasterTokenText_ReturnValue;           // 0x0278(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0288(0x0018)()
};
static_assert(alignof(NotifyMessageItem_C_SetNetworkCafeRewardNotification) == 0x000008, "Wrong alignment on NotifyMessageItem_C_SetNetworkCafeRewardNotification");
static_assert(sizeof(NotifyMessageItem_C_SetNetworkCafeRewardNotification) == 0x0002A0, "Wrong size on NotifyMessageItem_C_SetNetworkCafeRewardNotification");
static_assert(offsetof(NotifyMessageItem_C_SetNetworkCafeRewardNotification, SBNetworkCafeReward) == 0x000000, "Member 'NotifyMessageItem_C_SetNetworkCafeRewardNotification::SBNetworkCafeReward' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetNetworkCafeRewardNotification, bSucceed) == 0x00000C, "Member 'NotifyMessageItem_C_SetNetworkCafeRewardNotification::bSucceed' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetNetworkCafeRewardNotification, Count) == 0x000010, "Member 'NotifyMessageItem_C_SetNetworkCafeRewardNotification::Count' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetNetworkCafeRewardNotification, Param_Name) == 0x000018, "Member 'NotifyMessageItem_C_SetNetworkCafeRewardNotification::Param_Name' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetNetworkCafeRewardNotification, K2Node_MakeStruct_FormatArgumentData) == 0x000030, "Member 'NotifyMessageItem_C_SetNetworkCafeRewardNotification::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetNetworkCafeRewardNotification, K2Node_SwitchEnum_CmpSuccess) == 0x000070, "Member 'NotifyMessageItem_C_SetNetworkCafeRewardNotification::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetNetworkCafeRewardNotification, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000078, "Member 'NotifyMessageItem_C_SetNetworkCafeRewardNotification::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetNetworkCafeRewardNotification, K2Node_MakeStruct_FormatArgumentData_1) == 0x000088, "Member 'NotifyMessageItem_C_SetNetworkCafeRewardNotification::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetNetworkCafeRewardNotification, CallFunc_Conv_StringToText_ReturnValue) == 0x0000C8, "Member 'NotifyMessageItem_C_SetNetworkCafeRewardNotification::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetNetworkCafeRewardNotification, K2Node_MakeArray_Array) == 0x0000E0, "Member 'NotifyMessageItem_C_SetNetworkCafeRewardNotification::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetNetworkCafeRewardNotification, CallFunc_GetMasterDataManager_IsValid) == 0x0000F0, "Member 'NotifyMessageItem_C_SetNetworkCafeRewardNotification::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetNetworkCafeRewardNotification, CallFunc_GetMasterDataManager_ReturnValue) == 0x0000F8, "Member 'NotifyMessageItem_C_SetNetworkCafeRewardNotification::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetNetworkCafeRewardNotification, CallFunc_Format_ReturnValue) == 0x000100, "Member 'NotifyMessageItem_C_SetNetworkCafeRewardNotification::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetNetworkCafeRewardNotification, CallFunc_GetItemMasterData_IsExists) == 0x000118, "Member 'NotifyMessageItem_C_SetNetworkCafeRewardNotification::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetNetworkCafeRewardNotification, CallFunc_GetItemMasterData_ReturnValue) == 0x000120, "Member 'NotifyMessageItem_C_SetNetworkCafeRewardNotification::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetNetworkCafeRewardNotification, CallFunc_GetItemText_ReturnValue) == 0x0001F0, "Member 'NotifyMessageItem_C_SetNetworkCafeRewardNotification::CallFunc_GetItemText_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetNetworkCafeRewardNotification, CallFunc_BP_FindMasterToken_bIsValid) == 0x000200, "Member 'NotifyMessageItem_C_SetNetworkCafeRewardNotification::CallFunc_BP_FindMasterToken_bIsValid' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetNetworkCafeRewardNotification, CallFunc_BP_FindMasterToken_ReturnValue) == 0x000208, "Member 'NotifyMessageItem_C_SetNetworkCafeRewardNotification::CallFunc_BP_FindMasterToken_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetNetworkCafeRewardNotification, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000260, "Member 'NotifyMessageItem_C_SetNetworkCafeRewardNotification::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetNetworkCafeRewardNotification, CallFunc_GetMasterTokenText_ReturnValue) == 0x000278, "Member 'NotifyMessageItem_C_SetNetworkCafeRewardNotification::CallFunc_GetMasterTokenText_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetNetworkCafeRewardNotification, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000288, "Member 'NotifyMessageItem_C_SetNetworkCafeRewardNotification::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");

// Function NotifyMessageItem.NotifyMessageItem_C.SetTutorialHelp
// 0x01C8 (0x01C8 - 0x0000)
struct NotifyMessageItem_C_SetTutorialHelp final
{
public:
	class FName                                   TutorialId;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F6F[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F70[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_wildcard_Variable;                            // 0x0014(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  CallFunc_GetClassType_ReturnValue;                 // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F71[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBTutorialHelpData                    CallFunc_GetDataTableRowFromName_OutRow;           // 0x0020(0x0058)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F72[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_TutorialExtendData                 CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x0080(0x0010)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F73[0x3];                                     // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_TutorialExtendDataMain             CallFunc_Array_Get_Item;                           // 0x0094(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00B0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00C8(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F74[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0110(0x0010)(ReferenceParm)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F75[0x3];                                     // 0x0121(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F76[0x3];                                     // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0130(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0140(0x0018)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0159(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F77[0x2];                                     // 0x015A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F78[0x7];                                     // 0x0181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0188(0x0018)()
	class USBCharactersLogComponent*              CallFunc_GetCharacterLogComponent_ReturnValue;     // 0x01A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x01A8(0x0018)()
	bool                                          CallFunc_IsUnlockTutorialHelp_ReturnValue;         // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Request_RegistTutorialHelp_ReturnValue;   // 0x01C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NotifyMessageItem_C_SetTutorialHelp) == 0x000008, "Wrong alignment on NotifyMessageItem_C_SetTutorialHelp");
static_assert(sizeof(NotifyMessageItem_C_SetTutorialHelp) == 0x0001C8, "Wrong size on NotifyMessageItem_C_SetTutorialHelp");
static_assert(offsetof(NotifyMessageItem_C_SetTutorialHelp, TutorialId) == 0x000000, "Member 'NotifyMessageItem_C_SetTutorialHelp::TutorialId' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetTutorialHelp, Temp_bool_True_if_break_was_hit_Variable) == 0x000008, "Member 'NotifyMessageItem_C_SetTutorialHelp::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetTutorialHelp, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'NotifyMessageItem_C_SetTutorialHelp::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetTutorialHelp, CallFunc_Not_PreBool_ReturnValue) == 0x000010, "Member 'NotifyMessageItem_C_SetTutorialHelp::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetTutorialHelp, Temp_wildcard_Variable) == 0x000014, "Member 'NotifyMessageItem_C_SetTutorialHelp::Temp_wildcard_Variable' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetTutorialHelp, CallFunc_GetClassType_ReturnValue) == 0x00001C, "Member 'NotifyMessageItem_C_SetTutorialHelp::CallFunc_GetClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetTutorialHelp, CallFunc_GetDataTableRowFromName_OutRow) == 0x000020, "Member 'NotifyMessageItem_C_SetTutorialHelp::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetTutorialHelp, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000078, "Member 'NotifyMessageItem_C_SetTutorialHelp::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetTutorialHelp, CallFunc_GetDataTableRowFromName_OutRow_1) == 0x000080, "Member 'NotifyMessageItem_C_SetTutorialHelp::CallFunc_GetDataTableRowFromName_OutRow_1' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetTutorialHelp, CallFunc_GetDataTableRowFromName_ReturnValue_1) == 0x000090, "Member 'NotifyMessageItem_C_SetTutorialHelp::CallFunc_GetDataTableRowFromName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetTutorialHelp, CallFunc_Array_Get_Item) == 0x000094, "Member 'NotifyMessageItem_C_SetTutorialHelp::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetTutorialHelp, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x0000A0, "Member 'NotifyMessageItem_C_SetTutorialHelp::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetTutorialHelp, CallFunc_Conv_StringToText_ReturnValue) == 0x0000B0, "Member 'NotifyMessageItem_C_SetTutorialHelp::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetTutorialHelp, K2Node_MakeStruct_FormatArgumentData) == 0x0000C8, "Member 'NotifyMessageItem_C_SetTutorialHelp::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetTutorialHelp, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000108, "Member 'NotifyMessageItem_C_SetTutorialHelp::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetTutorialHelp, K2Node_MakeArray_Array) == 0x000110, "Member 'NotifyMessageItem_C_SetTutorialHelp::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetTutorialHelp, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000120, "Member 'NotifyMessageItem_C_SetTutorialHelp::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetTutorialHelp, CallFunc_Array_Length_ReturnValue) == 0x000124, "Member 'NotifyMessageItem_C_SetTutorialHelp::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetTutorialHelp, CallFunc_BooleanOR_ReturnValue) == 0x000128, "Member 'NotifyMessageItem_C_SetTutorialHelp::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetTutorialHelp, Temp_int_Loop_Counter_Variable) == 0x00012C, "Member 'NotifyMessageItem_C_SetTutorialHelp::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetTutorialHelp, CallFunc_GetSBRetMessage_ReturnValue) == 0x000130, "Member 'NotifyMessageItem_C_SetTutorialHelp::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetTutorialHelp, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000140, "Member 'NotifyMessageItem_C_SetTutorialHelp::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetTutorialHelp, CallFunc_Less_IntInt_ReturnValue) == 0x000158, "Member 'NotifyMessageItem_C_SetTutorialHelp::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetTutorialHelp, CallFunc_BooleanAND_ReturnValue) == 0x000159, "Member 'NotifyMessageItem_C_SetTutorialHelp::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetTutorialHelp, CallFunc_Add_IntInt_ReturnValue) == 0x00015C, "Member 'NotifyMessageItem_C_SetTutorialHelp::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetTutorialHelp, CallFunc_GetPlayerController_ReturnValue) == 0x000160, "Member 'NotifyMessageItem_C_SetTutorialHelp::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetTutorialHelp, CallFunc_GetTextFromAsset_ReturnValue) == 0x000168, "Member 'NotifyMessageItem_C_SetTutorialHelp::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetTutorialHelp, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000178, "Member 'NotifyMessageItem_C_SetTutorialHelp::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetTutorialHelp, K2Node_DynamicCast_bSuccess) == 0x000180, "Member 'NotifyMessageItem_C_SetTutorialHelp::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetTutorialHelp, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000188, "Member 'NotifyMessageItem_C_SetTutorialHelp::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetTutorialHelp, CallFunc_GetCharacterLogComponent_ReturnValue) == 0x0001A0, "Member 'NotifyMessageItem_C_SetTutorialHelp::CallFunc_GetCharacterLogComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetTutorialHelp, CallFunc_Format_ReturnValue) == 0x0001A8, "Member 'NotifyMessageItem_C_SetTutorialHelp::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetTutorialHelp, CallFunc_IsUnlockTutorialHelp_ReturnValue) == 0x0001C0, "Member 'NotifyMessageItem_C_SetTutorialHelp::CallFunc_IsUnlockTutorialHelp_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetTutorialHelp, CallFunc_Request_RegistTutorialHelp_ReturnValue) == 0x0001C1, "Member 'NotifyMessageItem_C_SetTutorialHelp::CallFunc_Request_RegistTutorialHelp_ReturnValue' has a wrong offset!");

// Function NotifyMessageItem.NotifyMessageItem_C.SetWarehouseAbility
// 0x00E0 (0x00E0 - 0x0000)
struct NotifyMessageItem_C_SetWarehouseAbility final
{
public:
	class FText                                   AbilityName;                                       // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	ESBWarehouseAbilityCharacterStatus            Status;                                            // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBWarehouseAbilityCharacterStatus            Temp_byte_Variable;                                // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F79[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0020(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0060(0x0010)(ReferenceParm)
	class FName                                   Temp_name_Variable;                                // 0x0070(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x0078(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_2;                              // 0x0080(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_3;                              // 0x0088(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_4;                              // 0x0090(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Select_Default;                             // 0x0098(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00B0(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00C8(0x0018)()
};
static_assert(alignof(NotifyMessageItem_C_SetWarehouseAbility) == 0x000008, "Wrong alignment on NotifyMessageItem_C_SetWarehouseAbility");
static_assert(sizeof(NotifyMessageItem_C_SetWarehouseAbility) == 0x0000E0, "Wrong size on NotifyMessageItem_C_SetWarehouseAbility");
static_assert(offsetof(NotifyMessageItem_C_SetWarehouseAbility, AbilityName) == 0x000000, "Member 'NotifyMessageItem_C_SetWarehouseAbility::AbilityName' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetWarehouseAbility, Status) == 0x000018, "Member 'NotifyMessageItem_C_SetWarehouseAbility::Status' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetWarehouseAbility, Temp_byte_Variable) == 0x000019, "Member 'NotifyMessageItem_C_SetWarehouseAbility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetWarehouseAbility, K2Node_MakeStruct_FormatArgumentData) == 0x000020, "Member 'NotifyMessageItem_C_SetWarehouseAbility::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetWarehouseAbility, K2Node_MakeArray_Array) == 0x000060, "Member 'NotifyMessageItem_C_SetWarehouseAbility::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetWarehouseAbility, Temp_name_Variable) == 0x000070, "Member 'NotifyMessageItem_C_SetWarehouseAbility::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetWarehouseAbility, Temp_name_Variable_1) == 0x000078, "Member 'NotifyMessageItem_C_SetWarehouseAbility::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetWarehouseAbility, Temp_name_Variable_2) == 0x000080, "Member 'NotifyMessageItem_C_SetWarehouseAbility::Temp_name_Variable_2' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetWarehouseAbility, Temp_name_Variable_3) == 0x000088, "Member 'NotifyMessageItem_C_SetWarehouseAbility::Temp_name_Variable_3' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetWarehouseAbility, Temp_name_Variable_4) == 0x000090, "Member 'NotifyMessageItem_C_SetWarehouseAbility::Temp_name_Variable_4' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetWarehouseAbility, K2Node_Select_Default) == 0x000098, "Member 'NotifyMessageItem_C_SetWarehouseAbility::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetWarehouseAbility, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x0000A0, "Member 'NotifyMessageItem_C_SetWarehouseAbility::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetWarehouseAbility, CallFunc_Conv_StringToText_ReturnValue) == 0x0000B0, "Member 'NotifyMessageItem_C_SetWarehouseAbility::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetWarehouseAbility, CallFunc_Format_ReturnValue) == 0x0000C8, "Member 'NotifyMessageItem_C_SetWarehouseAbility::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function NotifyMessageItem.NotifyMessageItem_C.SetWishList
// 0x0060 (0x0060 - 0x0000)
struct NotifyMessageItem_C_SetWishList final
{
public:
	class FText                                   Param_Name;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	ESBWishListType                               Param_Type;                                        // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBWishListType                               Temp_byte_Variable;                                // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F7A[0x2];                                     // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F7B[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0048(0x0018)()
};
static_assert(alignof(NotifyMessageItem_C_SetWishList) == 0x000008, "Wrong alignment on NotifyMessageItem_C_SetWishList");
static_assert(sizeof(NotifyMessageItem_C_SetWishList) == 0x000060, "Wrong size on NotifyMessageItem_C_SetWishList");
static_assert(offsetof(NotifyMessageItem_C_SetWishList, Param_Name) == 0x000000, "Member 'NotifyMessageItem_C_SetWishList::Param_Name' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetWishList, Param_Type) == 0x000018, "Member 'NotifyMessageItem_C_SetWishList::Param_Type' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetWishList, Temp_byte_Variable) == 0x000019, "Member 'NotifyMessageItem_C_SetWishList::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetWishList, Temp_int_Variable) == 0x00001C, "Member 'NotifyMessageItem_C_SetWishList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetWishList, Temp_int_Variable_1) == 0x000020, "Member 'NotifyMessageItem_C_SetWishList::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetWishList, Temp_int_Variable_2) == 0x000024, "Member 'NotifyMessageItem_C_SetWishList::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetWishList, Temp_int_Variable_3) == 0x000028, "Member 'NotifyMessageItem_C_SetWishList::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetWishList, Temp_int_Variable_4) == 0x00002C, "Member 'NotifyMessageItem_C_SetWishList::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetWishList, K2Node_Select_Default) == 0x000030, "Member 'NotifyMessageItem_C_SetWishList::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetWishList, CallFunc_GetTextFromAsset_ReturnValue) == 0x000038, "Member 'NotifyMessageItem_C_SetWishList::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetWishList, CallFunc_Conv_StringToText_ReturnValue) == 0x000048, "Member 'NotifyMessageItem_C_SetWishList::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function NotifyMessageItem.NotifyMessageItem_C.SetQuestAccepted
// 0x0058 (0x0058 - 0x0000)
struct NotifyMessageItem_C_SetQuestAccepted final
{
public:
	int32                                         QuestIndex;                                        // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F7C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetQuestName_ReturnValue;                 // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0040(0x0018)()
};
static_assert(alignof(NotifyMessageItem_C_SetQuestAccepted) == 0x000008, "Wrong alignment on NotifyMessageItem_C_SetQuestAccepted");
static_assert(sizeof(NotifyMessageItem_C_SetQuestAccepted) == 0x000058, "Wrong size on NotifyMessageItem_C_SetQuestAccepted");
static_assert(offsetof(NotifyMessageItem_C_SetQuestAccepted, QuestIndex) == 0x000000, "Member 'NotifyMessageItem_C_SetQuestAccepted::QuestIndex' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetQuestAccepted, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'NotifyMessageItem_C_SetQuestAccepted::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetQuestAccepted, CallFunc_GetQuestName_ReturnValue) == 0x000018, "Member 'NotifyMessageItem_C_SetQuestAccepted::CallFunc_GetQuestName_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetQuestAccepted, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'NotifyMessageItem_C_SetQuestAccepted::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetQuestAccepted, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000040, "Member 'NotifyMessageItem_C_SetQuestAccepted::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function NotifyMessageItem.NotifyMessageItem_C.SetQuestCompleted
// 0x0058 (0x0058 - 0x0000)
struct NotifyMessageItem_C_SetQuestCompleted final
{
public:
	int32                                         QuestIndex;                                        // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F7D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetQuestName_ReturnValue;                 // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0040(0x0018)()
};
static_assert(alignof(NotifyMessageItem_C_SetQuestCompleted) == 0x000008, "Wrong alignment on NotifyMessageItem_C_SetQuestCompleted");
static_assert(sizeof(NotifyMessageItem_C_SetQuestCompleted) == 0x000058, "Wrong size on NotifyMessageItem_C_SetQuestCompleted");
static_assert(offsetof(NotifyMessageItem_C_SetQuestCompleted, QuestIndex) == 0x000000, "Member 'NotifyMessageItem_C_SetQuestCompleted::QuestIndex' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetQuestCompleted, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'NotifyMessageItem_C_SetQuestCompleted::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetQuestCompleted, CallFunc_GetQuestName_ReturnValue) == 0x000018, "Member 'NotifyMessageItem_C_SetQuestCompleted::CallFunc_GetQuestName_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetQuestCompleted, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'NotifyMessageItem_C_SetQuestCompleted::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetQuestCompleted, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000040, "Member 'NotifyMessageItem_C_SetQuestCompleted::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function NotifyMessageItem.NotifyMessageItem_C.SetQuestUpdateProgress
// 0x0138 (0x0138 - 0x0000)
struct NotifyMessageItem_C_SetQuestUpdateProgress final
{
public:
	struct FAcceptedQuestInfo                     AcceptedQuestInfo;                                 // 0x0000(0x0060)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          bValidProgressUiInfo;                              // 0x0060(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F7E[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBQuestProgressItemUIInfo             SBQuestProgressItemUIInfo;                         // 0x0068(0x0030)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                   SubText;                                           // 0x0098(0x0018)(Edit, BlueprintVisible)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetQuestName_ReturnValue;                 // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00E0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00F8(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0120(0x0018)()
};
static_assert(alignof(NotifyMessageItem_C_SetQuestUpdateProgress) == 0x000008, "Wrong alignment on NotifyMessageItem_C_SetQuestUpdateProgress");
static_assert(sizeof(NotifyMessageItem_C_SetQuestUpdateProgress) == 0x000138, "Wrong size on NotifyMessageItem_C_SetQuestUpdateProgress");
static_assert(offsetof(NotifyMessageItem_C_SetQuestUpdateProgress, AcceptedQuestInfo) == 0x000000, "Member 'NotifyMessageItem_C_SetQuestUpdateProgress::AcceptedQuestInfo' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetQuestUpdateProgress, bValidProgressUiInfo) == 0x000060, "Member 'NotifyMessageItem_C_SetQuestUpdateProgress::bValidProgressUiInfo' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetQuestUpdateProgress, SBQuestProgressItemUIInfo) == 0x000068, "Member 'NotifyMessageItem_C_SetQuestUpdateProgress::SBQuestProgressItemUIInfo' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetQuestUpdateProgress, SubText) == 0x000098, "Member 'NotifyMessageItem_C_SetQuestUpdateProgress::SubText' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetQuestUpdateProgress, CallFunc_Concat_StrStr_ReturnValue) == 0x0000B0, "Member 'NotifyMessageItem_C_SetQuestUpdateProgress::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetQuestUpdateProgress, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000C0, "Member 'NotifyMessageItem_C_SetQuestUpdateProgress::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetQuestUpdateProgress, CallFunc_GetQuestName_ReturnValue) == 0x0000D0, "Member 'NotifyMessageItem_C_SetQuestUpdateProgress::CallFunc_GetQuestName_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetQuestUpdateProgress, CallFunc_Conv_StringToText_ReturnValue) == 0x0000E0, "Member 'NotifyMessageItem_C_SetQuestUpdateProgress::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetQuestUpdateProgress, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000F8, "Member 'NotifyMessageItem_C_SetQuestUpdateProgress::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetQuestUpdateProgress, CallFunc_GetTextFromAsset_ReturnValue) == 0x000110, "Member 'NotifyMessageItem_C_SetQuestUpdateProgress::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetQuestUpdateProgress, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000120, "Member 'NotifyMessageItem_C_SetQuestUpdateProgress::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");

// Function NotifyMessageItem.NotifyMessageItem_C.SetInterruptQuestAwake
// 0x0070 (0x0070 - 0x0000)
struct NotifyMessageItem_C_SetInterruptQuestAwake final
{
public:
	class FName                                   QuestID;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	class FString                                 CallFunc_GetInterruptQuestName_OutQuestName;       // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetInterruptQuestName_ReturnValue;        // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F7F[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0058(0x0018)()
};
static_assert(alignof(NotifyMessageItem_C_SetInterruptQuestAwake) == 0x000008, "Wrong alignment on NotifyMessageItem_C_SetInterruptQuestAwake");
static_assert(sizeof(NotifyMessageItem_C_SetInterruptQuestAwake) == 0x000070, "Wrong size on NotifyMessageItem_C_SetInterruptQuestAwake");
static_assert(offsetof(NotifyMessageItem_C_SetInterruptQuestAwake, QuestID) == 0x000000, "Member 'NotifyMessageItem_C_SetInterruptQuestAwake::QuestID' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetInterruptQuestAwake, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'NotifyMessageItem_C_SetInterruptQuestAwake::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetInterruptQuestAwake, CallFunc_Conv_NameToString_ReturnValue) == 0x000018, "Member 'NotifyMessageItem_C_SetInterruptQuestAwake::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetInterruptQuestAwake, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'NotifyMessageItem_C_SetInterruptQuestAwake::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetInterruptQuestAwake, CallFunc_GetInterruptQuestName_OutQuestName) == 0x000040, "Member 'NotifyMessageItem_C_SetInterruptQuestAwake::CallFunc_GetInterruptQuestName_OutQuestName' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetInterruptQuestAwake, CallFunc_GetInterruptQuestName_ReturnValue) == 0x000050, "Member 'NotifyMessageItem_C_SetInterruptQuestAwake::CallFunc_GetInterruptQuestName_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetInterruptQuestAwake, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000058, "Member 'NotifyMessageItem_C_SetInterruptQuestAwake::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function NotifyMessageItem.NotifyMessageItem_C.SetQuestSynopsisAdded
// 0x0058 (0x0058 - 0x0000)
struct NotifyMessageItem_C_SetQuestSynopsisAdded final
{
public:
	int32                                         QuestIndex;                                        // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F80[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetQuestName_ReturnValue;                 // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0040(0x0018)()
};
static_assert(alignof(NotifyMessageItem_C_SetQuestSynopsisAdded) == 0x000008, "Wrong alignment on NotifyMessageItem_C_SetQuestSynopsisAdded");
static_assert(sizeof(NotifyMessageItem_C_SetQuestSynopsisAdded) == 0x000058, "Wrong size on NotifyMessageItem_C_SetQuestSynopsisAdded");
static_assert(offsetof(NotifyMessageItem_C_SetQuestSynopsisAdded, QuestIndex) == 0x000000, "Member 'NotifyMessageItem_C_SetQuestSynopsisAdded::QuestIndex' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetQuestSynopsisAdded, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000008, "Member 'NotifyMessageItem_C_SetQuestSynopsisAdded::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetQuestSynopsisAdded, CallFunc_GetQuestName_ReturnValue) == 0x000018, "Member 'NotifyMessageItem_C_SetQuestSynopsisAdded::CallFunc_GetQuestName_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetQuestSynopsisAdded, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'NotifyMessageItem_C_SetQuestSynopsisAdded::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetQuestSynopsisAdded, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000040, "Member 'NotifyMessageItem_C_SetQuestSynopsisAdded::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function NotifyMessageItem.NotifyMessageItem_C.SetQuestUpdateSImple
// 0x0058 (0x0058 - 0x0000)
struct NotifyMessageItem_C_SetQuestUpdateSImple final
{
public:
	int32                                         QuestIndex;                                        // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F81[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetQuestName_ReturnValue;                 // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0028(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0040(0x0018)()
};
static_assert(alignof(NotifyMessageItem_C_SetQuestUpdateSImple) == 0x000008, "Wrong alignment on NotifyMessageItem_C_SetQuestUpdateSImple");
static_assert(sizeof(NotifyMessageItem_C_SetQuestUpdateSImple) == 0x000058, "Wrong size on NotifyMessageItem_C_SetQuestUpdateSImple");
static_assert(offsetof(NotifyMessageItem_C_SetQuestUpdateSImple, QuestIndex) == 0x000000, "Member 'NotifyMessageItem_C_SetQuestUpdateSImple::QuestIndex' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetQuestUpdateSImple, CallFunc_GetTextFromAsset_ReturnValue) == 0x000008, "Member 'NotifyMessageItem_C_SetQuestUpdateSImple::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetQuestUpdateSImple, CallFunc_GetQuestName_ReturnValue) == 0x000018, "Member 'NotifyMessageItem_C_SetQuestUpdateSImple::CallFunc_GetQuestName_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetQuestUpdateSImple, CallFunc_Conv_StringToText_ReturnValue) == 0x000028, "Member 'NotifyMessageItem_C_SetQuestUpdateSImple::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetQuestUpdateSImple, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000040, "Member 'NotifyMessageItem_C_SetQuestUpdateSImple::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function NotifyMessageItem.NotifyMessageItem_C.SetAutoDeliveryQuestComplete
// 0x00E8 (0x00E8 - 0x0000)
struct NotifyMessageItem_C_SetAutoDeliveryQuestComplete final
{
public:
	ESBSeasonPassQuestCycleType                   InCycleType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F82[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InQuestName;                                       // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 LocalQuestName;                                    // 0x0018(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0028(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F83[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Left_ReturnValue;                         // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0044(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F84[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_2;                               // 0x004C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0050(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F85[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	ESBSeasonPassQuestCycleType                   Temp_byte_Variable;                                // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F86[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0080(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F87[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x0098(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00B8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00D0(0x0018)()
};
static_assert(alignof(NotifyMessageItem_C_SetAutoDeliveryQuestComplete) == 0x000008, "Wrong alignment on NotifyMessageItem_C_SetAutoDeliveryQuestComplete");
static_assert(sizeof(NotifyMessageItem_C_SetAutoDeliveryQuestComplete) == 0x0000E8, "Wrong size on NotifyMessageItem_C_SetAutoDeliveryQuestComplete");
static_assert(offsetof(NotifyMessageItem_C_SetAutoDeliveryQuestComplete, InCycleType) == 0x000000, "Member 'NotifyMessageItem_C_SetAutoDeliveryQuestComplete::InCycleType' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetAutoDeliveryQuestComplete, InQuestName) == 0x000008, "Member 'NotifyMessageItem_C_SetAutoDeliveryQuestComplete::InQuestName' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetAutoDeliveryQuestComplete, LocalQuestName) == 0x000018, "Member 'NotifyMessageItem_C_SetAutoDeliveryQuestComplete::LocalQuestName' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetAutoDeliveryQuestComplete, Temp_int_Variable) == 0x000028, "Member 'NotifyMessageItem_C_SetAutoDeliveryQuestComplete::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetAutoDeliveryQuestComplete, CallFunc_Left_ReturnValue) == 0x000030, "Member 'NotifyMessageItem_C_SetAutoDeliveryQuestComplete::CallFunc_Left_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetAutoDeliveryQuestComplete, CallFunc_Len_ReturnValue) == 0x000040, "Member 'NotifyMessageItem_C_SetAutoDeliveryQuestComplete::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetAutoDeliveryQuestComplete, Temp_int_Variable_1) == 0x000044, "Member 'NotifyMessageItem_C_SetAutoDeliveryQuestComplete::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetAutoDeliveryQuestComplete, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000048, "Member 'NotifyMessageItem_C_SetAutoDeliveryQuestComplete::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetAutoDeliveryQuestComplete, Temp_int_Variable_2) == 0x00004C, "Member 'NotifyMessageItem_C_SetAutoDeliveryQuestComplete::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetAutoDeliveryQuestComplete, Temp_int_Variable_3) == 0x000050, "Member 'NotifyMessageItem_C_SetAutoDeliveryQuestComplete::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetAutoDeliveryQuestComplete, CallFunc_GetTextFromAsset_ReturnValue) == 0x000058, "Member 'NotifyMessageItem_C_SetAutoDeliveryQuestComplete::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetAutoDeliveryQuestComplete, Temp_byte_Variable) == 0x000068, "Member 'NotifyMessageItem_C_SetAutoDeliveryQuestComplete::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetAutoDeliveryQuestComplete, CallFunc_Concat_StrStr_ReturnValue) == 0x000070, "Member 'NotifyMessageItem_C_SetAutoDeliveryQuestComplete::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetAutoDeliveryQuestComplete, K2Node_Select_Default) == 0x000080, "Member 'NotifyMessageItem_C_SetAutoDeliveryQuestComplete::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetAutoDeliveryQuestComplete, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000088, "Member 'NotifyMessageItem_C_SetAutoDeliveryQuestComplete::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetAutoDeliveryQuestComplete, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x000098, "Member 'NotifyMessageItem_C_SetAutoDeliveryQuestComplete::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetAutoDeliveryQuestComplete, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000A8, "Member 'NotifyMessageItem_C_SetAutoDeliveryQuestComplete::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetAutoDeliveryQuestComplete, CallFunc_Conv_StringToText_ReturnValue) == 0x0000B8, "Member 'NotifyMessageItem_C_SetAutoDeliveryQuestComplete::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetAutoDeliveryQuestComplete, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000D0, "Member 'NotifyMessageItem_C_SetAutoDeliveryQuestComplete::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function NotifyMessageItem.NotifyMessageItem_C.SetScreenshotFileName
// 0x0038 (0x0038 - 0x0000)
struct NotifyMessageItem_C_SetScreenshotFileName final
{
public:
	class FString                                 Filename;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
};
static_assert(alignof(NotifyMessageItem_C_SetScreenshotFileName) == 0x000008, "Wrong alignment on NotifyMessageItem_C_SetScreenshotFileName");
static_assert(sizeof(NotifyMessageItem_C_SetScreenshotFileName) == 0x000038, "Wrong size on NotifyMessageItem_C_SetScreenshotFileName");
static_assert(offsetof(NotifyMessageItem_C_SetScreenshotFileName, Filename) == 0x000000, "Member 'NotifyMessageItem_C_SetScreenshotFileName::Filename' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetScreenshotFileName, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000010, "Member 'NotifyMessageItem_C_SetScreenshotFileName::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetScreenshotFileName, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'NotifyMessageItem_C_SetScreenshotFileName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function NotifyMessageItem.NotifyMessageItem_C.SetRankingReward
// 0x0028 (0x0028 - 0x0000)
struct NotifyMessageItem_C_SetRankingReward final
{
public:
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(NotifyMessageItem_C_SetRankingReward) == 0x000008, "Wrong alignment on NotifyMessageItem_C_SetRankingReward");
static_assert(sizeof(NotifyMessageItem_C_SetRankingReward) == 0x000028, "Wrong size on NotifyMessageItem_C_SetRankingReward");
static_assert(offsetof(NotifyMessageItem_C_SetRankingReward, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000000, "Member 'NotifyMessageItem_C_SetRankingReward::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetRankingReward, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'NotifyMessageItem_C_SetRankingReward::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function NotifyMessageItem.NotifyMessageItem_C.SetItemExpiry
// 0x0278 (0x0278 - 0x0000)
struct NotifyMessageItem_C_SetItemExpiry final
{
public:
	int32                                         ItemId;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F88[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        Item;                                              // 0x0008(0x00D0)(Edit, BlueprintVisible)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F89[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5F8A[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x00F0(0x00D0)()
	class FString                                 CallFunc_GetItemText_ReturnValue;                  // 0x01C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x01D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x01E0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x01F8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0210(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0250(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0260(0x0018)()
};
static_assert(alignof(NotifyMessageItem_C_SetItemExpiry) == 0x000008, "Wrong alignment on NotifyMessageItem_C_SetItemExpiry");
static_assert(sizeof(NotifyMessageItem_C_SetItemExpiry) == 0x000278, "Wrong size on NotifyMessageItem_C_SetItemExpiry");
static_assert(offsetof(NotifyMessageItem_C_SetItemExpiry, ItemId) == 0x000000, "Member 'NotifyMessageItem_C_SetItemExpiry::ItemId' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetItemExpiry, Item) == 0x000008, "Member 'NotifyMessageItem_C_SetItemExpiry::Item' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetItemExpiry, CallFunc_GetMasterDataManager_IsValid) == 0x0000D8, "Member 'NotifyMessageItem_C_SetItemExpiry::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetItemExpiry, CallFunc_GetMasterDataManager_ReturnValue) == 0x0000E0, "Member 'NotifyMessageItem_C_SetItemExpiry::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetItemExpiry, CallFunc_GetItemMasterData_IsExists) == 0x0000E8, "Member 'NotifyMessageItem_C_SetItemExpiry::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetItemExpiry, CallFunc_GetItemMasterData_ReturnValue) == 0x0000F0, "Member 'NotifyMessageItem_C_SetItemExpiry::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetItemExpiry, CallFunc_GetItemText_ReturnValue) == 0x0001C0, "Member 'NotifyMessageItem_C_SetItemExpiry::CallFunc_GetItemText_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetItemExpiry, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x0001D0, "Member 'NotifyMessageItem_C_SetItemExpiry::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetItemExpiry, CallFunc_Conv_StringToText_ReturnValue) == 0x0001E0, "Member 'NotifyMessageItem_C_SetItemExpiry::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetItemExpiry, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0001F8, "Member 'NotifyMessageItem_C_SetItemExpiry::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetItemExpiry, K2Node_MakeStruct_FormatArgumentData) == 0x000210, "Member 'NotifyMessageItem_C_SetItemExpiry::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetItemExpiry, K2Node_MakeArray_Array) == 0x000250, "Member 'NotifyMessageItem_C_SetItemExpiry::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(NotifyMessageItem_C_SetItemExpiry, CallFunc_Format_ReturnValue) == 0x000260, "Member 'NotifyMessageItem_C_SetItemExpiry::CallFunc_Format_ReturnValue' has a wrong offset!");

}

