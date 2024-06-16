#pragma once

 

// Package: MapEditPlate

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MapEditPlate.MapEditPlate_C
// 0x0010 (0x0288 - 0x0278)
class UMapEditPlate_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBTextKeyIcon_C*                       TextKey;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_MapEditPlate(int32 EntryPoint);
	void Destruct();
	void Construct();
	void BndEvt__MapEditPlate_TextKey_K2Node_ComponentBoundEvent_2_OnUpdateKeyConfig__DelegateSignature();
	void BndEvt__MapEditPlate_TextKey_K2Node_ComponentBoundEvent_1_OnChangePadSkinType__DelegateSignature();
	void BndEvt__MapEditPlate_TextKey_K2Node_ComponentBoundEvent_0_OnUpdateOperationMode__DelegateSignature();
	void SetText();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MapEditPlate_C">();
	}
	static class UMapEditPlate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMapEditPlate_C>();
	}
};
static_assert(alignof(UMapEditPlate_C) == 0x000008, "Wrong alignment on UMapEditPlate_C");
static_assert(sizeof(UMapEditPlate_C) == 0x000288, "Wrong size on UMapEditPlate_C");
static_assert(offsetof(UMapEditPlate_C, UberGraphFrame) == 0x000278, "Member 'UMapEditPlate_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMapEditPlate_C, TextKey) == 0x000280, "Member 'UMapEditPlate_C::TextKey' has a wrong offset!");

}

