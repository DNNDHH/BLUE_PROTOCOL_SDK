#pragma once

 

// Package: BuffList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BuffList.BuffList_C
// 0x0010 (0x02A8 - 0x0298)
class UBuffList_C final : public USBBuffListWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         List;                                              // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BuffList(int32 EntryPoint);
	void UnbindBattleStatusComponent();
	void BindBattleStatusComponent();
	void UpdateList();
	class USBBuffIcon* OnCreateIcon();

	class UPanelWidget* GetList() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BuffList_C">();
	}
	static class UBuffList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBuffList_C>();
	}
};
static_assert(alignof(UBuffList_C) == 0x000008, "Wrong alignment on UBuffList_C");
static_assert(sizeof(UBuffList_C) == 0x0002A8, "Wrong size on UBuffList_C");
static_assert(offsetof(UBuffList_C, UberGraphFrame) == 0x000298, "Member 'UBuffList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBuffList_C, List) == 0x0002A0, "Member 'UBuffList_C::List' has a wrong offset!");

}

