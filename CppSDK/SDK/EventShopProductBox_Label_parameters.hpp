#pragma once

 

// Package: EventShopProductBox_Label

#include "Basic.hpp"


namespace SDK::Params
{

// Function EventShopProductBox_Label.EventShopProductBox_Label_C.OnBtnSelected__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct EventShopProductBox_Label_C_OnBtnSelected__DelegateSignature final
{
public:
	class UEventShopProductBox_Item_C*            Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopProductBox_Label_C_OnBtnSelected__DelegateSignature) == 0x000008, "Wrong alignment on EventShopProductBox_Label_C_OnBtnSelected__DelegateSignature");
static_assert(sizeof(EventShopProductBox_Label_C_OnBtnSelected__DelegateSignature) == 0x000008, "Wrong size on EventShopProductBox_Label_C_OnBtnSelected__DelegateSignature");
static_assert(offsetof(EventShopProductBox_Label_C_OnBtnSelected__DelegateSignature, Item) == 0x000000, "Member 'EventShopProductBox_Label_C_OnBtnSelected__DelegateSignature::Item' has a wrong offset!");

// Function EventShopProductBox_Label.EventShopProductBox_Label_C.SetLabel
// 0x0038 (0x0038 - 0x0000)
struct EventShopProductBox_Label_C_SetLabel final
{
public:
	bool                                          IsPickUp;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47D9[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LabelText;                                         // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EventShopProductBox_Label_C_SetLabel) == 0x000008, "Wrong alignment on EventShopProductBox_Label_C_SetLabel");
static_assert(sizeof(EventShopProductBox_Label_C_SetLabel) == 0x000038, "Wrong size on EventShopProductBox_Label_C_SetLabel");
static_assert(offsetof(EventShopProductBox_Label_C_SetLabel, IsPickUp) == 0x000000, "Member 'EventShopProductBox_Label_C_SetLabel::IsPickUp' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Label_C_SetLabel, LabelText) == 0x000008, "Member 'EventShopProductBox_Label_C_SetLabel::LabelText' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Label_C_SetLabel, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'EventShopProductBox_Label_C_SetLabel::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(EventShopProductBox_Label_C_SetLabel, CallFunc_SelectInt_ReturnValue) == 0x000030, "Member 'EventShopProductBox_Label_C_SetLabel::CallFunc_SelectInt_ReturnValue' has a wrong offset!");

}

