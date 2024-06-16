#pragma once

 

// Package: LibraryMenu_Monster_ElementData

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LibraryMenu_Monster_ElementData.LibraryMenu_Monster_ElementData_C
// 0x00E8 (0x0360 - 0x0278)
class ULibraryMenu_Monster_ElementData_C final : public UUserWidget
{
public:
	class USBRichTextBlock*                       AbnormalConditionText;                             // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       AilmentMaskText;                                   // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        AilmentSwitcher;                                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       ElementMaskText;                                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        ElementSwitcher;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       ElementText;                                       // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HLine;                                             // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Bind;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Dark;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Darkness;                                     // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Drain;                                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Fear;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Fire;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_FixTarget;                                    // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Ice;                                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Light;                                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Nappo;                                        // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Palsy;                                        // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Poison;                                       // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Rock;                                         // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Sealed;                                       // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Sleep;                                        // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_STDown;                                       // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Stun;                                         // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_STZero;                                       // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Thunder;                                      // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          Initialize;                                        // 0x0348(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5EA0[0x7];                                     // 0x0349(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UImage*>                         IconList;                                          // 0x0350(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void Init();
	void ResetIconVisibility();
	void Set_Icon_Data(TArray<int32>& VisibleIndexList, int32 Offset);
	void IconMaskMode();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LibraryMenu_Monster_ElementData_C">();
	}
	static class ULibraryMenu_Monster_ElementData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULibraryMenu_Monster_ElementData_C>();
	}
};
static_assert(alignof(ULibraryMenu_Monster_ElementData_C) == 0x000008, "Wrong alignment on ULibraryMenu_Monster_ElementData_C");
static_assert(sizeof(ULibraryMenu_Monster_ElementData_C) == 0x000360, "Wrong size on ULibraryMenu_Monster_ElementData_C");
static_assert(offsetof(ULibraryMenu_Monster_ElementData_C, AbnormalConditionText) == 0x000278, "Member 'ULibraryMenu_Monster_ElementData_C::AbnormalConditionText' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ElementData_C, AilmentMaskText) == 0x000280, "Member 'ULibraryMenu_Monster_ElementData_C::AilmentMaskText' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ElementData_C, AilmentSwitcher) == 0x000288, "Member 'ULibraryMenu_Monster_ElementData_C::AilmentSwitcher' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ElementData_C, ElementMaskText) == 0x000290, "Member 'ULibraryMenu_Monster_ElementData_C::ElementMaskText' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ElementData_C, ElementSwitcher) == 0x000298, "Member 'ULibraryMenu_Monster_ElementData_C::ElementSwitcher' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ElementData_C, ElementText) == 0x0002A0, "Member 'ULibraryMenu_Monster_ElementData_C::ElementText' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ElementData_C, HLine) == 0x0002A8, "Member 'ULibraryMenu_Monster_ElementData_C::HLine' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ElementData_C, Icon_Bind) == 0x0002B0, "Member 'ULibraryMenu_Monster_ElementData_C::Icon_Bind' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ElementData_C, Icon_Dark) == 0x0002B8, "Member 'ULibraryMenu_Monster_ElementData_C::Icon_Dark' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ElementData_C, Icon_Darkness) == 0x0002C0, "Member 'ULibraryMenu_Monster_ElementData_C::Icon_Darkness' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ElementData_C, Icon_Drain) == 0x0002C8, "Member 'ULibraryMenu_Monster_ElementData_C::Icon_Drain' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ElementData_C, Icon_Fear) == 0x0002D0, "Member 'ULibraryMenu_Monster_ElementData_C::Icon_Fear' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ElementData_C, Icon_Fire) == 0x0002D8, "Member 'ULibraryMenu_Monster_ElementData_C::Icon_Fire' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ElementData_C, Icon_FixTarget) == 0x0002E0, "Member 'ULibraryMenu_Monster_ElementData_C::Icon_FixTarget' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ElementData_C, Icon_Ice) == 0x0002E8, "Member 'ULibraryMenu_Monster_ElementData_C::Icon_Ice' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ElementData_C, Icon_Light) == 0x0002F0, "Member 'ULibraryMenu_Monster_ElementData_C::Icon_Light' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ElementData_C, Icon_Nappo) == 0x0002F8, "Member 'ULibraryMenu_Monster_ElementData_C::Icon_Nappo' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ElementData_C, Icon_Palsy) == 0x000300, "Member 'ULibraryMenu_Monster_ElementData_C::Icon_Palsy' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ElementData_C, Icon_Poison) == 0x000308, "Member 'ULibraryMenu_Monster_ElementData_C::Icon_Poison' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ElementData_C, Icon_Rock) == 0x000310, "Member 'ULibraryMenu_Monster_ElementData_C::Icon_Rock' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ElementData_C, Icon_Sealed) == 0x000318, "Member 'ULibraryMenu_Monster_ElementData_C::Icon_Sealed' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ElementData_C, Icon_Sleep) == 0x000320, "Member 'ULibraryMenu_Monster_ElementData_C::Icon_Sleep' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ElementData_C, Icon_STDown) == 0x000328, "Member 'ULibraryMenu_Monster_ElementData_C::Icon_STDown' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ElementData_C, Icon_Stun) == 0x000330, "Member 'ULibraryMenu_Monster_ElementData_C::Icon_Stun' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ElementData_C, Icon_STZero) == 0x000338, "Member 'ULibraryMenu_Monster_ElementData_C::Icon_STZero' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ElementData_C, Icon_Thunder) == 0x000340, "Member 'ULibraryMenu_Monster_ElementData_C::Icon_Thunder' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ElementData_C, Initialize) == 0x000348, "Member 'ULibraryMenu_Monster_ElementData_C::Initialize' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Monster_ElementData_C, IconList) == 0x000350, "Member 'ULibraryMenu_Monster_ElementData_C::IconList' has a wrong offset!");

}

