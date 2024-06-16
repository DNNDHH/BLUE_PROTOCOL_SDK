#pragma once

 

// Package: OnMoveableBuffIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass OnMoveableBuffIcon.OnMoveableBuffIcon_C
// 0x0020 (0x0298 - 0x0278)
class UOnMoveableBuffIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBuffMultiList_C*                       BufMultiList;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                EditSize;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line1;                                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_OnMoveableBuffIcon(int32 EntryPoint);
	void UnbindOnChangePlayerCharacter();
	void BindOnChangePlayerCharacter();
	void Destruct();
	void OnChangePlayerCharacterDelegate(class APawn* InPawn);
	void Construct();
	void BndEvt__OnMoveableBufIcon_BufMultiList_K2Node_ComponentBoundEvent_0_OnClientRecieveBattleStatusDelegete__DelegateSignature();
	void Initialize();
	void Terminate();
	void Bind();
	void Unbind();
	void SetupBuffIcon();
	void ResetBuffIcon();
	void SetEditMode(bool EditMode);
	void SetVisibleLine(bool Param_IsVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OnMoveableBuffIcon_C">();
	}
	static class UOnMoveableBuffIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOnMoveableBuffIcon_C>();
	}
};
static_assert(alignof(UOnMoveableBuffIcon_C) == 0x000008, "Wrong alignment on UOnMoveableBuffIcon_C");
static_assert(sizeof(UOnMoveableBuffIcon_C) == 0x000298, "Wrong size on UOnMoveableBuffIcon_C");
static_assert(offsetof(UOnMoveableBuffIcon_C, UberGraphFrame) == 0x000278, "Member 'UOnMoveableBuffIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOnMoveableBuffIcon_C, BufMultiList) == 0x000280, "Member 'UOnMoveableBuffIcon_C::BufMultiList' has a wrong offset!");
static_assert(offsetof(UOnMoveableBuffIcon_C, EditSize) == 0x000288, "Member 'UOnMoveableBuffIcon_C::EditSize' has a wrong offset!");
static_assert(offsetof(UOnMoveableBuffIcon_C, Line1) == 0x000290, "Member 'UOnMoveableBuffIcon_C::Line1' has a wrong offset!");

}

