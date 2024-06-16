#pragma once

 

// Package: AdventurerRank_BenefitList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function AdventurerRank_BenefitList.AdventurerRank_BenefitList_C.SetTxtRankUpBenefits
// 0x1088 (0x1088 - 0x0000)
struct AdventurerRank_BenefitList_C_SetTxtRankUpBenefits final
{
public:
	int32                                         InRank;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRankup;                                          // 0x0004(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88C7[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBMasterReward>                TmpRewardList;                                     // 0x0008(0x0010)(Edit, BlueprintVisible)
	TArray<class FName>                           TmpMissionIds;                                     // 0x0018(0x0010)(Edit, BlueprintVisible)
	class FName                                   TmpFldName;                                        // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   TmpReleaseFunctionsName;                           // 0x0030(0x0018)(Edit, BlueprintVisible)
	class FString                                 TmpRecipeName;                                     // 0x0048(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<int32>                                 TmpCraftRecepiIds;                                 // 0x0058(0x0010)(Edit, BlueprintVisible)
	TArray<int32>                                 TmpImagineRecepiIds;                               // 0x0068(0x0010)(Edit, BlueprintVisible)
	TArray<class FName>                           TmpBoardRewardIdList;                              // 0x0078(0x0010)(Edit, BlueprintVisible)
	TArray<int32>                                 TmpReleaseQuestIds;                                // 0x0088(0x0010)(Edit, BlueprintVisible)
	struct FQuestMasterData                       TmpQuestMasterData;                                // 0x0098(0x0118)(Edit, BlueprintVisible)
	bool                                          TmpRankup;                                         // 0x01B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88C8[0x7];                                     // 0x01B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAdventurerRankMasterData            TmpNewAdventurerRankMasterData;                    // 0x01B8(0x0030)(Edit, BlueprintVisible)
	struct FSBAdventurerRankMasterData            TmpAdventurerRankMasterData;                       // 0x01E8(0x0030)(Edit, BlueprintVisible)
	int32                                         TmpAdvRank;                                        // 0x0218(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_88C9[0x4];                                     // 0x021C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0220(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0260(0x0010)(ReferenceParm)
	bool                                          Temp_bool_Variable;                                // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88CA[0x3];                                     // 0x0271(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0274(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0278(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x027C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0280(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0284(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0288(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0298(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_88CB[0x4];                                     // 0x029C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x02A0(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x02B8(0x0018)()
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x02D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x02D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x02DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x02E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88CC[0x7];                                     // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x02E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x02F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x02F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88CD[0x3];                                     // 0x02F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerAdventureBoardComponent*       CallFunc_GetAdventureBoardComponent_ReturnValue;   // 0x02F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x0300(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0304(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0308(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0318(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_88CE[0x4];                                     // 0x031C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0320(0x0018)()
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0338(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88CF[0x3];                                     // 0x0339(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_3;                  // 0x033C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0340(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88D0[0x3];                                     // 0x0341(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0344(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerAdventurerComponent*           CallFunc_GetAdventurerComponent_PlayerAdventurerComponent; // 0x0348(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0350(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88D1[0x3];                                     // 0x0351(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0354(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_2;           // 0x0358(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FName>                           CallFunc_GetMissionIdsUnlockAdventurerRank_ReturnValue; // 0x0368(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0378(0x0018)()
	int32                                         Temp_int_Array_Index_Variable_3;                   // 0x0390(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetExchangeShopAdventurerRankCount_ReturnValue; // 0x0394(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0398(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x03A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsAvailableMapEventTerm_ReturnValue;      // 0x03A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88D2[0x6];                                     // 0x03A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDungeonName_ReturnValue;               // 0x03A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x03B8(0x0018)()
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x03D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88D3[0x7];                                     // 0x03D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x03D8(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0418(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue_3;               // 0x0428(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_88D4[0x4];                                     // 0x042C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetQuestNameByTextId_ReturnValue;         // 0x0430(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x0440(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88D5[0x7];                                     // 0x0441(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_4;          // 0x0448(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0460(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_2;                          // 0x04A0(0x0010)(ReferenceParm)
	TArray<int32>                                 CallFunc_GetQuestUnlockAdventurerRank_ReturnValue; // 0x04B0(0x0010)(ReferenceParm)
	TArray<int32>                                 CallFunc_GetQuestUnlockAdventurerRank_ReturnValue_1; // 0x04C0(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Get_Item_1;                         // 0x04D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_88D6[0x4];                                     // 0x04D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuestMasterData                       CallFunc_FindQuestMasterData_QuestMasterData;      // 0x04D8(0x0118)()
	bool                                          CallFunc_FindQuestMasterData_Exist;                // 0x05F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88D7[0x3];                                     // 0x05F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetAcquiredRankupBoardId_ReturnValue;     // 0x05F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBMasterReward>                CallFunc_GetBoardGoalReward_OutRewardList;         // 0x05F8(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue_4;               // 0x0608(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x060C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88D8[0x3];                                     // 0x060D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetAdventurerRankLimit_ReturnValue;       // 0x0610(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0614(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88D9[0x3];                                     // 0x0615(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAssetByName_ReturnValue;       // 0x0618(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_5;          // 0x0628(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x0640(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_6;          // 0x0680(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_3;                          // 0x0698(0x0010)(ReferenceParm)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_4;            // 0x06A8(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_4;                          // 0x06E8(0x0010)(ReferenceParm)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x06F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchString_CmpSuccess;                    // 0x0708(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0709(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88DA[0x6];                                     // 0x070A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0710(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item_2;                         // 0x0718(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item_3;                         // 0x071C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindCraftMasterData_isExists;             // 0x0720(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88DB[0x7];                                     // 0x0721(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftMasterData                       CallFunc_FindCraftMasterData_ReturnValue;          // 0x0728(0x0088)(ConstParm)
	bool                                          CallFunc_FindMasterImagineData_IsExists;           // 0x07B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88DC[0x7];                                     // 0x07B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindMasterImagineData_ReturnValue;        // 0x07B8(0x00B0)()
	bool                                          CallFunc_GetItemMasterData_IsExists;               // 0x0868(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88DD[0x7];                                     // 0x0869(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemMasterData                        CallFunc_GetItemMasterData_ReturnValue;            // 0x0870(0x00D0)()
	class FString                                 CallFunc_GetMasterImagineText_ReturnValue;         // 0x0940(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetItemText_ReturnValue;                  // 0x0950(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetWeaponMasterData_IsExists;             // 0x0960(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88DE[0x7];                                     // 0x0961(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponMasterData                    CallFunc_GetWeaponMasterData_ReturnValue;          // 0x0968(0x00B0)()
	class FString                                 CallFunc_GetWeaponText_ReturnValue;                // 0x0A18(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default_1;                           // 0x0A28(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_5;               // 0x0A38(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_3;                // 0x0A3C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88DF[0x3];                                     // 0x0A3D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_6;               // 0x0A40(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_4;                // 0x0A44(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88E0[0x3];                                     // 0x0A45(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetAdventurerRankLimit_ReturnValue_1;     // 0x0A48(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0A4C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88E1[0x3];                                     // 0x0A4D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_5;            // 0x0A50(0x0040)(HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0A90(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_88E2[0x4];                                     // 0x0A94(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_3;           // 0x0A98(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_6;            // 0x0AA8(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_7;          // 0x0AE8(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_5;                          // 0x0B00(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0B10(0x0018)()
	int32                                         CallFunc_GetMainQuestUnlockAdventurerRank_ReturnValue; // 0x0B28(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_88E3[0x4];                                     // 0x0B2C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuestMasterData                       CallFunc_FindQuestMasterData_QuestMasterData_1;    // 0x0B30(0x0118)()
	bool                                          CallFunc_FindQuestMasterData_Exist_1;              // 0x0C48(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88E4[0x7];                                     // 0x0C49(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_4;           // 0x0C50(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_8;          // 0x0C60(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_2;                     // 0x0C78(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_5;           // 0x0C90(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_9;          // 0x0CA0(0x0018)()
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_6;           // 0x0CB8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_7;           // 0x0CC8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_10;         // 0x0CD8(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_11;         // 0x0CF0(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_3;                     // 0x0D08(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue_4;                     // 0x0D20(0x0018)()
	int32                                         Temp_int_Loop_Counter_Variable_4;                  // 0x0D38(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_88E5[0x4];                                     // 0x0D3C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 CallFunc_GetCraftRecepiIdsUnlockAdventurerRank_ReturnValue; // 0x0D40(0x0010)(ReferenceParm)
	bool                                          CallFunc_Less_IntInt_ReturnValue_5;                // 0x0D50(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88E6[0x3];                                     // 0x0D51(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x0D54(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 CallFunc_GetImagineRecepiIdsUnlockAdventurerRank_ReturnValue; // 0x0D58(0x0010)(ReferenceParm)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0D68(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEnableVersion_ReturnValue;              // 0x0D6C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0D6D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88E7[0x2];                                     // 0x0D6E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetAdventureBoardBoardName_ReturnValue;   // 0x0D70(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid_1;           // 0x0D80(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88E8[0x7];                                     // 0x0D81(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue_1;       // 0x0D88(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_12;         // 0x0D90(0x0018)()
	bool                                          CallFunc_FindAdventurerRankDataByRank_IsExists;    // 0x0DA8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88E9[0x7];                                     // 0x0DA9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAdventurerRankMasterData            CallFunc_FindAdventurerRankDataByRank_ReturnValue; // 0x0DB0(0x0030)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_7;            // 0x0DE0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_6;                          // 0x0E20(0x0010)(ReferenceParm)
	bool                                          CallFunc_FindAdventurerRankDataByRank_IsExists_1;  // 0x0E30(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88EA[0x7];                                     // 0x0E31(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBAdventurerRankMasterData            CallFunc_FindAdventurerRankDataByRank_ReturnValue_1; // 0x0E38(0x0030)()
	class FText                                   CallFunc_Format_ReturnValue_5;                     // 0x0E68(0x0018)()
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue_1;            // 0x0E80(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88EB[0x3];                                     // 0x0E81(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_4;                   // 0x0E84(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBMasterReward                        CallFunc_Array_Get_Item_4;                         // 0x0E88(0x0014)(NoDestructor)
	uint8                                         Pad_88EC[0x4];                                     // 0x0E9C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_8;            // 0x0EA0(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Get_Reward_Item_Name_and_Type_OutName;    // 0x0EE0(0x0018)()
	class FText                                   CallFunc_Get_Reward_Item_Name_and_Type_OutType;    // 0x0EF8(0x0018)()
	bool                                          CallFunc_Get_Reward_Item_Name_and_Type_OutNoName;  // 0x0F10(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0F11(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88ED[0x6];                                     // 0x0F12(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_9;            // 0x0F18(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_10;           // 0x0F58(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_7;                          // 0x0F98(0x0010)(ReferenceParm)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_11;           // 0x0FA8(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue_6;                     // 0x0FE8(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_8;                          // 0x1000(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_7;                     // 0x1010(0x0018)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x1028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x1029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0x102A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x102B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_5;        // 0x102C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_6;        // 0x102D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_7;        // 0x102E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88EE[0x1];                                     // 0x102F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_8;           // 0x1030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x1040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88EF[0x7];                                     // 0x1041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_13;         // 0x1048(0x0018)()
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x1060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_88F0[0x7];                                     // 0x1061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue_8;                     // 0x1068(0x0018)()
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x1080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_3;                  // 0x1081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_4;                  // 0x1082(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_5;                  // 0x1083(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_6;                  // 0x1084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits) == 0x000008, "Wrong alignment on AdventurerRank_BenefitList_C_SetTxtRankUpBenefits");
static_assert(sizeof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits) == 0x001088, "Wrong size on AdventurerRank_BenefitList_C_SetTxtRankUpBenefits");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, InRank) == 0x000000, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::InRank' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, IsRankup) == 0x000004, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::IsRankup' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, TmpRewardList) == 0x000008, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::TmpRewardList' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, TmpMissionIds) == 0x000018, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::TmpMissionIds' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, TmpFldName) == 0x000028, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::TmpFldName' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, TmpReleaseFunctionsName) == 0x000030, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::TmpReleaseFunctionsName' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, TmpRecipeName) == 0x000048, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::TmpRecipeName' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, TmpCraftRecepiIds) == 0x000058, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::TmpCraftRecepiIds' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, TmpImagineRecepiIds) == 0x000068, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::TmpImagineRecepiIds' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, TmpBoardRewardIdList) == 0x000078, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::TmpBoardRewardIdList' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, TmpReleaseQuestIds) == 0x000088, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::TmpReleaseQuestIds' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, TmpQuestMasterData) == 0x000098, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::TmpQuestMasterData' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, TmpRankup) == 0x0001B0, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::TmpRankup' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, TmpNewAdventurerRankMasterData) == 0x0001B8, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::TmpNewAdventurerRankMasterData' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, TmpAdventurerRankMasterData) == 0x0001E8, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::TmpAdventurerRankMasterData' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, TmpAdvRank) == 0x000218, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::TmpAdvRank' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, K2Node_MakeStruct_FormatArgumentData) == 0x000220, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, K2Node_MakeArray_Array) == 0x000260, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, Temp_bool_Variable) == 0x000270, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, Temp_int_Variable) == 0x000274, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, Temp_int_Variable_1) == 0x000278, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, Temp_int_Array_Index_Variable) == 0x00027C, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, K2Node_Select_Default) == 0x000280, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, Temp_int_Loop_Counter_Variable) == 0x000284, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_GetTextFromAsset_ReturnValue) == 0x000288, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Add_IntInt_ReturnValue) == 0x000298, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Conv_StringToText_ReturnValue) == 0x0002A0, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Format_ReturnValue) == 0x0002B8, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, Temp_int_Array_Index_Variable_1) == 0x0002D0, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, Temp_int_Loop_Counter_Variable_1) == 0x0002D4, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Add_IntInt_ReturnValue_1) == 0x0002D8, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, Temp_int_Array_Index_Variable_2) == 0x0002DC, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, Temp_bool_Variable_1) == 0x0002E0, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_GetSBPlayerController_ReturnValue) == 0x0002E8, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Array_Length_ReturnValue) == 0x0002F0, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_IsValid_ReturnValue) == 0x0002F4, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_GetAdventureBoardComponent_ReturnValue) == 0x0002F8, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_GetAdventureBoardComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, Temp_int_Loop_Counter_Variable_2) == 0x000300, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Add_IntInt_ReturnValue_2) == 0x000304, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000308, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Array_Length_ReturnValue_1) == 0x000318, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000320, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Greater_IntInt_ReturnValue) == 0x000338, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, Temp_int_Loop_Counter_Variable_3) == 0x00033C, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::Temp_int_Loop_Counter_Variable_3' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Less_IntInt_ReturnValue) == 0x000340, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Add_IntInt_ReturnValue_3) == 0x000344, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_GetAdventurerComponent_PlayerAdventurerComponent) == 0x000348, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_GetAdventurerComponent_PlayerAdventurerComponent' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_IsValid_ReturnValue_1) == 0x000350, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Array_Length_ReturnValue_2) == 0x000354, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_GetTextFromAsset_ReturnValue_2) == 0x000358, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_GetTextFromAsset_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_GetMissionIdsUnlockAdventurerRank_ReturnValue) == 0x000368, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_GetMissionIdsUnlockAdventurerRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000378, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, Temp_int_Array_Index_Variable_3) == 0x000390, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::Temp_int_Array_Index_Variable_3' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_GetExchangeShopAdventurerRankCount_ReturnValue) == 0x000394, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_GetExchangeShopAdventurerRankCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Array_Get_Item) == 0x000398, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Greater_IntInt_ReturnValue_1) == 0x0003A0, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_IsAvailableMapEventTerm_ReturnValue) == 0x0003A1, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_IsAvailableMapEventTerm_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_GetDungeonName_ReturnValue) == 0x0003A8, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_GetDungeonName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0003B8, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_NotEqual_StrStr_ReturnValue) == 0x0003D0, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, K2Node_MakeStruct_FormatArgumentData_1) == 0x0003D8, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, K2Node_MakeArray_Array_1) == 0x000418, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Array_Length_ReturnValue_3) == 0x000428, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Array_Length_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_GetQuestNameByTextId_ReturnValue) == 0x000430, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_GetQuestNameByTextId_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Greater_IntInt_ReturnValue_2) == 0x000440, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Conv_StringToText_ReturnValue_4) == 0x000448, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Conv_StringToText_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, K2Node_MakeStruct_FormatArgumentData_2) == 0x000460, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, K2Node_MakeArray_Array_2) == 0x0004A0, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_GetQuestUnlockAdventurerRank_ReturnValue) == 0x0004B0, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_GetQuestUnlockAdventurerRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_GetQuestUnlockAdventurerRank_ReturnValue_1) == 0x0004C0, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_GetQuestUnlockAdventurerRank_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Array_Get_Item_1) == 0x0004D0, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_FindQuestMasterData_QuestMasterData) == 0x0004D8, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_FindQuestMasterData_QuestMasterData' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_FindQuestMasterData_Exist) == 0x0005F0, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_FindQuestMasterData_Exist' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_GetAcquiredRankupBoardId_ReturnValue) == 0x0005F4, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_GetAcquiredRankupBoardId_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_GetBoardGoalReward_OutRewardList) == 0x0005F8, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_GetBoardGoalReward_OutRewardList' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Array_Length_ReturnValue_4) == 0x000608, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Array_Length_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Less_IntInt_ReturnValue_1) == 0x00060C, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_GetAdventurerRankLimit_ReturnValue) == 0x000610, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_GetAdventurerRankLimit_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Less_IntInt_ReturnValue_2) == 0x000614, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_GetTextFromAssetByName_ReturnValue) == 0x000618, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_GetTextFromAssetByName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Conv_StringToText_ReturnValue_5) == 0x000628, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Conv_StringToText_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, K2Node_MakeStruct_FormatArgumentData_3) == 0x000640, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Conv_StringToText_ReturnValue_6) == 0x000680, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Conv_StringToText_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, K2Node_MakeArray_Array_3) == 0x000698, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, K2Node_MakeStruct_FormatArgumentData_4) == 0x0006A8, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::K2Node_MakeStruct_FormatArgumentData_4' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, K2Node_MakeArray_Array_4) == 0x0006E8, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::K2Node_MakeArray_Array_4' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Conv_IntToString_ReturnValue) == 0x0006F8, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, K2Node_SwitchString_CmpSuccess) == 0x000708, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::K2Node_SwitchString_CmpSuccess' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_GetMasterDataManager_IsValid) == 0x000709, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_GetMasterDataManager_ReturnValue) == 0x000710, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Array_Get_Item_2) == 0x000718, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Array_Get_Item_3) == 0x00071C, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_FindCraftMasterData_isExists) == 0x000720, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_FindCraftMasterData_isExists' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_FindCraftMasterData_ReturnValue) == 0x000728, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_FindCraftMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_FindMasterImagineData_IsExists) == 0x0007B0, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_FindMasterImagineData_IsExists' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_FindMasterImagineData_ReturnValue) == 0x0007B8, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_FindMasterImagineData_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_GetItemMasterData_IsExists) == 0x000868, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_GetItemMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_GetItemMasterData_ReturnValue) == 0x000870, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_GetItemMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_GetMasterImagineText_ReturnValue) == 0x000940, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_GetMasterImagineText_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_GetItemText_ReturnValue) == 0x000950, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_GetItemText_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_GetWeaponMasterData_IsExists) == 0x000960, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_GetWeaponMasterData_IsExists' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_GetWeaponMasterData_ReturnValue) == 0x000968, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_GetWeaponMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_GetWeaponText_ReturnValue) == 0x000A18, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_GetWeaponText_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, K2Node_Select_Default_1) == 0x000A28, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Array_Length_ReturnValue_5) == 0x000A38, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Array_Length_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Less_IntInt_ReturnValue_3) == 0x000A3C, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Less_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Array_Length_ReturnValue_6) == 0x000A40, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Array_Length_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Less_IntInt_ReturnValue_4) == 0x000A44, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Less_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_GetAdventurerRankLimit_ReturnValue_1) == 0x000A48, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_GetAdventurerRankLimit_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000A4C, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, K2Node_MakeStruct_FormatArgumentData_5) == 0x000A50, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::K2Node_MakeStruct_FormatArgumentData_5' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Subtract_IntInt_ReturnValue) == 0x000A90, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_GetTextFromAsset_ReturnValue_3) == 0x000A98, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_GetTextFromAsset_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, K2Node_MakeStruct_FormatArgumentData_6) == 0x000AA8, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::K2Node_MakeStruct_FormatArgumentData_6' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Conv_StringToText_ReturnValue_7) == 0x000AE8, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Conv_StringToText_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, K2Node_MakeArray_Array_5) == 0x000B00, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::K2Node_MakeArray_Array_5' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Format_ReturnValue_1) == 0x000B10, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_GetMainQuestUnlockAdventurerRank_ReturnValue) == 0x000B28, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_GetMainQuestUnlockAdventurerRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_FindQuestMasterData_QuestMasterData_1) == 0x000B30, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_FindQuestMasterData_QuestMasterData_1' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_FindQuestMasterData_Exist_1) == 0x000C48, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_FindQuestMasterData_Exist_1' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_GetTextFromAsset_ReturnValue_4) == 0x000C50, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_GetTextFromAsset_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Conv_StringToText_ReturnValue_8) == 0x000C60, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Conv_StringToText_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Format_ReturnValue_2) == 0x000C78, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Format_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_GetTextFromAsset_ReturnValue_5) == 0x000C90, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_GetTextFromAsset_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Conv_StringToText_ReturnValue_9) == 0x000CA0, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Conv_StringToText_ReturnValue_9' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_GetTextFromAsset_ReturnValue_6) == 0x000CB8, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_GetTextFromAsset_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_GetTextFromAsset_ReturnValue_7) == 0x000CC8, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_GetTextFromAsset_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Conv_StringToText_ReturnValue_10) == 0x000CD8, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Conv_StringToText_ReturnValue_10' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Conv_StringToText_ReturnValue_11) == 0x000CF0, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Conv_StringToText_ReturnValue_11' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Format_ReturnValue_3) == 0x000D08, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Format_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Format_ReturnValue_4) == 0x000D20, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Format_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, Temp_int_Loop_Counter_Variable_4) == 0x000D38, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::Temp_int_Loop_Counter_Variable_4' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_GetCraftRecepiIdsUnlockAdventurerRank_ReturnValue) == 0x000D40, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_GetCraftRecepiIdsUnlockAdventurerRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Less_IntInt_ReturnValue_5) == 0x000D50, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Less_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Add_IntInt_ReturnValue_4) == 0x000D54, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_GetImagineRecepiIdsUnlockAdventurerRank_ReturnValue) == 0x000D58, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_GetImagineRecepiIdsUnlockAdventurerRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000D68, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_IsEnableVersion_ReturnValue) == 0x000D6C, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_IsEnableVersion_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000D6D, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_GetAdventureBoardBoardName_ReturnValue) == 0x000D70, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_GetAdventureBoardBoardName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_GetMasterDataManager_IsValid_1) == 0x000D80, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_GetMasterDataManager_IsValid_1' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_GetMasterDataManager_ReturnValue_1) == 0x000D88, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_GetMasterDataManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Conv_StringToText_ReturnValue_12) == 0x000D90, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Conv_StringToText_ReturnValue_12' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_FindAdventurerRankDataByRank_IsExists) == 0x000DA8, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_FindAdventurerRankDataByRank_IsExists' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_FindAdventurerRankDataByRank_ReturnValue) == 0x000DB0, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_FindAdventurerRankDataByRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, K2Node_MakeStruct_FormatArgumentData_7) == 0x000DE0, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::K2Node_MakeStruct_FormatArgumentData_7' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, K2Node_MakeArray_Array_6) == 0x000E20, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::K2Node_MakeArray_Array_6' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_FindAdventurerRankDataByRank_IsExists_1) == 0x000E30, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_FindAdventurerRankDataByRank_IsExists_1' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_FindAdventurerRankDataByRank_ReturnValue_1) == 0x000E38, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_FindAdventurerRankDataByRank_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Format_ReturnValue_5) == 0x000E68, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Format_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_NotEqual_StrStr_ReturnValue_1) == 0x000E80, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_NotEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, Temp_int_Array_Index_Variable_4) == 0x000E84, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::Temp_int_Array_Index_Variable_4' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Array_Get_Item_4) == 0x000E88, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, K2Node_MakeStruct_FormatArgumentData_8) == 0x000EA0, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::K2Node_MakeStruct_FormatArgumentData_8' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Get_Reward_Item_Name_and_Type_OutName) == 0x000EE0, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Get_Reward_Item_Name_and_Type_OutName' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Get_Reward_Item_Name_and_Type_OutType) == 0x000EF8, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Get_Reward_Item_Name_and_Type_OutType' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Get_Reward_Item_Name_and_Type_OutNoName) == 0x000F10, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Get_Reward_Item_Name_and_Type_OutNoName' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000F11, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, K2Node_MakeStruct_FormatArgumentData_9) == 0x000F18, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::K2Node_MakeStruct_FormatArgumentData_9' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, K2Node_MakeStruct_FormatArgumentData_10) == 0x000F58, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::K2Node_MakeStruct_FormatArgumentData_10' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, K2Node_MakeArray_Array_7) == 0x000F98, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::K2Node_MakeArray_Array_7' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, K2Node_MakeStruct_FormatArgumentData_11) == 0x000FA8, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::K2Node_MakeStruct_FormatArgumentData_11' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Format_ReturnValue_6) == 0x000FE8, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Format_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, K2Node_MakeArray_Array_8) == 0x001000, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::K2Node_MakeArray_Array_8' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Format_ReturnValue_7) == 0x001010, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Format_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x001028, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x001029, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_EqualEqual_ByteByte_ReturnValue_3) == 0x00102A, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_EqualEqual_ByteByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_EqualEqual_ByteByte_ReturnValue_4) == 0x00102B, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_EqualEqual_ByteByte_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_EqualEqual_ByteByte_ReturnValue_5) == 0x00102C, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_EqualEqual_ByteByte_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_EqualEqual_ByteByte_ReturnValue_6) == 0x00102D, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_EqualEqual_ByteByte_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_EqualEqual_ByteByte_ReturnValue_7) == 0x00102E, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_EqualEqual_ByteByte_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_GetTextFromAsset_ReturnValue_8) == 0x001030, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_GetTextFromAsset_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_BooleanOR_ReturnValue) == 0x001040, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Conv_StringToText_ReturnValue_13) == 0x001048, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Conv_StringToText_ReturnValue_13' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_BooleanOR_ReturnValue_1) == 0x001060, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_Format_ReturnValue_8) == 0x001068, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_Format_ReturnValue_8' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_BooleanOR_ReturnValue_2) == 0x001080, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_BooleanOR_ReturnValue_3) == 0x001081, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_BooleanOR_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_BooleanOR_ReturnValue_4) == 0x001082, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_BooleanOR_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_BooleanOR_ReturnValue_5) == 0x001083, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_BooleanOR_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_SetTxtRankUpBenefits, CallFunc_BooleanOR_ReturnValue_6) == 0x001084, "Member 'AdventurerRank_BenefitList_C_SetTxtRankUpBenefits::CallFunc_BooleanOR_ReturnValue_6' has a wrong offset!");

// Function AdventurerRank_BenefitList.AdventurerRank_BenefitList_C.AddTextBenefitList 
// 0x0038 (0x0038 - 0x0000)
struct AdventurerRank_BenefitList_C_AddTextBenefitList_ final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UAdventurerRank_BenefitListItem_C*      CallFunc_Create_ReturnValue;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AdventurerRank_BenefitList_C_AddTextBenefitList_) == 0x000008, "Wrong alignment on AdventurerRank_BenefitList_C_AddTextBenefitList_");
static_assert(sizeof(AdventurerRank_BenefitList_C_AddTextBenefitList_) == 0x000038, "Wrong size on AdventurerRank_BenefitList_C_AddTextBenefitList_");
static_assert(offsetof(AdventurerRank_BenefitList_C_AddTextBenefitList_, InText) == 0x000000, "Member 'AdventurerRank_BenefitList_C_AddTextBenefitList_::InText' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_AddTextBenefitList_, CallFunc_Conv_TextToString_ReturnValue) == 0x000018, "Member 'AdventurerRank_BenefitList_C_AddTextBenefitList_::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_AddTextBenefitList_, CallFunc_Create_ReturnValue) == 0x000028, "Member 'AdventurerRank_BenefitList_C_AddTextBenefitList_::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(AdventurerRank_BenefitList_C_AddTextBenefitList_, CallFunc_AddChild_ReturnValue) == 0x000030, "Member 'AdventurerRank_BenefitList_C_AddTextBenefitList_::CallFunc_AddChild_ReturnValue' has a wrong offset!");

}

