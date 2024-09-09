#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass OnMoveableBuffIcon.OnMoveableBuffIcon_C
	 * Size -> 0x0020 (FullSize[0x0298] - InheritedSize[0x0278])
	 */
	class UOnMoveableBuffIcon_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBuffMultiList_C*                                    BufMultiList;                                            // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             EditSize;                                                // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Line1;                                                   // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void SetVisibleLine(bool IsVisible);
		void SetEditMode(bool EditMode);
		void ResetBuffIcon();
		void SetupBuffIcon();
		void Unbind();
		void Bind();
		void Terminate();
		void Initialize();
		void BndEvt__OnMoveableBufIcon_BufMultiList_K2Node_ComponentBoundEvent_0_OnClientRecieveBattleStatusDelegete__DelegateSignature();
		void Construct();
		void OnChangePlayerCharacterDelegate(class APawn* InPawn);
		void Destruct();
		void BindOnChangePlayerCharacter();
		void UnbindOnChangePlayerCharacter();
		void ExecuteUbergraph_OnMoveableBuffIcon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
