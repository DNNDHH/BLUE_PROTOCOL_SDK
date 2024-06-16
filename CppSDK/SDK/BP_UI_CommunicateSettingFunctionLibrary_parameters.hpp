#pragma once

 

// Package: BP_UI_CommunicateSettingFunctionLibrary

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "ST_ItemIconData_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BP_UI_CommunicateSettingFunctionLibrary.BP_UI_CommunicateSettingFunctionLibrary_C.GetCommunicateSettingBgSettingImageSize
// 0x0010 (0x0010 - 0x0000)
struct BP_UI_CommunicateSettingFunctionLibrary_C_GetCommunicateSettingBgSettingImageSize final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              OutImageSize;                                      // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UI_CommunicateSettingFunctionLibrary_C_GetCommunicateSettingBgSettingImageSize) == 0x000008, "Wrong alignment on BP_UI_CommunicateSettingFunctionLibrary_C_GetCommunicateSettingBgSettingImageSize");
static_assert(sizeof(BP_UI_CommunicateSettingFunctionLibrary_C_GetCommunicateSettingBgSettingImageSize) == 0x000010, "Wrong size on BP_UI_CommunicateSettingFunctionLibrary_C_GetCommunicateSettingBgSettingImageSize");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_GetCommunicateSettingBgSettingImageSize, __WorldContext) == 0x000000, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_GetCommunicateSettingBgSettingImageSize::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_GetCommunicateSettingBgSettingImageSize, OutImageSize) == 0x000008, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_GetCommunicateSettingBgSettingImageSize::OutImageSize' has a wrong offset!");

// Function BP_UI_CommunicateSettingFunctionLibrary.BP_UI_CommunicateSettingFunctionLibrary_C.SetBG
// 0x00F0 (0x00F0 - 0x0000)
struct BP_UI_CommunicateSettingFunctionLibrary_C_SetBG final
{
public:
	class UImage*                                 Image;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         InScale;                                           // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              InPosition;                                        // 0x000C(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A69[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanel*                           InCanvasPanel;                                     // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2DDynamic*                      Texture;                                           // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher;                                    // 0x0028(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                TmpWidget;                                         // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              TmpPosition;                                       // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 TmpImage;                                          // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetCommunicateSettingBgSettingImageSize_OutImageSize; // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Multiply_Vector2DFloat_ReturnValue;       // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0068(0x0088)()
};
static_assert(alignof(BP_UI_CommunicateSettingFunctionLibrary_C_SetBG) == 0x000008, "Wrong alignment on BP_UI_CommunicateSettingFunctionLibrary_C_SetBG");
static_assert(sizeof(BP_UI_CommunicateSettingFunctionLibrary_C_SetBG) == 0x0000F0, "Wrong size on BP_UI_CommunicateSettingFunctionLibrary_C_SetBG");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetBG, Image) == 0x000000, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetBG::Image' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetBG, InScale) == 0x000008, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetBG::InScale' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetBG, InPosition) == 0x00000C, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetBG::InPosition' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetBG, InCanvasPanel) == 0x000018, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetBG::InCanvasPanel' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetBG, Texture) == 0x000020, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetBG::Texture' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetBG, WidgetSwitcher) == 0x000028, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetBG::WidgetSwitcher' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetBG, __WorldContext) == 0x000030, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetBG::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetBG, TmpWidget) == 0x000038, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetBG::TmpWidget' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetBG, TmpPosition) == 0x000040, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetBG::TmpPosition' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetBG, TmpImage) == 0x000048, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetBG::TmpImage' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetBG, CallFunc_GetCommunicateSettingBgSettingImageSize_OutImageSize) == 0x000050, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetBG::CallFunc_GetCommunicateSettingBgSettingImageSize_OutImageSize' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetBG, CallFunc_Multiply_Vector2DFloat_ReturnValue) == 0x000058, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetBG::CallFunc_Multiply_Vector2DFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetBG, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000060, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetBG::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetBG, K2Node_MakeStruct_SlateBrush) == 0x000068, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetBG::K2Node_MakeStruct_SlateBrush' has a wrong offset!");

// Function BP_UI_CommunicateSettingFunctionLibrary.BP_UI_CommunicateSettingFunctionLibrary_C.SetClassType
// 0x00B8 (0x00B8 - 0x0000)
struct BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType final
{
public:
	ESBClassType                                  InCurrentClassType;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A6A[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileClassListData            InClassListData;                                   // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UPlayerProfileClassList_C*              InPlayerProfileClassList;                          // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommunicateSettingMenu_FaceBgData_C*   InCommunicateSettingMenu_FaceBgData;               // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 InAwardIdList;                                     // 0x0028(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                                __WorldContext;                                    // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpClassLevel;                                     // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A6B[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<ESBClassType>                          DispClassType;                                     // 0x0048(0x0010)(Edit, BlueprintVisible)
	ESBClassType                                  CurrentClassType;                                  // 0x0058(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A6C[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    K2Node_DynamicCast_AsSBPlayer_Controller;          // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A6D[0x3];                                     // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerConcernedList*                 CallFunc_GetConcernedList_ReturnValue;             // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<ESBClassType>                          CallFunc_GetSortedPlayerClassList_ReturnValue;     // 0x0088(0x0010)(ReferenceParm)
	ESBClassType                                  CallFunc_Array_Get_Item;                           // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A6E[0x3];                                     // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlayerProfileClassData                CallFunc_GetPlayerProfileClassData_ReturnValue;    // 0x009C(0x0008)(NoDestructor)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A6F[0x3];                                     // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetClassLevel_Level;                      // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType) == 0x000008, "Wrong alignment on BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType");
static_assert(sizeof(BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType) == 0x0000B8, "Wrong size on BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType, InCurrentClassType) == 0x000000, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType::InCurrentClassType' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType, InClassListData) == 0x000008, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType::InClassListData' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType, InPlayerProfileClassList) == 0x000018, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType::InPlayerProfileClassList' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType, InCommunicateSettingMenu_FaceBgData) == 0x000020, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType::InCommunicateSettingMenu_FaceBgData' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType, InAwardIdList) == 0x000028, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType::InAwardIdList' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType, __WorldContext) == 0x000038, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType, TmpClassLevel) == 0x000040, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType::TmpClassLevel' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType, DispClassType) == 0x000048, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType::DispClassType' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType, CurrentClassType) == 0x000058, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType::CurrentClassType' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType, CallFunc_GetPlayerController_ReturnValue) == 0x000060, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType, K2Node_DynamicCast_AsSBPlayer_Controller) == 0x000068, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType::K2Node_DynamicCast_AsSBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType, Temp_int_Array_Index_Variable) == 0x000074, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType, CallFunc_GetConcernedList_ReturnValue) == 0x000078, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType::CallFunc_GetConcernedList_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType, Temp_int_Loop_Counter_Variable) == 0x000080, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType, CallFunc_Add_IntInt_ReturnValue) == 0x000084, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType, CallFunc_GetSortedPlayerClassList_ReturnValue) == 0x000088, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType::CallFunc_GetSortedPlayerClassList_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType, CallFunc_Array_Get_Item) == 0x000098, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType, CallFunc_GetPlayerProfileClassData_ReturnValue) == 0x00009C, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType::CallFunc_GetPlayerProfileClassData_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType, CallFunc_Array_Length_ReturnValue) == 0x0000A4, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType, CallFunc_Less_IntInt_ReturnValue) == 0x0000A8, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType, CallFunc_GetClassLevel_Level) == 0x0000AC, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType::CallFunc_GetClassLevel_Level' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000B0, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetClassType::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function BP_UI_CommunicateSettingFunctionLibrary.BP_UI_CommunicateSettingFunctionLibrary_C.GetClassLevel
// 0x0030 (0x0030 - 0x0000)
struct BP_UI_CommunicateSettingFunctionLibrary_C_GetClassLevel final
{
public:
	ESBClassType                                  InClassType;                                       // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A70[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InExp;                                             // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Level;                                             // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAdventurerRank_ReturnValue;            // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A71[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_CalculateClassLevel_ReturnValue;          // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_UI_CommunicateSettingFunctionLibrary_C_GetClassLevel) == 0x000008, "Wrong alignment on BP_UI_CommunicateSettingFunctionLibrary_C_GetClassLevel");
static_assert(sizeof(BP_UI_CommunicateSettingFunctionLibrary_C_GetClassLevel) == 0x000030, "Wrong size on BP_UI_CommunicateSettingFunctionLibrary_C_GetClassLevel");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_GetClassLevel, InClassType) == 0x000000, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_GetClassLevel::InClassType' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_GetClassLevel, InExp) == 0x000004, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_GetClassLevel::InExp' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_GetClassLevel, __WorldContext) == 0x000008, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_GetClassLevel::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_GetClassLevel, Level) == 0x000010, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_GetClassLevel::Level' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_GetClassLevel, CallFunc_GetAdventurerRank_ReturnValue) == 0x000014, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_GetClassLevel::CallFunc_GetAdventurerRank_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_GetClassLevel, CallFunc_GetMasterDataManager_IsValid) == 0x000018, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_GetClassLevel::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_GetClassLevel, CallFunc_GetMasterDataManager_ReturnValue) == 0x000020, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_GetClassLevel::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_GetClassLevel, CallFunc_CalculateClassLevel_ReturnValue) == 0x000028, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_GetClassLevel::CallFunc_CalculateClassLevel_ReturnValue' has a wrong offset!");

// Function BP_UI_CommunicateSettingFunctionLibrary.BP_UI_CommunicateSettingFunctionLibrary_C.InitTenstionTag
// 0x0060 (0x0060 - 0x0000)
struct BP_UI_CommunicateSettingFunctionLibrary_C_InitTenstionTag final
{
public:
	class UComboBoxString*                        _____;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 OutTensionTagIndex;                                // 0x0010(0x0010)(Parm, OutParm)
	int32                                         TextNum;                                           // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A72[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 TensionTagIndex;                                   // 0x0028(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Variable;                                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetTextNumFromAsset_ReturnValue;          // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UI_CommunicateSettingFunctionLibrary_C_InitTenstionTag) == 0x000008, "Wrong alignment on BP_UI_CommunicateSettingFunctionLibrary_C_InitTenstionTag");
static_assert(sizeof(BP_UI_CommunicateSettingFunctionLibrary_C_InitTenstionTag) == 0x000060, "Wrong size on BP_UI_CommunicateSettingFunctionLibrary_C_InitTenstionTag");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_InitTenstionTag, _____) == 0x000000, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_InitTenstionTag::_____' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_InitTenstionTag, __WorldContext) == 0x000008, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_InitTenstionTag::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_InitTenstionTag, OutTensionTagIndex) == 0x000010, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_InitTenstionTag::OutTensionTagIndex' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_InitTenstionTag, TextNum) == 0x000020, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_InitTenstionTag::TextNum' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_InitTenstionTag, TensionTagIndex) == 0x000028, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_InitTenstionTag::TensionTagIndex' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_InitTenstionTag, Temp_int_Variable) == 0x000038, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_InitTenstionTag::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_InitTenstionTag, CallFunc_Array_Add_ReturnValue) == 0x00003C, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_InitTenstionTag::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_InitTenstionTag, CallFunc_GetTextFromAsset_ReturnValue) == 0x000040, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_InitTenstionTag::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_InitTenstionTag, CallFunc_Add_IntInt_ReturnValue) == 0x000050, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_InitTenstionTag::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_InitTenstionTag, CallFunc_Subtract_IntInt_ReturnValue) == 0x000054, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_InitTenstionTag::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_InitTenstionTag, CallFunc_GetTextNumFromAsset_ReturnValue) == 0x000058, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_InitTenstionTag::CallFunc_GetTextNumFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_InitTenstionTag, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00005C, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_InitTenstionTag::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

// Function BP_UI_CommunicateSettingFunctionLibrary.BP_UI_CommunicateSettingFunctionLibrary_C.TextBoxChanged
// 0x0040 (0x0040 - 0x0000)
struct BP_UI_CommunicateSettingFunctionLibrary_C_TextBoxChanged final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UWidget*                                InLabelComment;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue;                          // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UI_CommunicateSettingFunctionLibrary_C_TextBoxChanged) == 0x000008, "Wrong alignment on BP_UI_CommunicateSettingFunctionLibrary_C_TextBoxChanged");
static_assert(sizeof(BP_UI_CommunicateSettingFunctionLibrary_C_TextBoxChanged) == 0x000040, "Wrong size on BP_UI_CommunicateSettingFunctionLibrary_C_TextBoxChanged");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_TextBoxChanged, InText) == 0x000000, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_TextBoxChanged::InText' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_TextBoxChanged, InLabelComment) == 0x000018, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_TextBoxChanged::InLabelComment' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_TextBoxChanged, __WorldContext) == 0x000020, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_TextBoxChanged::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_TextBoxChanged, CallFunc_Conv_TextToString_ReturnValue) == 0x000028, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_TextBoxChanged::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_TextBoxChanged, CallFunc_Len_ReturnValue) == 0x000038, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_TextBoxChanged::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_TextBoxChanged, CallFunc_Greater_IntInt_ReturnValue) == 0x00003C, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_TextBoxChanged::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function BP_UI_CommunicateSettingFunctionLibrary.BP_UI_CommunicateSettingFunctionLibrary_C.SetDecoFrameChange
// 0x01B8 (0x01B8 - 0x0000)
struct BP_UI_CommunicateSettingFunctionLibrary_C_SetDecoFrameChange final
{
public:
	int32                                         InItemID;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A73[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UImage*                                 InFrameWG;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindAdventureCardDecorationMaster_bIsValid; // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A74[0x2];                                     // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterAdventureCardDecoration       CallFunc_FindAdventureCardDecorationMaster_ReturnValue; // 0x001C(0x0010)(NoDestructor)
	uint8                                         Pad_8A75[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FST_ItemIconData                       CallFunc_GetDataTableRowFromName_OutRow;           // 0x0048(0x00C8)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A76[0x7];                                     // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_DynamicCast_AsTexture_2D;                   // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A77[0x7];                                     // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0130(0x0088)()
};
static_assert(alignof(BP_UI_CommunicateSettingFunctionLibrary_C_SetDecoFrameChange) == 0x000008, "Wrong alignment on BP_UI_CommunicateSettingFunctionLibrary_C_SetDecoFrameChange");
static_assert(sizeof(BP_UI_CommunicateSettingFunctionLibrary_C_SetDecoFrameChange) == 0x0001B8, "Wrong size on BP_UI_CommunicateSettingFunctionLibrary_C_SetDecoFrameChange");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetDecoFrameChange, InItemID) == 0x000000, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetDecoFrameChange::InItemID' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetDecoFrameChange, InFrameWG) == 0x000008, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetDecoFrameChange::InFrameWG' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetDecoFrameChange, __WorldContext) == 0x000010, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetDecoFrameChange::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetDecoFrameChange, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000018, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetDecoFrameChange::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetDecoFrameChange, CallFunc_FindAdventureCardDecorationMaster_bIsValid) == 0x000019, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetDecoFrameChange::CallFunc_FindAdventureCardDecorationMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetDecoFrameChange, CallFunc_FindAdventureCardDecorationMaster_ReturnValue) == 0x00001C, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetDecoFrameChange::CallFunc_FindAdventureCardDecorationMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetDecoFrameChange, CallFunc_Conv_IntToString_ReturnValue) == 0x000030, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetDecoFrameChange::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetDecoFrameChange, CallFunc_Conv_StringToName_ReturnValue) == 0x000040, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetDecoFrameChange::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetDecoFrameChange, CallFunc_GetDataTableRowFromName_OutRow) == 0x000048, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetDecoFrameChange::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetDecoFrameChange, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000110, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetDecoFrameChange::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetDecoFrameChange, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000118, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetDecoFrameChange::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetDecoFrameChange, K2Node_DynamicCast_AsTexture_2D) == 0x000120, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetDecoFrameChange::K2Node_DynamicCast_AsTexture_2D' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetDecoFrameChange, K2Node_DynamicCast_bSuccess) == 0x000128, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetDecoFrameChange::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_SetDecoFrameChange, K2Node_MakeStruct_SlateBrush) == 0x000130, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_SetDecoFrameChange::K2Node_MakeStruct_SlateBrush' has a wrong offset!");

// Function BP_UI_CommunicateSettingFunctionLibrary.BP_UI_CommunicateSettingFunctionLibrary_C.GetFrameData
// 0x0148 (0x0148 - 0x0000)
struct BP_UI_CommunicateSettingFunctionLibrary_C_GetFrameData final
{
public:
	int32                                         InItemID;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A78[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                InWG;                                              // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              TextureL;                                          // 0x0018(0x0028)(Parm, OutParm, HasGetValueTypeHash)
	bool                                          CallFunc_FindAdventureCardDecorationMaster_bIsValid; // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A79[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterAdventureCardDecoration       CallFunc_FindAdventureCardDecorationMaster_ReturnValue; // 0x0044(0x0010)(NoDestructor)
	uint8                                         Pad_8A7A[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A7B[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_ItemIconData                       CallFunc_GetDataTableRowFromName_OutRow;           // 0x0078(0x00C8)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_UI_CommunicateSettingFunctionLibrary_C_GetFrameData) == 0x000008, "Wrong alignment on BP_UI_CommunicateSettingFunctionLibrary_C_GetFrameData");
static_assert(sizeof(BP_UI_CommunicateSettingFunctionLibrary_C_GetFrameData) == 0x000148, "Wrong size on BP_UI_CommunicateSettingFunctionLibrary_C_GetFrameData");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_GetFrameData, InItemID) == 0x000000, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_GetFrameData::InItemID' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_GetFrameData, InWG) == 0x000008, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_GetFrameData::InWG' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_GetFrameData, __WorldContext) == 0x000010, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_GetFrameData::__WorldContext' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_GetFrameData, TextureL) == 0x000018, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_GetFrameData::TextureL' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_GetFrameData, CallFunc_FindAdventureCardDecorationMaster_bIsValid) == 0x000040, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_GetFrameData::CallFunc_FindAdventureCardDecorationMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_GetFrameData, CallFunc_FindAdventureCardDecorationMaster_ReturnValue) == 0x000044, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_GetFrameData::CallFunc_FindAdventureCardDecorationMaster_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_GetFrameData, CallFunc_Conv_IntToString_ReturnValue) == 0x000058, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_GetFrameData::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_GetFrameData, CallFunc_Conv_StringToName_ReturnValue) == 0x000068, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_GetFrameData::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_GetFrameData, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000070, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_GetFrameData::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_GetFrameData, CallFunc_GetDataTableRowFromName_OutRow) == 0x000078, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_GetFrameData::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_UI_CommunicateSettingFunctionLibrary_C_GetFrameData, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000140, "Member 'BP_UI_CommunicateSettingFunctionLibrary_C_GetFrameData::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");

}

