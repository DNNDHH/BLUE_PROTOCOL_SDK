#pragma once

 

// Package: DungeonTraverse

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DungeonTraverse.DungeonTraverse_C
// 0x0020 (0x0298 - 0x0278)
class UDungeonTraverse_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             DebugText;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_39;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   Name_DungeonTraverse_C;                            // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_DungeonTraverse(int32 EntryPoint);
	void Construct();
	void Setup(const struct FAnchors& InAnchors, const struct FVector2D& InPosition, const struct FVector2D& InSize);
	void SetName(class FName Param_Name);
	void SetVisibleDebugText();

	void GetName(class FName* Param_Name) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DungeonTraverse_C">();
	}
	static class UDungeonTraverse_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDungeonTraverse_C>();
	}
};
static_assert(alignof(UDungeonTraverse_C) == 0x000008, "Wrong alignment on UDungeonTraverse_C");
static_assert(sizeof(UDungeonTraverse_C) == 0x000298, "Wrong size on UDungeonTraverse_C");
static_assert(offsetof(UDungeonTraverse_C, UberGraphFrame) == 0x000278, "Member 'UDungeonTraverse_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDungeonTraverse_C, DebugText) == 0x000280, "Member 'UDungeonTraverse_C::DebugText' has a wrong offset!");
static_assert(offsetof(UDungeonTraverse_C, Image_39) == 0x000288, "Member 'UDungeonTraverse_C::Image_39' has a wrong offset!");
static_assert(offsetof(UDungeonTraverse_C, Name_DungeonTraverse_C) == 0x000290, "Member 'UDungeonTraverse_C::Name_DungeonTraverse_C' has a wrong offset!");

}

