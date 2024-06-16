#pragma once

 

// Package: WBP_SkillBoardTabBox

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.OnClickBanner__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct WBP_SkillBoardTabBox_C_OnClickBanner__DelegateSignature final
{
public:
	ESBClassType                                  Typr;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SkillBoardTabBox_C_OnClickBanner__DelegateSignature) == 0x000001, "Wrong alignment on WBP_SkillBoardTabBox_C_OnClickBanner__DelegateSignature");
static_assert(sizeof(WBP_SkillBoardTabBox_C_OnClickBanner__DelegateSignature) == 0x000001, "Wrong size on WBP_SkillBoardTabBox_C_OnClickBanner__DelegateSignature");
static_assert(offsetof(WBP_SkillBoardTabBox_C_OnClickBanner__DelegateSignature, Typr) == 0x000000, "Member 'WBP_SkillBoardTabBox_C_OnClickBanner__DelegateSignature::Typr' has a wrong offset!");

// Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.ExecuteUbergraph_WBP_SkillBoardTabBox
// 0x0028 (0x0028 - 0x0000)
struct WBP_SkillBoardTabBox_C_ExecuteUbergraph_WBP_SkillBoardTabBox final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C2B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_2;           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SkillBoardTabBox_C_ExecuteUbergraph_WBP_SkillBoardTabBox) == 0x000008, "Wrong alignment on WBP_SkillBoardTabBox_C_ExecuteUbergraph_WBP_SkillBoardTabBox");
static_assert(sizeof(WBP_SkillBoardTabBox_C_ExecuteUbergraph_WBP_SkillBoardTabBox) == 0x000028, "Wrong size on WBP_SkillBoardTabBox_C_ExecuteUbergraph_WBP_SkillBoardTabBox");
static_assert(offsetof(WBP_SkillBoardTabBox_C_ExecuteUbergraph_WBP_SkillBoardTabBox, EntryPoint) == 0x000000, "Member 'WBP_SkillBoardTabBox_C_ExecuteUbergraph_WBP_SkillBoardTabBox::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_ExecuteUbergraph_WBP_SkillBoardTabBox, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000008, "Member 'WBP_SkillBoardTabBox_C_ExecuteUbergraph_WBP_SkillBoardTabBox::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_ExecuteUbergraph_WBP_SkillBoardTabBox, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000010, "Member 'WBP_SkillBoardTabBox_C_ExecuteUbergraph_WBP_SkillBoardTabBox::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_ExecuteUbergraph_WBP_SkillBoardTabBox, CallFunc_SlotAsCanvasSlot_ReturnValue_2) == 0x000018, "Member 'WBP_SkillBoardTabBox_C_ExecuteUbergraph_WBP_SkillBoardTabBox::CallFunc_SlotAsCanvasSlot_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_ExecuteUbergraph_WBP_SkillBoardTabBox, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'WBP_SkillBoardTabBox_C_ExecuteUbergraph_WBP_SkillBoardTabBox::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_ExecuteUbergraph_WBP_SkillBoardTabBox, CallFunc_Add_IntInt_ReturnValue_1) == 0x000024, "Member 'WBP_SkillBoardTabBox_C_ExecuteUbergraph_WBP_SkillBoardTabBox::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");

// Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.Initialize
// 0x0010 (0x0010 - 0x0000)
struct WBP_SkillBoardTabBox_C_Initialize final
{
public:
	TArray<class UWBP_SkillBoardTabBox_Banner_C*> K2Node_MakeArray_Array;                            // 0x0000(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(WBP_SkillBoardTabBox_C_Initialize) == 0x000008, "Wrong alignment on WBP_SkillBoardTabBox_C_Initialize");
static_assert(sizeof(WBP_SkillBoardTabBox_C_Initialize) == 0x000010, "Wrong size on WBP_SkillBoardTabBox_C_Initialize");
static_assert(offsetof(WBP_SkillBoardTabBox_C_Initialize, K2Node_MakeArray_Array) == 0x000000, "Member 'WBP_SkillBoardTabBox_C_Initialize::K2Node_MakeArray_Array' has a wrong offset!");

// Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.Create List
// 0x0020 (0x0020 - 0x0000)
struct WBP_SkillBoardTabBox_C_Create_List final
{
public:
	TArray<ESBClassType>                          EventList;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8C2C[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Clamp_ReturnValue;                        // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SkillBoardTabBox_C_Create_List) == 0x000008, "Wrong alignment on WBP_SkillBoardTabBox_C_Create_List");
static_assert(sizeof(WBP_SkillBoardTabBox_C_Create_List) == 0x000020, "Wrong size on WBP_SkillBoardTabBox_C_Create_List");
static_assert(offsetof(WBP_SkillBoardTabBox_C_Create_List, EventList) == 0x000000, "Member 'WBP_SkillBoardTabBox_C_Create_List::EventList' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_Create_List, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'WBP_SkillBoardTabBox_C_Create_List::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_Create_List, CallFunc_Greater_IntInt_ReturnValue) == 0x000014, "Member 'WBP_SkillBoardTabBox_C_Create_List::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_Create_List, CallFunc_Subtract_IntInt_ReturnValue) == 0x000018, "Member 'WBP_SkillBoardTabBox_C_Create_List::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_Create_List, CallFunc_Clamp_ReturnValue) == 0x00001C, "Member 'WBP_SkillBoardTabBox_C_Create_List::CallFunc_Clamp_ReturnValue' has a wrong offset!");

// Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.UpdateTabInfo
// 0x0060 (0x0060 - 0x0000)
struct WBP_SkillBoardTabBox_C_UpdateTabInfo final
{
public:
	bool                                          Prev;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Next;                                              // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8C2D[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Click;                                             // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_SkillBoardTabBox_Banner_C*         L_SelectBanner;                                    // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8C2E[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8C2F[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8C30[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_5;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8C31[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8C32[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_5;                               // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SkillBoardTabBox_C_UpdateTabInfo) == 0x000008, "Wrong alignment on WBP_SkillBoardTabBox_C_UpdateTabInfo");
static_assert(sizeof(WBP_SkillBoardTabBox_C_UpdateTabInfo) == 0x000060, "Wrong size on WBP_SkillBoardTabBox_C_UpdateTabInfo");
static_assert(offsetof(WBP_SkillBoardTabBox_C_UpdateTabInfo, Prev) == 0x000000, "Member 'WBP_SkillBoardTabBox_C_UpdateTabInfo::Prev' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_UpdateTabInfo, Next) == 0x000001, "Member 'WBP_SkillBoardTabBox_C_UpdateTabInfo::Next' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_UpdateTabInfo, Click) == 0x000004, "Member 'WBP_SkillBoardTabBox_C_UpdateTabInfo::Click' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_UpdateTabInfo, L_SelectBanner) == 0x000008, "Member 'WBP_SkillBoardTabBox_C_UpdateTabInfo::L_SelectBanner' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_UpdateTabInfo, K2Node_SwitchInteger_CmpSuccess) == 0x000010, "Member 'WBP_SkillBoardTabBox_C_UpdateTabInfo::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_UpdateTabInfo, Temp_int_Variable) == 0x000014, "Member 'WBP_SkillBoardTabBox_C_UpdateTabInfo::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_UpdateTabInfo, Temp_int_Variable_1) == 0x000018, "Member 'WBP_SkillBoardTabBox_C_UpdateTabInfo::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_UpdateTabInfo, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'WBP_SkillBoardTabBox_C_UpdateTabInfo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_UpdateTabInfo, CallFunc_Add_IntInt_ReturnValue_1) == 0x000020, "Member 'WBP_SkillBoardTabBox_C_UpdateTabInfo::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_UpdateTabInfo, CallFunc_Add_IntInt_ReturnValue_2) == 0x000024, "Member 'WBP_SkillBoardTabBox_C_UpdateTabInfo::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_UpdateTabInfo, CallFunc_Add_IntInt_ReturnValue_3) == 0x000028, "Member 'WBP_SkillBoardTabBox_C_UpdateTabInfo::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_UpdateTabInfo, CallFunc_Greater_IntInt_ReturnValue) == 0x00002C, "Member 'WBP_SkillBoardTabBox_C_UpdateTabInfo::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_UpdateTabInfo, CallFunc_Add_IntInt_ReturnValue_4) == 0x000030, "Member 'WBP_SkillBoardTabBox_C_UpdateTabInfo::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_UpdateTabInfo, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000034, "Member 'WBP_SkillBoardTabBox_C_UpdateTabInfo::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_UpdateTabInfo, CallFunc_Add_IntInt_ReturnValue_5) == 0x000038, "Member 'WBP_SkillBoardTabBox_C_UpdateTabInfo::CallFunc_Add_IntInt_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_UpdateTabInfo, CallFunc_Greater_IntInt_ReturnValue_1) == 0x00003C, "Member 'WBP_SkillBoardTabBox_C_UpdateTabInfo::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_UpdateTabInfo, CallFunc_Subtract_IntInt_ReturnValue) == 0x000040, "Member 'WBP_SkillBoardTabBox_C_UpdateTabInfo::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_UpdateTabInfo, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000044, "Member 'WBP_SkillBoardTabBox_C_UpdateTabInfo::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_UpdateTabInfo, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x000048, "Member 'WBP_SkillBoardTabBox_C_UpdateTabInfo::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_UpdateTabInfo, CallFunc_Subtract_IntInt_ReturnValue_2) == 0x00004C, "Member 'WBP_SkillBoardTabBox_C_UpdateTabInfo::CallFunc_Subtract_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_UpdateTabInfo, Temp_int_Variable_2) == 0x000050, "Member 'WBP_SkillBoardTabBox_C_UpdateTabInfo::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_UpdateTabInfo, Temp_int_Variable_3) == 0x000054, "Member 'WBP_SkillBoardTabBox_C_UpdateTabInfo::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_UpdateTabInfo, Temp_int_Variable_4) == 0x000058, "Member 'WBP_SkillBoardTabBox_C_UpdateTabInfo::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_UpdateTabInfo, Temp_int_Variable_5) == 0x00005C, "Member 'WBP_SkillBoardTabBox_C_UpdateTabInfo::Temp_int_Variable_5' has a wrong offset!");

// Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.UpdateBannerInfo
// 0x0040 (0x0040 - 0x0000)
struct WBP_SkillBoardTabBox_C_UpdateBannerInfo final
{
public:
	int32                                         L_LoopId;                                          // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C33[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UEventShopTabBox_Banner_C*>      L_BannerList;                                      // 0x0008(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	class UWBP_SkillBoardTabBox_Banner_C*         CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_SkillBoardTabBox_Banner_C*         CallFunc_Array_Get_Item_1;                         // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8C34[0x2];                                     // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SkillBoardTabBox_C_UpdateBannerInfo) == 0x000008, "Wrong alignment on WBP_SkillBoardTabBox_C_UpdateBannerInfo");
static_assert(sizeof(WBP_SkillBoardTabBox_C_UpdateBannerInfo) == 0x000040, "Wrong size on WBP_SkillBoardTabBox_C_UpdateBannerInfo");
static_assert(offsetof(WBP_SkillBoardTabBox_C_UpdateBannerInfo, L_LoopId) == 0x000000, "Member 'WBP_SkillBoardTabBox_C_UpdateBannerInfo::L_LoopId' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_UpdateBannerInfo, L_BannerList) == 0x000008, "Member 'WBP_SkillBoardTabBox_C_UpdateBannerInfo::L_BannerList' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_UpdateBannerInfo, CallFunc_Array_Get_Item) == 0x000018, "Member 'WBP_SkillBoardTabBox_C_UpdateBannerInfo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_UpdateBannerInfo, CallFunc_Array_Get_Item_1) == 0x000020, "Member 'WBP_SkillBoardTabBox_C_UpdateBannerInfo::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_UpdateBannerInfo, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'WBP_SkillBoardTabBox_C_UpdateBannerInfo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_UpdateBannerInfo, Temp_int_Variable) == 0x00002C, "Member 'WBP_SkillBoardTabBox_C_UpdateBannerInfo::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_UpdateBannerInfo, CallFunc_Add_IntInt_ReturnValue_1) == 0x000030, "Member 'WBP_SkillBoardTabBox_C_UpdateBannerInfo::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_UpdateBannerInfo, CallFunc_Add_IntInt_ReturnValue_2) == 0x000034, "Member 'WBP_SkillBoardTabBox_C_UpdateBannerInfo::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_UpdateBannerInfo, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000038, "Member 'WBP_SkillBoardTabBox_C_UpdateBannerInfo::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_UpdateBannerInfo, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000039, "Member 'WBP_SkillBoardTabBox_C_UpdateBannerInfo::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_UpdateBannerInfo, CallFunc_Add_IntInt_ReturnValue_3) == 0x00003C, "Member 'WBP_SkillBoardTabBox_C_UpdateBannerInfo::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");

// Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.SetBannerEnable
// 0x0002 (0x0002 - 0x0000)
struct WBP_SkillBoardTabBox_C_SetBannerEnable final
{
public:
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_SkillBoardTabBox_C_SetBannerEnable) == 0x000001, "Wrong alignment on WBP_SkillBoardTabBox_C_SetBannerEnable");
static_assert(sizeof(WBP_SkillBoardTabBox_C_SetBannerEnable) == 0x000002, "Wrong size on WBP_SkillBoardTabBox_C_SetBannerEnable");
static_assert(offsetof(WBP_SkillBoardTabBox_C_SetBannerEnable, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000000, "Member 'WBP_SkillBoardTabBox_C_SetBannerEnable::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_SetBannerEnable, K2Node_SwitchInteger_CmpSuccess) == 0x000001, "Member 'WBP_SkillBoardTabBox_C_SetBannerEnable::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

// Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.SetBannerSelect
// 0x0020 (0x0020 - 0x0000)
struct WBP_SkillBoardTabBox_C_SetBannerSelect final
{
public:
	class UWBP_SkillBoardTabBox_Banner_C*         Banner;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Force;                                             // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8C35[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_SkillBoardTabBox_Banner_C*         L_SelectBanner;                                    // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_SkillBoardTabBox_C_SetBannerSelect) == 0x000008, "Wrong alignment on WBP_SkillBoardTabBox_C_SetBannerSelect");
static_assert(sizeof(WBP_SkillBoardTabBox_C_SetBannerSelect) == 0x000020, "Wrong size on WBP_SkillBoardTabBox_C_SetBannerSelect");
static_assert(offsetof(WBP_SkillBoardTabBox_C_SetBannerSelect, Banner) == 0x000000, "Member 'WBP_SkillBoardTabBox_C_SetBannerSelect::Banner' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_SetBannerSelect, Force) == 0x000008, "Member 'WBP_SkillBoardTabBox_C_SetBannerSelect::Force' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_SetBannerSelect, L_SelectBanner) == 0x000010, "Member 'WBP_SkillBoardTabBox_C_SetBannerSelect::L_SelectBanner' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_SetBannerSelect, CallFunc_Not_PreBool_ReturnValue) == 0x000018, "Member 'WBP_SkillBoardTabBox_C_SetBannerSelect::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_SetBannerSelect, CallFunc_NotEqual_ObjectObject_ReturnValue) == 0x000019, "Member 'WBP_SkillBoardTabBox_C_SetBannerSelect::CallFunc_NotEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_SetBannerSelect, CallFunc_IsValid_ReturnValue) == 0x00001A, "Member 'WBP_SkillBoardTabBox_C_SetBannerSelect::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_SetBannerSelect, CallFunc_Not_PreBool_ReturnValue_1) == 0x00001B, "Member 'WBP_SkillBoardTabBox_C_SetBannerSelect::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");

// Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.CheckPagerBtn
// 0x0014 (0x0014 - 0x0000)
struct WBP_SkillBoardTabBox_C_CheckPagerBtn final
{
public:
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8C36[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_2;            // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_SkillBoardTabBox_C_CheckPagerBtn) == 0x000004, "Wrong alignment on WBP_SkillBoardTabBox_C_CheckPagerBtn");
static_assert(sizeof(WBP_SkillBoardTabBox_C_CheckPagerBtn) == 0x000014, "Wrong size on WBP_SkillBoardTabBox_C_CheckPagerBtn");
static_assert(offsetof(WBP_SkillBoardTabBox_C_CheckPagerBtn, CallFunc_Add_IntInt_ReturnValue) == 0x000000, "Member 'WBP_SkillBoardTabBox_C_CheckPagerBtn::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_CheckPagerBtn, CallFunc_Add_IntInt_ReturnValue_1) == 0x000004, "Member 'WBP_SkillBoardTabBox_C_CheckPagerBtn::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_CheckPagerBtn, CallFunc_Greater_IntInt_ReturnValue) == 0x000008, "Member 'WBP_SkillBoardTabBox_C_CheckPagerBtn::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_CheckPagerBtn, CallFunc_Add_IntInt_ReturnValue_2) == 0x00000C, "Member 'WBP_SkillBoardTabBox_C_CheckPagerBtn::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_CheckPagerBtn, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000010, "Member 'WBP_SkillBoardTabBox_C_CheckPagerBtn::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_CheckPagerBtn, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000011, "Member 'WBP_SkillBoardTabBox_C_CheckPagerBtn::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_CheckPagerBtn, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x000012, "Member 'WBP_SkillBoardTabBox_C_CheckPagerBtn::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_CheckPagerBtn, CallFunc_NotEqual_IntInt_ReturnValue_2) == 0x000013, "Member 'WBP_SkillBoardTabBox_C_CheckPagerBtn::CallFunc_NotEqual_IntInt_ReturnValue_2' has a wrong offset!");

// Function WBP_SkillBoardTabBox.WBP_SkillBoardTabBox_C.Select
// 0x000C (0x000C - 0x0000)
struct WBP_SkillBoardTabBox_C_Select final
{
public:
	ESBClassType                                  Type;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C37[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_SkillBoardTabBox_C_Select) == 0x000004, "Wrong alignment on WBP_SkillBoardTabBox_C_Select");
static_assert(sizeof(WBP_SkillBoardTabBox_C_Select) == 0x00000C, "Wrong size on WBP_SkillBoardTabBox_C_Select");
static_assert(offsetof(WBP_SkillBoardTabBox_C_Select, Type) == 0x000000, "Member 'WBP_SkillBoardTabBox_C_Select::Type' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_Select, CallFunc_Array_Length_ReturnValue) == 0x000004, "Member 'WBP_SkillBoardTabBox_C_Select::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_Select, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000008, "Member 'WBP_SkillBoardTabBox_C_Select::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillBoardTabBox_C_Select, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x000009, "Member 'WBP_SkillBoardTabBox_C_Select::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");

}

