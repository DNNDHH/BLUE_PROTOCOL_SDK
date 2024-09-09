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
	 * WidgetBlueprintGeneratedClass DebugList.DebugList_C
	 * Size -> 0x0018 (FullSize[0x04B8] - InheritedSize[0x04A0])
	 */
	class UDebugList_C : public UDebugMenu_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FString                                              ListName;                                                // 0x04A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void GetQuestStatusString(EQuestStatus InStatus, class FString* Output);
		void MakePlayerLocationtList();
		void MakeAcceptedQuestList();
		void SetInitialValue(TArray<class FString>* InitialValue);
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void HandleOnExecutedConsoleCommand();
		void BindDebugButtonOnClicked(class UDebugButton_C* DebugButton);
		void EventDispatcher_OnClicked__1(class UDebugButton_C* DebugButton);
		void OnClicked__1();
		void ExecuteUbergraph_DebugList(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
