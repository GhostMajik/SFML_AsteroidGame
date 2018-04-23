#ifndef BOOK_MENUSTATE_HPP
#define BOOK_MENUSTATE_HPP

#include <Book/State.hpp>
#include <Book/Container.hpp>
#include <Book/ResourceHolder.hpp>
#include <Book/ResourceIdentifiers.hpp>

#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Text.hpp>


class MenuState : public State
{
	public:
								MenuState(StateStack& stack, Context context);

		virtual void			draw();
		virtual bool			update(sf::Time dt);
		virtual bool			handleEvent(const sf::Event& event);


	private:
		sf::Sprite				mBackgroundSprite;
		sf::Text				mTitleText;
		FontHolder				mFonts;
		GUI::Container			mGUIContainer;
};

#endif // BOOK_MENUSTATE_HPP
