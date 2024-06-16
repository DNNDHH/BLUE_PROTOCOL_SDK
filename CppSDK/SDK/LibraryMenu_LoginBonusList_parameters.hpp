#pragma once

 

// Package: LibraryMenu_LoginBonusList

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.ListItemClick__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct LibraryMenu_LoginBonusList_C_ListItemClick__DelegateSignature final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_LoginBonusList_C_ListItemClick__DelegateSignature) == 0x000004, "Wrong alignment on LibraryMenu_LoginBonusList_C_ListItemClick__DelegateSignature");
static_assert(sizeof(LibraryMenu_LoginBonusList_C_ListItemClick__DelegateSignature) == 0x000004, "Wrong size on LibraryMenu_LoginBonusList_C_ListItemClick__DelegateSignature");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_ListItemClick__DelegateSignature, Param_Index) == 0x000000, "Member 'LibraryMenu_LoginBonusList_C_ListItemClick__DelegateSignature::Param_Index' has a wrong offset!");

// Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.BannerClick__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct LibraryMenu_LoginBonusList_C_BannerClick__DelegateSignature final
{
public:
	int32                                         ID;                                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_LoginBonusList_C_BannerClick__DelegateSignature) == 0x000004, "Wrong alignment on LibraryMenu_LoginBonusList_C_BannerClick__DelegateSignature");
static_assert(sizeof(LibraryMenu_LoginBonusList_C_BannerClick__DelegateSignature) == 0x000004, "Wrong size on LibraryMenu_LoginBonusList_C_BannerClick__DelegateSignature");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_BannerClick__DelegateSignature, ID) == 0x000000, "Member 'LibraryMenu_LoginBonusList_C_BannerClick__DelegateSignature::ID' has a wrong offset!");

// Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.ExecuteUbergraph_LibraryMenu_LoginBonusList
// 0x0030 (0x0030 - 0x0000)
struct LibraryMenu_LoginBonusList_C_ExecuteUbergraph_LibraryMenu_LoginBonusList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Enable;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E36[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_Index;                          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_id;                             // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULibraryMenu_LoginBonus_BannerImage_C*  K2Node_CustomEvent_SelectedBtn;                    // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 Index)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(LibraryMenu_LoginBonusList_C_ExecuteUbergraph_LibraryMenu_LoginBonusList) == 0x000008, "Wrong alignment on LibraryMenu_LoginBonusList_C_ExecuteUbergraph_LibraryMenu_LoginBonusList");
static_assert(sizeof(LibraryMenu_LoginBonusList_C_ExecuteUbergraph_LibraryMenu_LoginBonusList) == 0x000030, "Wrong size on LibraryMenu_LoginBonusList_C_ExecuteUbergraph_LibraryMenu_LoginBonusList");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_ExecuteUbergraph_LibraryMenu_LoginBonusList, EntryPoint) == 0x000000, "Member 'LibraryMenu_LoginBonusList_C_ExecuteUbergraph_LibraryMenu_LoginBonusList::EntryPoint' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_ExecuteUbergraph_LibraryMenu_LoginBonusList, K2Node_CustomEvent_Enable) == 0x000004, "Member 'LibraryMenu_LoginBonusList_C_ExecuteUbergraph_LibraryMenu_LoginBonusList::K2Node_CustomEvent_Enable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_ExecuteUbergraph_LibraryMenu_LoginBonusList, K2Node_CustomEvent_Index) == 0x000008, "Member 'LibraryMenu_LoginBonusList_C_ExecuteUbergraph_LibraryMenu_LoginBonusList::K2Node_CustomEvent_Index' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_ExecuteUbergraph_LibraryMenu_LoginBonusList, CallFunc_Subtract_IntInt_ReturnValue) == 0x00000C, "Member 'LibraryMenu_LoginBonusList_C_ExecuteUbergraph_LibraryMenu_LoginBonusList::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_ExecuteUbergraph_LibraryMenu_LoginBonusList, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'LibraryMenu_LoginBonusList_C_ExecuteUbergraph_LibraryMenu_LoginBonusList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_ExecuteUbergraph_LibraryMenu_LoginBonusList, K2Node_CustomEvent_id) == 0x000014, "Member 'LibraryMenu_LoginBonusList_C_ExecuteUbergraph_LibraryMenu_LoginBonusList::K2Node_CustomEvent_id' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_ExecuteUbergraph_LibraryMenu_LoginBonusList, K2Node_CustomEvent_SelectedBtn) == 0x000018, "Member 'LibraryMenu_LoginBonusList_C_ExecuteUbergraph_LibraryMenu_LoginBonusList::K2Node_CustomEvent_SelectedBtn' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_ExecuteUbergraph_LibraryMenu_LoginBonusList, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'LibraryMenu_LoginBonusList_C_ExecuteUbergraph_LibraryMenu_LoginBonusList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.OnBannerClicked
// 0x0010 (0x0010 - 0x0000)
struct LibraryMenu_LoginBonusList_C_OnBannerClicked final
{
public:
	int32                                         ID;                                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E37[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ULibraryMenu_LoginBonus_BannerImage_C*  SelectedBtn;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_LoginBonusList_C_OnBannerClicked) == 0x000008, "Wrong alignment on LibraryMenu_LoginBonusList_C_OnBannerClicked");
static_assert(sizeof(LibraryMenu_LoginBonusList_C_OnBannerClicked) == 0x000010, "Wrong size on LibraryMenu_LoginBonusList_C_OnBannerClicked");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_OnBannerClicked, ID) == 0x000000, "Member 'LibraryMenu_LoginBonusList_C_OnBannerClicked::ID' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_OnBannerClicked, SelectedBtn) == 0x000008, "Member 'LibraryMenu_LoginBonusList_C_OnBannerClicked::SelectedBtn' has a wrong offset!");

// Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.OnListItemClick
// 0x0004 (0x0004 - 0x0000)
struct LibraryMenu_LoginBonusList_C_OnListItemClick final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_LoginBonusList_C_OnListItemClick) == 0x000004, "Wrong alignment on LibraryMenu_LoginBonusList_C_OnListItemClick");
static_assert(sizeof(LibraryMenu_LoginBonusList_C_OnListItemClick) == 0x000004, "Wrong size on LibraryMenu_LoginBonusList_C_OnListItemClick");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_OnListItemClick, Param_Index) == 0x000000, "Member 'LibraryMenu_LoginBonusList_C_OnListItemClick::Param_Index' has a wrong offset!");

// Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.OnImageLoadComplete
// 0x0001 (0x0001 - 0x0000)
struct LibraryMenu_LoginBonusList_C_OnImageLoadComplete final
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_LoginBonusList_C_OnImageLoadComplete) == 0x000001, "Wrong alignment on LibraryMenu_LoginBonusList_C_OnImageLoadComplete");
static_assert(sizeof(LibraryMenu_LoginBonusList_C_OnImageLoadComplete) == 0x000001, "Wrong size on LibraryMenu_LoginBonusList_C_OnImageLoadComplete");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_OnImageLoadComplete, Enable) == 0x000000, "Member 'LibraryMenu_LoginBonusList_C_OnImageLoadComplete::Enable' has a wrong offset!");

// Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.SetData
// 0x00C8 (0x00C8 - 0x0000)
struct LibraryMenu_LoginBonusList_C_SetData final
{
public:
	struct FSBLoginBonusWindowData                DataList;                                          // 0x0000(0x00A0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          MouseClick;                                        // 0x00A0(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E38[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ULibraryMenu_LoginBonusListLine_C*      WorkWidget;                                        // 0x00A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_LoginBonusListLine_C*              Old_WorkWidget;                                    // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LoopEnd;                                           // 0x00B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxDay;                                            // 0x00BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LineIndex;                                         // 0x00C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_LoginBonusList_C_SetData) == 0x000008, "Wrong alignment on LibraryMenu_LoginBonusList_C_SetData");
static_assert(sizeof(LibraryMenu_LoginBonusList_C_SetData) == 0x0000C8, "Wrong size on LibraryMenu_LoginBonusList_C_SetData");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetData, DataList) == 0x000000, "Member 'LibraryMenu_LoginBonusList_C_SetData::DataList' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetData, MouseClick) == 0x0000A0, "Member 'LibraryMenu_LoginBonusList_C_SetData::MouseClick' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetData, WorkWidget) == 0x0000A8, "Member 'LibraryMenu_LoginBonusList_C_SetData::WorkWidget' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetData, Old_WorkWidget) == 0x0000B0, "Member 'LibraryMenu_LoginBonusList_C_SetData::Old_WorkWidget' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetData, LoopEnd) == 0x0000B8, "Member 'LibraryMenu_LoginBonusList_C_SetData::LoopEnd' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetData, MaxDay) == 0x0000BC, "Member 'LibraryMenu_LoginBonusList_C_SetData::MaxDay' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetData, LineIndex) == 0x0000C0, "Member 'LibraryMenu_LoginBonusList_C_SetData::LineIndex' has a wrong offset!");

// Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.SetBannerImage
// 0x0020 (0x0020 - 0x0000)
struct LibraryMenu_LoginBonusList_C_SetBannerImage final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E39[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2DDynamic*                      TextureData;                                       // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULibraryMenu_LoginBonus_BannerImage_C*  CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_LoginBonusList_C_SetBannerImage) == 0x000008, "Wrong alignment on LibraryMenu_LoginBonusList_C_SetBannerImage");
static_assert(sizeof(LibraryMenu_LoginBonusList_C_SetBannerImage) == 0x000020, "Wrong size on LibraryMenu_LoginBonusList_C_SetBannerImage");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerImage, Param_Index) == 0x000000, "Member 'LibraryMenu_LoginBonusList_C_SetBannerImage::Param_Index' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerImage, TextureData) == 0x000008, "Member 'LibraryMenu_LoginBonusList_C_SetBannerImage::TextureData' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerImage, CallFunc_Array_Get_Item) == 0x000010, "Member 'LibraryMenu_LoginBonusList_C_SetBannerImage::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerImage, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000018, "Member 'LibraryMenu_LoginBonusList_C_SetBannerImage::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");

// Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.SetBannerData
// 0x0090 (0x0090 - 0x0000)
struct LibraryMenu_LoginBonusList_C_SetBannerData final
{
public:
	TArray<struct FSBLoginBonusWindowData>        DataList;                                          // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         LoopEnd;                                           // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 ID, class ULibraryMenu_LoginBonus_BannerImage_C* SelectedBtn)> K2Node_CreateDelegate_OutputDelegate;              // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0034(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E3A[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_1;                   // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULibraryMenu_LoginBonus_BannerImage_C*  CallFunc_Create_ReturnValue;                       // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue_2;                   // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E3B[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ULibraryMenu_LoginBonus_BannerImage_C*  CallFunc_Array_Get_Item;                           // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0085(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E3C[0x2];                                     // 0x0086(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_LoginBonusList_C_SetBannerData) == 0x000008, "Wrong alignment on LibraryMenu_LoginBonusList_C_SetBannerData");
static_assert(sizeof(LibraryMenu_LoginBonusList_C_SetBannerData) == 0x000090, "Wrong size on LibraryMenu_LoginBonusList_C_SetBannerData");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerData, DataList) == 0x000000, "Member 'LibraryMenu_LoginBonusList_C_SetBannerData::DataList' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerData, LoopEnd) == 0x000010, "Member 'LibraryMenu_LoginBonusList_C_SetBannerData::LoopEnd' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerData, Temp_int_Array_Index_Variable) == 0x000014, "Member 'LibraryMenu_LoginBonusList_C_SetBannerData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerData, CallFunc_Array_LastIndex_ReturnValue) == 0x000018, "Member 'LibraryMenu_LoginBonusList_C_SetBannerData::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerData, K2Node_CreateDelegate_OutputDelegate) == 0x00001C, "Member 'LibraryMenu_LoginBonusList_C_SetBannerData::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerData, Temp_int_Loop_Counter_Variable) == 0x00002C, "Member 'LibraryMenu_LoginBonusList_C_SetBannerData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerData, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'LibraryMenu_LoginBonusList_C_SetBannerData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerData, K2Node_MakeStruct_Margin) == 0x000034, "Member 'LibraryMenu_LoginBonusList_C_SetBannerData::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerData, CallFunc_AddChild_ReturnValue) == 0x000048, "Member 'LibraryMenu_LoginBonusList_C_SetBannerData::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerData, CallFunc_AddChild_ReturnValue_1) == 0x000050, "Member 'LibraryMenu_LoginBonusList_C_SetBannerData::CallFunc_AddChild_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerData, CallFunc_Create_ReturnValue) == 0x000058, "Member 'LibraryMenu_LoginBonusList_C_SetBannerData::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerData, CallFunc_AddChild_ReturnValue_2) == 0x000060, "Member 'LibraryMenu_LoginBonusList_C_SetBannerData::CallFunc_AddChild_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerData, CallFunc_Array_Add_ReturnValue) == 0x000068, "Member 'LibraryMenu_LoginBonusList_C_SetBannerData::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerData, Temp_int_Variable) == 0x00006C, "Member 'LibraryMenu_LoginBonusList_C_SetBannerData::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerData, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000070, "Member 'LibraryMenu_LoginBonusList_C_SetBannerData::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerData, CallFunc_Array_Get_Item) == 0x000078, "Member 'LibraryMenu_LoginBonusList_C_SetBannerData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerData, CallFunc_Array_Length_ReturnValue) == 0x000080, "Member 'LibraryMenu_LoginBonusList_C_SetBannerData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerData, CallFunc_Less_IntInt_ReturnValue) == 0x000084, "Member 'LibraryMenu_LoginBonusList_C_SetBannerData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerData, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000085, "Member 'LibraryMenu_LoginBonusList_C_SetBannerData::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerData, CallFunc_Add_IntInt_ReturnValue_1) == 0x000088, "Member 'LibraryMenu_LoginBonusList_C_SetBannerData::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");

// Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.SetBannerViewIndex
// 0x0070 (0x0070 - 0x0000)
struct LibraryMenu_LoginBonusList_C_SetBannerViewIndex final
{
public:
	int32                                         ViewIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ScrollSize;                                        // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NewIndex;                                          // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x000E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E3D[0x1];                                     // 0x000F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E3E[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E3F[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_SelectInt_ReturnValue_1;                  // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULibraryMenu_LoginBonus_BannerImage_C*  CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E40[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetDesiredSize_ReturnValue;               // 0x003C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E41[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector2D_X;                          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E42[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Min_ReturnValue;                          // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Max_ReturnValue;                          // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_LoginBonusList_C_SetBannerViewIndex) == 0x000008, "Wrong alignment on LibraryMenu_LoginBonusList_C_SetBannerViewIndex");
static_assert(sizeof(LibraryMenu_LoginBonusList_C_SetBannerViewIndex) == 0x000070, "Wrong size on LibraryMenu_LoginBonusList_C_SetBannerViewIndex");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerViewIndex, ViewIndex) == 0x000000, "Member 'LibraryMenu_LoginBonusList_C_SetBannerViewIndex::ViewIndex' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerViewIndex, ScrollSize) == 0x000004, "Member 'LibraryMenu_LoginBonusList_C_SetBannerViewIndex::ScrollSize' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerViewIndex, NewIndex) == 0x000008, "Member 'LibraryMenu_LoginBonusList_C_SetBannerViewIndex::NewIndex' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerViewIndex, Temp_bool_Variable) == 0x00000C, "Member 'LibraryMenu_LoginBonusList_C_SetBannerViewIndex::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerViewIndex, CallFunc_Not_PreBool_ReturnValue) == 0x00000D, "Member 'LibraryMenu_LoginBonusList_C_SetBannerViewIndex::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerViewIndex, CallFunc_NotEqual_IntInt_ReturnValue) == 0x00000E, "Member 'LibraryMenu_LoginBonusList_C_SetBannerViewIndex::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerViewIndex, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'LibraryMenu_LoginBonusList_C_SetBannerViewIndex::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerViewIndex, CallFunc_Subtract_IntInt_ReturnValue) == 0x000014, "Member 'LibraryMenu_LoginBonusList_C_SetBannerViewIndex::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerViewIndex, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000018, "Member 'LibraryMenu_LoginBonusList_C_SetBannerViewIndex::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerViewIndex, CallFunc_SelectInt_ReturnValue) == 0x00001C, "Member 'LibraryMenu_LoginBonusList_C_SetBannerViewIndex::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerViewIndex, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000020, "Member 'LibraryMenu_LoginBonusList_C_SetBannerViewIndex::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerViewIndex, CallFunc_SelectInt_ReturnValue_1) == 0x000024, "Member 'LibraryMenu_LoginBonusList_C_SetBannerViewIndex::CallFunc_SelectInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerViewIndex, Temp_int_Variable) == 0x000028, "Member 'LibraryMenu_LoginBonusList_C_SetBannerViewIndex::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerViewIndex, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x00002C, "Member 'LibraryMenu_LoginBonusList_C_SetBannerViewIndex::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerViewIndex, CallFunc_Array_Get_Item) == 0x000030, "Member 'LibraryMenu_LoginBonusList_C_SetBannerViewIndex::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerViewIndex, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000038, "Member 'LibraryMenu_LoginBonusList_C_SetBannerViewIndex::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerViewIndex, CallFunc_GetDesiredSize_ReturnValue) == 0x00003C, "Member 'LibraryMenu_LoginBonusList_C_SetBannerViewIndex::CallFunc_GetDesiredSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerViewIndex, CallFunc_BooleanAND_ReturnValue) == 0x000044, "Member 'LibraryMenu_LoginBonusList_C_SetBannerViewIndex::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerViewIndex, CallFunc_BreakVector2D_X) == 0x000048, "Member 'LibraryMenu_LoginBonusList_C_SetBannerViewIndex::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerViewIndex, CallFunc_BreakVector2D_Y) == 0x00004C, "Member 'LibraryMenu_LoginBonusList_C_SetBannerViewIndex::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerViewIndex, CallFunc_Add_FloatFloat_ReturnValue) == 0x000050, "Member 'LibraryMenu_LoginBonusList_C_SetBannerViewIndex::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerViewIndex, CallFunc_Add_IntInt_ReturnValue) == 0x000054, "Member 'LibraryMenu_LoginBonusList_C_SetBannerViewIndex::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerViewIndex, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x000058, "Member 'LibraryMenu_LoginBonusList_C_SetBannerViewIndex::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerViewIndex, CallFunc_Array_Length_ReturnValue_1) == 0x00005C, "Member 'LibraryMenu_LoginBonusList_C_SetBannerViewIndex::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerViewIndex, CallFunc_Subtract_IntInt_ReturnValue_2) == 0x000060, "Member 'LibraryMenu_LoginBonusList_C_SetBannerViewIndex::CallFunc_Subtract_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerViewIndex, CallFunc_Min_ReturnValue) == 0x000064, "Member 'LibraryMenu_LoginBonusList_C_SetBannerViewIndex::CallFunc_Min_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerViewIndex, CallFunc_Max_ReturnValue) == 0x000068, "Member 'LibraryMenu_LoginBonusList_C_SetBannerViewIndex::CallFunc_Max_ReturnValue' has a wrong offset!");

// Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.SetBannerTexture
// 0x0020 (0x0020 - 0x0000)
struct LibraryMenu_LoginBonusList_C_SetBannerTexture final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E43[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Texture;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULibraryMenu_LoginBonus_BannerImage_C*  CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(LibraryMenu_LoginBonusList_C_SetBannerTexture) == 0x000008, "Wrong alignment on LibraryMenu_LoginBonusList_C_SetBannerTexture");
static_assert(sizeof(LibraryMenu_LoginBonusList_C_SetBannerTexture) == 0x000020, "Wrong size on LibraryMenu_LoginBonusList_C_SetBannerTexture");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerTexture, Param_Index) == 0x000000, "Member 'LibraryMenu_LoginBonusList_C_SetBannerTexture::Param_Index' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerTexture, Texture) == 0x000008, "Member 'LibraryMenu_LoginBonusList_C_SetBannerTexture::Texture' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerTexture, CallFunc_Array_Get_Item) == 0x000010, "Member 'LibraryMenu_LoginBonusList_C_SetBannerTexture::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_SetBannerTexture, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000018, "Member 'LibraryMenu_LoginBonusList_C_SetBannerTexture::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");

// Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.UpdateBannerViewIndex
// 0x0014 (0x0014 - 0x0000)
struct LibraryMenu_LoginBonusList_C_UpdateBannerViewIndex final
{
public:
	int32                                         CheckIndex;                                        // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x000D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7E44[0x2];                                     // 0x000E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_LoginBonusList_C_UpdateBannerViewIndex) == 0x000004, "Wrong alignment on LibraryMenu_LoginBonusList_C_UpdateBannerViewIndex");
static_assert(sizeof(LibraryMenu_LoginBonusList_C_UpdateBannerViewIndex) == 0x000014, "Wrong size on LibraryMenu_LoginBonusList_C_UpdateBannerViewIndex");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_UpdateBannerViewIndex, CheckIndex) == 0x000000, "Member 'LibraryMenu_LoginBonusList_C_UpdateBannerViewIndex::CheckIndex' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_UpdateBannerViewIndex, CallFunc_Subtract_IntInt_ReturnValue) == 0x000004, "Member 'LibraryMenu_LoginBonusList_C_UpdateBannerViewIndex::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_UpdateBannerViewIndex, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'LibraryMenu_LoginBonusList_C_UpdateBannerViewIndex::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_UpdateBannerViewIndex, CallFunc_Greater_IntInt_ReturnValue) == 0x00000C, "Member 'LibraryMenu_LoginBonusList_C_UpdateBannerViewIndex::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_UpdateBannerViewIndex, CallFunc_Less_IntInt_ReturnValue) == 0x00000D, "Member 'LibraryMenu_LoginBonusList_C_UpdateBannerViewIndex::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_UpdateBannerViewIndex, CallFunc_Array_Find_ReturnValue) == 0x000010, "Member 'LibraryMenu_LoginBonusList_C_UpdateBannerViewIndex::CallFunc_Array_Find_ReturnValue' has a wrong offset!");

// Function LibraryMenu_LoginBonusList.LibraryMenu_LoginBonusList_C.Play Anim Login Bonus List In
// 0x0008 (0x0008 - 0x0000)
struct LibraryMenu_LoginBonusList_C_Play_Anim_Login_Bonus_List_In final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LibraryMenu_LoginBonusList_C_Play_Anim_Login_Bonus_List_In) == 0x000008, "Wrong alignment on LibraryMenu_LoginBonusList_C_Play_Anim_Login_Bonus_List_In");
static_assert(sizeof(LibraryMenu_LoginBonusList_C_Play_Anim_Login_Bonus_List_In) == 0x000008, "Wrong size on LibraryMenu_LoginBonusList_C_Play_Anim_Login_Bonus_List_In");
static_assert(offsetof(LibraryMenu_LoginBonusList_C_Play_Anim_Login_Bonus_List_In, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'LibraryMenu_LoginBonusList_C_Play_Anim_Login_Bonus_List_In::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

}

