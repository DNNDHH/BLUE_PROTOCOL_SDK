#pragma once

 

// Package: PartyMemberList_ContentsLabel

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "E_PartyListPartyType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PartyMemberList_ContentsLabel.PartyMemberList_ContentsLabel_C
// 0x0010 (0x0288 - 0x0278)
class UPartyMemberList_ContentsLabel_C final : public UUserWidget
{
public:
	class UImage*                                 Image_LabelBG;                                     // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Label_PartyType;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetContentsType(E_PartyListPartyType InPartyType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PartyMemberList_ContentsLabel_C">();
	}
	static class UPartyMemberList_ContentsLabel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPartyMemberList_ContentsLabel_C>();
	}
};
static_assert(alignof(UPartyMemberList_ContentsLabel_C) == 0x000008, "Wrong alignment on UPartyMemberList_ContentsLabel_C");
static_assert(sizeof(UPartyMemberList_ContentsLabel_C) == 0x000288, "Wrong size on UPartyMemberList_ContentsLabel_C");
static_assert(offsetof(UPartyMemberList_ContentsLabel_C, Image_LabelBG) == 0x000278, "Member 'UPartyMemberList_ContentsLabel_C::Image_LabelBG' has a wrong offset!");
static_assert(offsetof(UPartyMemberList_ContentsLabel_C, Label_PartyType) == 0x000280, "Member 'UPartyMemberList_ContentsLabel_C::Label_PartyType' has a wrong offset!");

}

