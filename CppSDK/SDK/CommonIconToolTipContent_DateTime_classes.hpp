#pragma once

 

// Package: CommonIconToolTipContent_DateTime

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonIconToolTipContent_DateTime.CommonIconToolTipContent_DateTime_C
// 0x0008 (0x0280 - 0x0278)
class UCommonIconToolTipContent_DateTime_C final : public UUserWidget
{
public:
	class USBDateTimeTextBlock*                   Label_DateTime;                                    // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetDateTime(const struct FDateTime& InText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonIconToolTipContent_DateTime_C">();
	}
	static class UCommonIconToolTipContent_DateTime_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonIconToolTipContent_DateTime_C>();
	}
};
static_assert(alignof(UCommonIconToolTipContent_DateTime_C) == 0x000008, "Wrong alignment on UCommonIconToolTipContent_DateTime_C");
static_assert(sizeof(UCommonIconToolTipContent_DateTime_C) == 0x000280, "Wrong size on UCommonIconToolTipContent_DateTime_C");
static_assert(offsetof(UCommonIconToolTipContent_DateTime_C, Label_DateTime) == 0x000278, "Member 'UCommonIconToolTipContent_DateTime_C::Label_DateTime' has a wrong offset!");

}

