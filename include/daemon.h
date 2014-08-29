/**
 * Shadow Daemon -- High-Interaction Web Honeypot
 *
 *   Copyright (C) 2014 Hendrik Buchwald <hb@zecure.org>
 *
 * This file is part of Shadow Daemon. Shadow Daemon is free software: you can
 * redistribute it and/or modify it under the terms of the GNU General Public
 * License as published by the Free Software Foundation, version 2.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef DAEMON_H
#define DAEMON_H

#include <string>

namespace swd {
	/**
	 * @brief Encapsulates the daemon functionality.
	 */
	class daemon {
		public:
			/**
			 * @brief Change the uid of the process.
			 *
			 * @param user The name of the user
			 */
			void set_user(std::string user);

			/**
			 * @brief Change the gid of the process.
			 *
			 * @param group The name of the group
			 */
			void set_group(std::string group);

			/**
			 * @brief Write the pid to a file.
			 *
			 * @param file The file that the pid gets written to
			 */
			void write_pid(std::string file);

			/**
			 * @brief Change the root directory of the process.
			 *
			 * @param directory The directory that is used for chroot
			 */
			void change_root(std::string directory);

			/**
			 * @brief Detach the process and make him silent.
			 */
			void detach();
	};
}

#endif /* DAEMON_H */