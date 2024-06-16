#pragma once

 

// Package: BuffMultiList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BuffMultiList.BuffMultiList_C
// 0x0020 (0x02B8 - 0x0298)
class UBuffMultiList_C final : public USBBuffListWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UGridPanel*                             List;                                              // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsMultiLine;                                       // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_71C3[0x3];                                     // 0x02A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MultiRowMax;                                       // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         MultiCollumMax;                                    // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BuffMultiList(int32 EntryPoint);
	void UnbindBattleStatusComponent();
	void BindBattleStatusComponent();
	void UpdateList();
	class USBBuffIcon* OnCreateIcon();

	class UPanelWidget* GetList() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BuffMultiList_C">();
	}
	static class UBuffMultiList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBuffMultiList_C>();
	}
};
static_assert(alignof(UBuffMultiList_C) == 0x000008, "Wrong alignment on UBuffMultiList_C");
static_assert(sizeof(UBuffMultiList_C) == 0x0002B8, "Wrong size on UBuffMultiList_C");
static_assert(offsetof(UBuffMultiList_C, UberGraphFrame) == 0x000298, "Member 'UBuffMultiList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBuffMultiList_C, List) == 0x0002A0, "Member 'UBuffMultiList_C::List' has a wrong offset!");
static_assert(offsetof(UBuffMultiList_C, IsMultiLine) == 0x0002A8, "Member 'UBuffMultiList_C::IsMultiLine' has a wrong offset!");
static_assert(offsetof(UBuffMultiList_C, MultiRowMax) == 0x0002AC, "Member 'UBuffMultiList_C::MultiRowMax' has a wrong offset!");
static_assert(offsetof(UBuffMultiList_C, MultiCollumMax) == 0x0002B0, "Member 'UBuffMultiList_C::MultiCollumMax' has a wrong offset!");

}

