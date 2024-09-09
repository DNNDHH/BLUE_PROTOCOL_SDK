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
	 * WidgetBlueprintGeneratedClass PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C
	 * Size -> 0x0028 (FullSize[0x02A0] - InheritedSize[0x0278])
	 */
	class UPassiveImagineInfoForBattleSetTop_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Bg01;                                                    // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HBoxForImagineSlot;                                      // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnIconBtnPressed;                                        // 0x0290(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void GetScoreInfoSwitcher(class UBattleScoreInfoSwitcher_C** NewParam);
		void GetPassiveImagineInfoUnit(ESBPlayerPassiveImagineSlotType InPassiveImagineSlotType, bool* IsValid, class UPassiveImagineInfoUnitForBattleSet_C** OutImagineInfoUnit);
		void SetupPassiveImagineIconBtnList();
		void GetPassiveImagineIconBtn(ESBPlayerPassiveImagineSlotType InPassiveImagineSlotType, bool* OutIsValid, class UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C** OutImagineIconBtn);
		void CreatePassiveImagineIconBtnList();
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void OnIconBtnClicked(ESBPlayerPassiveImagineSlotType InPassiveImagineSlotType, int32_t InPassiveImagineItemId);
		void Destruct();
		void ExecuteUbergraph_PassiveImagineInfoForBattleSetTop(int32_t EntryPoint);
		void OnIconBtnPressed__DelegateSignature(ESBPlayerPassiveImagineSlotType InInnerImagineSlotType, int32_t InImagineId);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
