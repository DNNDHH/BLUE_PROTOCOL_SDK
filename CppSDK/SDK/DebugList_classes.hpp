#pragma once

 

// Package: DebugList

#include "Basic.hpp"

#include "DebugMenu_classes.hpp"
#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DebugList.DebugList_C
// 0x0018 (0x04B8 - 0x04A0)
class UDebugList_C final : public UDebugMenu_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_DebugList_C;                        // 0x04A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FString                                 ListName;                                          // 0x04A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_DebugList(int32 EntryPoint);
	void OnClicked______0();
	void EventDispatcher_OnClicked______0(class UDebugButton_C* DebugButton);
	void BindDebugButtonOnClicked(class UDebugButton_C* DebugButton);
	void HandleOnExecutedConsoleCommand();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void SetInitialValue(TArray<class FString>& Param_InitialValue);
	void MakeAcceptedQuestList();
	void MakePlayerLocationtList();
	void GetQuestStatusString(EQuestStatus InStatus, class FString* Output);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DebugList_C">();
	}
	static class UDebugList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDebugList_C>();
	}
};
static_assert(alignof(UDebugList_C) == 0x000008, "Wrong alignment on UDebugList_C");
static_assert(sizeof(UDebugList_C) == 0x0004B8, "Wrong size on UDebugList_C");
static_assert(offsetof(UDebugList_C, UberGraphFrame_DebugList_C) == 0x0004A0, "Member 'UDebugList_C::UberGraphFrame_DebugList_C' has a wrong offset!");
static_assert(offsetof(UDebugList_C, ListName) == 0x0004A8, "Member 'UDebugList_C::ListName' has a wrong offset!");

}

