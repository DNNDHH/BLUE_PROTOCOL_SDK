#pragma once

 

// Package: EventIconToolTip

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EventIconToolTip.EventIconToolTip_C
// 0x0018 (0x0290 - 0x0278)
class UEventIconToolTip_C final : public UUserWidget
{
public:
	class UImage*                                 BG;                                                // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LabelName;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LabelType;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetInfo(int32 InItemIndex, bool bUnidentified);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EventIconToolTip_C">();
	}
	static class UEventIconToolTip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEventIconToolTip_C>();
	}
};
static_assert(alignof(UEventIconToolTip_C) == 0x000008, "Wrong alignment on UEventIconToolTip_C");
static_assert(sizeof(UEventIconToolTip_C) == 0x000290, "Wrong size on UEventIconToolTip_C");
static_assert(offsetof(UEventIconToolTip_C, BG) == 0x000278, "Member 'UEventIconToolTip_C::BG' has a wrong offset!");
static_assert(offsetof(UEventIconToolTip_C, LabelName) == 0x000280, "Member 'UEventIconToolTip_C::LabelName' has a wrong offset!");
static_assert(offsetof(UEventIconToolTip_C, LabelType) == 0x000288, "Member 'UEventIconToolTip_C::LabelType' has a wrong offset!");

}

