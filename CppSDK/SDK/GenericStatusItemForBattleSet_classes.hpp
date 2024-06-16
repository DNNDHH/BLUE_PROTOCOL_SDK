#pragma once

 

// Package: GenericStatusItemForBattleSet

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GenericStatusItemForBattleSet.GenericStatusItemForBattleSet_C
// 0x0020 (0x0298 - 0x0278)
class UGenericStatusItemForBattleSet_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBRuntimeTextBlock*                    Txt_Heading;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_Value;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         HeadingTextId;                                     // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         Value;                                             // 0x0294(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GenericStatusItemForBattleSet(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetHeading(int32 InHeadingTextId);
	void SetValue(int32 InValue);
	void SetValueText(const class FText& InText);
	void SetPrevValue(int32 PrevValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GenericStatusItemForBattleSet_C">();
	}
	static class UGenericStatusItemForBattleSet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGenericStatusItemForBattleSet_C>();
	}
};
static_assert(alignof(UGenericStatusItemForBattleSet_C) == 0x000008, "Wrong alignment on UGenericStatusItemForBattleSet_C");
static_assert(sizeof(UGenericStatusItemForBattleSet_C) == 0x000298, "Wrong size on UGenericStatusItemForBattleSet_C");
static_assert(offsetof(UGenericStatusItemForBattleSet_C, UberGraphFrame) == 0x000278, "Member 'UGenericStatusItemForBattleSet_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGenericStatusItemForBattleSet_C, Txt_Heading) == 0x000280, "Member 'UGenericStatusItemForBattleSet_C::Txt_Heading' has a wrong offset!");
static_assert(offsetof(UGenericStatusItemForBattleSet_C, Txt_Value) == 0x000288, "Member 'UGenericStatusItemForBattleSet_C::Txt_Value' has a wrong offset!");
static_assert(offsetof(UGenericStatusItemForBattleSet_C, HeadingTextId) == 0x000290, "Member 'UGenericStatusItemForBattleSet_C::HeadingTextId' has a wrong offset!");
static_assert(offsetof(UGenericStatusItemForBattleSet_C, Value) == 0x000294, "Member 'UGenericStatusItemForBattleSet_C::Value' has a wrong offset!");

}

